/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setXpc_task:(ADBackgroundTaskRequest *)arg1 ;
-(id)init;
-(BOOL)taskIsRunning;
-(void)checkOnTask:(id)arg1 activity:(id)arg2 ;
-(void)scheduleDeviceDataProcessing:(double)arg1 ;
-(void)processDeviceData:(/*^block*/id)arg1 ;
-(ADBackgroundTaskRequest *)xpc_task;
-(void)setRefreshInterval:(NSNumber *)arg1 ;
-(void)setTaskIsRunning:(BOOL)arg1 ;
-(NSNumber *)refreshInterval;
-(BOOL)runTask:(id)arg1 ;
@end

