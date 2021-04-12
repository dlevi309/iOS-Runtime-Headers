/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(NSString *)timerID;
-(id)logIdentifier;
-(id)initWithTimerID:(id)arg1 ;
-(void)_stopTimer:(/*^block*/id)arg1 ;
-(void)_startTimer:(id)arg1 home:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

