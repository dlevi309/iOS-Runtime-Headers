/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_stats_key;
-(void)userInteractionCancelled;
-(void)_deactivated;
-(void)userInteractionEnded;
-(void)userInteractionStarted;
-(void)setLastSelectionChangeTime:(double)arg1 ;
-(id)_selectionConfiguration;
-(double)lastSelectionChangeTime;
-(void)selectionChanged;
-(void)_playFeedbackWithSpeed:(double)arg1 ;
@end

