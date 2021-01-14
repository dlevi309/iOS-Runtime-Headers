/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class PKCurrencyAmount, NSString;

@interface PKSearchAmountResult : NSObject <PKSearchAutocompleteToken> {

	PKCurrencyAmount* _amount;
	long long _comparison;

}

@property (nonatomic,retain) PKCurrencyAmount * amount;              //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) long long comparison;                   //@synthesize comparison=_comparison - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)comparison;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKCurrencyAmount *)amount;
-(unsigned long long)tokenType;
-(void)setComparison:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

