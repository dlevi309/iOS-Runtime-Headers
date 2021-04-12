/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/BackgroundTaskDelegate.h>

@class ADBackgroundTaskRequest, NSNumber, NSString;

@interface ADDeviceKnowledgeManager : ADSingleton <BackgroundTaskDelegate> {

	BOOL _taskIsRunning;
	ADBackgroundTaskRequest* _xpc_task;
	NSNumber* _refreshInterval;

}

@property (assign,nonatomic) BOOL taskIsRunning;                              //@synthesize taskIsRunning=_taskIsRunning - In the implementation block
@property (nonatomic,retain) ADBackgroundTaskRequest * xpc_task;              //@synthesize xpc_task=_xpc_task - In the implementation block
@property (nonatomic,retain) NSNumber * refreshInterval;                      //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSNumber *)refreshInterval;
-(void)setRefreshInterval:(NSNumber *)arg1 ;
-(BOOL)runTask:(id)arg1 ;
-(void)checkOnTask:(id)arg1 activity:(id)arg2 ;
-(void)scheduleDeviceDataProcessing:(double)arg1 ;
-(void)processDeviceData:(/*^block*/id)arg1 ;
-(BOOL)taskIsRunning;
-(void)setTaskIsRunning:(BOOL)arg1 ;
-(ADBackgroundTaskRequest *)xpc_task;
-(void)setXpc_task:(ADBackgroundTaskRequest *)arg1 ;
@end

