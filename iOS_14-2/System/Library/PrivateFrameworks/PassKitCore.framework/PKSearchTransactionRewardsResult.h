/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class NSDecimalNumber, NSString;

@interface PKSearchTransactionRewardsResult : NSObject <PKSearchAutocompleteToken> {

	NSDecimalNumber* _rewardsValue;
	unsigned long long _rewardsValueUnit;

}

@property (nonatomic,retain) NSDecimalNumber * rewardsValue;                   //@synthesize rewardsValue=_rewardsValue - In the implementation block
@property (assign,nonatomic) unsigned long long rewardsValueUnit;              //@synthesize rewardsValueUnit=_rewardsValueUnit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)tokenType;
-(NSDecimalNumber *)rewardsValue;
-(void)setRewardsValue:(NSDecimalNumber *)arg1 ;
-(unsigned long long)rewardsValueUnit;
-(void)setRewardsValueUnit:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

