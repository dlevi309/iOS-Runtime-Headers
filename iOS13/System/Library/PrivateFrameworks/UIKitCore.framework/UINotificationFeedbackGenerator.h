/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UINotificationFeedbackGeneratorConfiguration;

@interface UINotificationFeedbackGenerator : UIFeedbackGenerator

@property (getter=_eventConfiguration,nonatomic,readonly) _UINotificationFeedbackGeneratorConfiguration * eventConfiguration; 
+(Class)_configurationClass;
-(void)notificationOccurred:(long long)arg1 ;
-(double)_preparationTimeoutForStyle:(long long)arg1 ;
-(id)_stats_key;
-(id)_eventConfiguration;
-(id)_categoryForType:(long long)arg1 ;
-(void)_playEventType:(long long)arg1 ;
-(void)_stopEventType:(long long)arg1 ;
-(void)_privateNotificationOccurred:(long long)arg1 ;
-(void)_privateNotificationInterrupted:(long long)arg1 ;
@end

