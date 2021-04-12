/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMICameraVideoFrameAnalyzer;
@class HMFUnfairLock, HMFTimer, NSString;

@interface HMICameraVideoFrameAnalyzerFactory : HMFObject <HMFTimerDelegate, HMFLogging> {

	HMFUnfairLock* _lock;
	id<HMICameraVideoFrameAnalyzer> _frameAnalyzer;
	HMFTimer* _watchdogTimer;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                                     //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) id<HMICameraVideoFrameAnalyzer> frameAnalyzer;              //@synthesize frameAnalyzer=_frameAnalyzer - In the implementation block
@property (readonly) HMFTimer * watchdogTimer;                                           //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logCategory;
+(id)eventConfidenceThresholdsHigh;
+(id)eventConfidenceThresholdsMedium;
-(id)init;
-(HMFUnfairLock *)lock;
-(void)timerDidFire:(id)arg1 ;
-(HMFTimer *)watchdogTimer;
-(void)preAnalyze:(id)arg1 ;
-(void)warmStartModel;
-(id)analyze:(id)arg1 targetEventTypes:(long long)arg2 error:(id*)arg3 ;
-(void)setFrameAnalyzer:(id<HMICameraVideoFrameAnalyzer>)arg1 ;
-(double)modelTimeoutPreference;
-(id<HMICameraVideoFrameAnalyzer>)frameAnalyzer;
-(id)getConfidenceThresholdPreferenceForKey:(id)arg1 defaultConfidenceThreshold:(double)arg2 ;
-(BOOL)ensureFrameAnalyzerWithError:(id*)arg1 ;
@end

