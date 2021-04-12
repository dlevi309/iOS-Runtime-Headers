/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class NSString;

@interface PKSearchTransactionTypeResult : NSObject <PKSearchAutocompleteToken> {

	long long _transactionType;

}

@property (assign,nonatomic) long long transactionType;              //@synthesize transactionType=_transactionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setTransactionType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)tokenType;
-(long long)transactionType;
-(BOOL)isEqual:(id)arg1 ;
@end

