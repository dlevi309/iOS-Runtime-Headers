/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFTimer, NSUUID, NSString;

@interface HMDUserPresenceFeedRetryTimer : HMFObject <HMFLogging> {

	HMFTimer* _retryTimer;
	unsigned long long _retryCount;
	NSUUID* _timerID;

}

@property (copy,readonly) NSUUID * timerID;                         //@synthesize timerID=_timerID - In the implementation block
@property (readonly) double retryTimeInterval; 
@property (retain) HMFTimer * retryTimer;                           //@synthesize retryTimer=_retryTimer - In the implementation block
@property (assign) unsigned long long retryCount;                   //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)cancel;
-(NSUUID *)timerID;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(HMFTimer *)retryTimer;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(double)retryTimeInterval;
-(BOOL)shouldRetryImmediately:(double)arg1 ;
-(void)startWithDelegate:(id)arg1 delegateQueue:(id)arg2 responseTime:(double)arg3 ;
@end

