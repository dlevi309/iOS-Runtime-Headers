/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@class NSArray;

@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

	NSArray* _policies;

}

@property (nonatomic,readonly) NSArray * policies;              //@synthesize policies=_policies - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)policies;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(void)setAssertionEndpoint:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)assertionEndpoint;
-(BOOL)isEqual:(id)arg1 ;
@end

