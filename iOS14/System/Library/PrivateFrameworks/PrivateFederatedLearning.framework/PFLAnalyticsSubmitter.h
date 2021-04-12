/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@class NSString;

@interface PFLAnalyticsSubmitter : NSObject {

	NSString* _submitterId;

}

@property (nonatomic,readonly) NSString * submitterId;              //@synthesize submitterId=_submitterId - In the implementation block
+(id)shared;
+(id)stringForKey:(unsigned long long)arg1 ;
-(id)init;
-(void)submitAnalyticsForKey:(unsigned long long)arg1 value:(id)arg2 ;
-(NSString *)submitterId;
@end

