/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRetryCount:(unsigned long long)arg1 ;
-(NSUUID *)timerID;
-(unsigned long long)retryCount;
-(id)init;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)retryTimer;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(void)cancel;
-(double)retryTimeInterval;
-(BOOL)shouldRetryImmediately:(double)arg1 ;
-(void)startWithDelegate:(id)arg1 delegateQueue:(id)arg2 responseTime:(double)arg3 ;
@end

