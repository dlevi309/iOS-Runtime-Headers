/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDHome, NSObject, HMDBackgroundTaskAgentTimer, NSString;

@interface HMDHomePeriodicReader : HMFObject <HMFLogging> {

	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDBackgroundTaskAgentTimer* _btaReadTimer;

}

@property (__weak) HMDHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDBackgroundTaskAgentTimer * btaReadTimer;              //@synthesize btaReadTimer=_btaReadTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)configure:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(void)timerFired:(id)arg1 ;
-(void)_startTimer;
-(void)setHome:(HMDHome *)arg1 ;
-(id)_characteristicsToRead;
-(void)dealloc;
-(HMDHome *)home;
-(void)residentUpdated;
-(void)handleCharacteristicBasedEventAdded:(id)arg1 ;
-(void)startReadTimer;
-(HMDBackgroundTaskAgentTimer *)btaReadTimer;
-(void)checkToIssueRead;
-(void)_checkToIssueRead;
-(void)_issueCharacteristicRequests:(id)arg1 ;
@end

