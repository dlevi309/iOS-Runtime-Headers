/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
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
+(id)logCategory;
+(id)sharedInstance;
+(id)eventConfidenceThresholdsHigh;
+(id)eventConfidenceThresholdsMedium;
-(void)timerDidFire:(id)arg1 ;
-(id)init;
-(HMFUnfairLock *)lock;
-(HMFTimer *)watchdogTimer;
-(void)preAnalyze:(id)arg1 ;
-(void)handleMotionDetection:(id)arg1 sessionPTS:(SCD_Struct_HM3)arg2 frameDimensions:(CGSize)arg3 sessionIdentifier:(id)arg4 ;
-(void)warmStartModel;
-(id)analyze:(id)arg1 targetEventTypes:(long long)arg2 enableFaceClassification:(BOOL)arg3 sessionIdentifier:(id)arg4 homeUUID:(id)arg5 error:(id*)arg6 ;
-(void)setFrameAnalyzer:(id<HMICameraVideoFrameAnalyzer>)arg1 ;
-(double)modelTimeoutPreference;
-(id<HMICameraVideoFrameAnalyzer>)frameAnalyzer;
-(BOOL)ensureFrameAnalyzerWithError:(id*)arg1 ;
-(id)getConfidenceThresholdPreferenceForKey:(id)arg1 defaultConfidenceThreshold:(double)arg2 ;
-(id)eventConfidenceThresholdsMediumFromTrial;
-(id)eventConfidenceThresholdsHighFromTrial;
-(double)eventConfidenceFaceThresholdFromTrial;
@end

