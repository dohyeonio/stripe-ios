//
//  STPFormEncoder.h
//  Stripe
//
//  Created by Jack Flintermann on 1/8/15.
//  Copyright (c) 2015 Stripe, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class STPBankAccount, STPCardParams;

@interface STPFormEncoder : NSObject

+ (nonnull NSData *)formEncodedDataForBankAccount:(nonnull STPBankAccount *)bankAccount;

+ (nonnull NSData *)formEncodedDataForCardParams:(nonnull STPCardParams *)card;

+ (nonnull NSString *)stringByURLEncoding:(nonnull NSString *)string;

+ (nonnull NSString *)stringByReplacingSnakeCaseWithCamelCase:(nonnull NSString *)input;

@end
