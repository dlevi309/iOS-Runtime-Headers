/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIKeyboardFeedbackGeneratorConfiguration;

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator {

	double _lastTypedKeyTimestamp;
	double _lastNonReleaseActionTimestamp;

}

@property (getter=_keyboardConfiguration,nonatomic,readonly) _UIKeyboardFeedbackGeneratorConfiguration * keyboardConfiguration; 
@property (assign,setter=_setLastTypedKeyTimestamp:,getter=_lastTypedKeyTimestamp,nonatomic) double lastTypedKeyTimestamp;                   //@synthesize lastTypedKeyTimestamp=_lastTypedKeyTimestamp - In the implementation block
@property (assign,nonatomic) double lastNonReleaseActionTimestamp;                                                                           //@synthesize lastNonReleaseActionTimestamp=_lastNonReleaseActionTimestamp - In the implementation block
+(Class)_configurationClass;
-(id)_stats_key;
-(id)_keyboardConfiguration;
-(void)actionOccurred:(long long)arg1 ;
-(void)setLastNonReleaseActionTimestamp:(double)arg1 ;
-(void)cycleActivation;
-(float)scaleVolumeSlow:(float)arg1 fast:(float)arg2 timeSpan:(double)arg3 ;
-(double)_autoDeactivationTimeout;
-(double)_lastTypedKeyTimestamp;
-(double)lastNonReleaseActionTimestamp;
-(id)_feedbackWithUpdatedVolume:(id)arg1 ;
-(id)initWithCoordinateSpace:(id)arg1 visceral:(long long)arg2 ;
-(void)_setLastTypedKeyTimestamp:(double)arg1 ;
-(void)_playFeedbackForActionType:(long long)arg1 withCustomization:(/*^block*/id)arg2 ;
@end

