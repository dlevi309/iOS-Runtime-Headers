/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIKeyboardFeedbackGeneratorConfiguration;

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator {

	double _lastTypedKeyTimestamp;

}

@property (getter=_keyboardConfiguration,nonatomic,readonly) _UIKeyboardFeedbackGeneratorConfiguration * keyboardConfiguration; 
@property (assign,setter=_setLastTypedKeyTimestamp:,getter=_lastTypedKeyTimestamp,nonatomic) double lastTypedKeyTimestamp;                   //@synthesize lastTypedKeyTimestamp=_lastTypedKeyTimestamp - In the implementation block
+(Class)_configurationClass;
-(void)_activated;
-(double)_autoDeactivationTimeout;
-(id)_stats_key;
-(void)_playFeedbackForActionType:(long long)arg1 withCustomization:(/*^block*/id)arg2 ;
-(id)_keyboardConfiguration;
-(float)scaleVolumeSlow:(float)arg1 fast:(float)arg2 timeSpan:(double)arg3 ;
-(id)_feedbackWithUpdatedVolume:(id)arg1 ;
-(void)actionOccurred:(long long)arg1 ;
-(double)_lastTypedKeyTimestamp;
-(void)_setLastTypedKeyTimestamp:(double)arg1 ;
@end

