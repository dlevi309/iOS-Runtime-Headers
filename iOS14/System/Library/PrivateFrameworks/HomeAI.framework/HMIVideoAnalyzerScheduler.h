/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorDelegate.h>

@class HMFUnfairLock, HMFTimer, NSPointerArray, HMISystemResourceUsageMonitor, NSString;

@interface HMIVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate> {

	HMFUnfairLock* _lock;
	HMFTimer* _tick;
	NSPointerArray* _internalAnalyzers;
	HMISystemResourceUsageMonitor* _usageMonitor;
	long long _usageLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedInstance;
-(void)timerDidFire:(id)arg1 ;
-(id)init;
-(void)systemResourceUsageDidChangeTo:(long long)arg1 ;
-(void)_compactInternalAnalyzers;
-(void)registerAnalyzer:(id)arg1 ;
-(id)_getAnalyzers;
-(void)_updateAnalyzer:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)_logState;
@end

