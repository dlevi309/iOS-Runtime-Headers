/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CPSClipInvocationPolicy : NSObject <NSSecureCoding> {

	BOOL _eligible;
	long long _reason;

}

@property (getter=isEligible,nonatomic,readonly) BOOL eligible;                    //@synthesize eligible=_eligible - In the implementation block
@property (getter=isRecoverable,nonatomic,readonly) BOOL recoverable; 
@property (nonatomic,readonly) long long reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) BOOL canShowHeroImage; 
+(BOOL)supportsSecureCoding;
+(void)requestAccountPolicyWithCompletion:(/*^block*/id)arg1 ;
+(id)ineligiblePolicyWithReason:(long long)arg1 ;
+(id)eligiblePolicy;
+(id)invocationPolicyWithAMSDict:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)reason;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRecoverable;
-(BOOL)isEligible;
-(id)initWithEligible:(BOOL)arg1 reason:(long long)arg2 ;
-(id)localizedMessageForClipMetadata:(id)arg1 ;
-(BOOL)canShowHeroImage;
@end

