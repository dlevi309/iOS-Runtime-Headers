/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UISelectionFeedbackGeneratorConfiguration;

@interface UISelectionFeedbackGenerator : UIFeedbackGenerator {

	double _lastSelectionChangeTime;

}

@property (assign,nonatomic) double lastSelectionChangeTime;                                                                                    //@synthesize lastSelectionChangeTime=_lastSelectionChangeTime - In the implementation block
@property (getter=_selectionConfiguration,nonatomic,readonly) _UISelectionFeedbackGeneratorConfiguration * selectionConfiguration; 
+(Class)_configurationClass;
-(void)selectionChanged;
-(void)userInteractionStarted;
-(void)userInteractionEnded;
-(void)userInteractionCancelled;
-(void)_deactivated;
-(id)_stats_key;
-(void)_playFeedbackWithSpeed:(double)arg1 ;
-(id)_selectionConfiguration;
-(double)lastSelectionChangeTime;
-(void)setLastSelectionChangeTime:(double)arg1 ;
@end

