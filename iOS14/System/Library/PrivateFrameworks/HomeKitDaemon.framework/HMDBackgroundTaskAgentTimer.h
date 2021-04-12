/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDBackgroundTaskAgentTimer : NSObject <HMFLogging> {

	NSString* _timerID;

}

@property (nonatomic,readonly) NSString * timerID;                  //@synthesize timerID=_timerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)timerID;
-(id)logIdentifier;
-(NSString *)description;
-(id)initWithTimerID:(id)arg1 ;
-(void)_stopTimer:(/*^block*/id)arg1 ;
-(void)_startTimer:(id)arg1 home:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

