/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMessageFilter.h>

@class HMFMessageDestination, NSArray;

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter {

	HMFMessageDestination* _target;
	NSArray* _whitelistedMessages;

}

@property (readonly) HMFMessageDestination * target;                  //@synthesize target=_target - In the implementation block
@property (copy,readonly) NSArray * whitelistedMessages;              //@synthesize whitelistedMessages=_whitelistedMessages - In the implementation block
+(id)logCategory;
-(id)initWithTarget:(id)arg1 ;
-(id)logIdentifier;
-(id)initWithName:(id)arg1 ;
-(HMFMessageDestination *)target;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(id)initWithTarget:(id)arg1 whitelistedMessages:(id)arg2 ;
-(BOOL)__shouldCheckMessage:(id)arg1 ;
-(NSArray *)whitelistedMessages;
@end

