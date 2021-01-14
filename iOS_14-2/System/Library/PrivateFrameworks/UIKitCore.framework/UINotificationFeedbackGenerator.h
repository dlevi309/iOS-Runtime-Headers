/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UINotificationFeedbackGeneratorConfiguration;

@interface UINotificationFeedbackGenerator : UIFeedbackGenerator

@property (getter=_eventConfiguration,nonatomic,readonly) _UINotificationFeedbackGeneratorConfiguration * eventConfiguration; 
+(Class)_configurationClass;
-(id)_stats_key;
-(void)_privateNotificationOccurred:(long long)arg1 ;
-(void)_playEventType:(long long)arg1 ;
-(void)notificationOccurred:(long long)arg1 ;
-(id)_eventConfiguration;
-(id)_categoryForType:(long long)arg1 ;
-(double)_preparationTimeoutForStyle:(long long)arg1 ;
-(void)_privateNotificationInterrupted:(long long)arg1 ;
-(void)_stopEventType:(long long)arg1 ;
@end

