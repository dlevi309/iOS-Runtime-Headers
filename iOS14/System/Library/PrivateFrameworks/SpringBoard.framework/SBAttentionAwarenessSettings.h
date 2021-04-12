/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUISettings.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface SBAttentionAwarenessSettings : SBUISettings <MCProfileConnectionObserver> {

	BOOL _allowsAttentionAwareAutoLock;
	BOOL _supportsAttentionSensor;
	BOOL _shouldUseAttentionSensor;
	BOOL _isObservingDataSources;
	AWNotification_sRef _attentionAwarenessToken;
	double _sampleInterval;
	double _dimInterval;
	double _sleepInterval;

}

@property (assign,nonatomic) BOOL shouldUseAttentionSensor; 
@property (assign,nonatomic) double sampleInterval;                      //@synthesize sampleInterval=_sampleInterval - In the implementation block
@property (assign,nonatomic) double dimInterval;                         //@synthesize dimInterval=_dimInterval - In the implementation block
@property (assign,nonatomic) double sleepInterval;                       //@synthesize sleepInterval=_sleepInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsControllerModule;
+(BOOL)attentionSensorSupported;
-(void)setDefaultValues;
-(double)sampleInterval;
-(void)setSampleInterval:(double)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(double)dimInterval;
-(void)setDimInterval:(double)arg1 ;
-(BOOL)shouldUseAttentionSensor;
-(double)sleepInterval;
-(void)setShouldUseAttentionSensor:(BOOL)arg1 ;
-(void)setSleepInterval:(double)arg1 ;
-(void)dealloc;
@end

