/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBNotificationCenterDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL useDuetRecommendations; 
@property (getter=isBatteryWidgetAlwaysAvailable,nonatomic,readonly) BOOL batteryWidgetAlwaysAvailable; 
@property (nonatomic,readonly) BOOL showInternalWidgets; 
@property (getter=isWidgetSnapshottingEnabled,nonatomic,readonly) BOOL widgetSnapshottingEnabled; 
@property (assign,nonatomic) BOOL didPurgeNonCAMLSnapshots; 
@property (assign,nonatomic) BOOL didPurgeNonASTCSnapshots; 
@property (getter=isWidgetLoggingEnabled,nonatomic,readonly) BOOL widgetLoggingEnabled; 
@property (nonatomic,readonly) BOOL showWidgetSnapshotDebugLabels; 
-(void)setDidPurgeNonCAMLSnapshots:(BOOL)arg1 ;
-(BOOL)didPurgeNonCAMLSnapshots;
-(void)setDidPurgeNonASTCSnapshots:(BOOL)arg1 ;
-(BOOL)didPurgeNonASTCSnapshots;
-(void)setShowWidgetSnapshotDebugLabels:(BOOL)arg1 ;
-(BOOL)showWidgetSnapshotDebugLabels;
-(void)setWidgetLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetLoggingEnabled;
-(void)setWidgetSnapshottingEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetSnapshottingEnabled;
-(void)setUseDuetRecommendations:(BOOL)arg1 ;
-(BOOL)useDuetRecommendations;
-(void)setShowInternalWidgets:(BOOL)arg1 ;
-(BOOL)showInternalWidgets;
-(void)setBatteryWidgetAlwaysAvailable:(BOOL)arg1 ;
-(BOOL)isBatteryWidgetAlwaysAvailable;
-(void)_bindAndRegisterDefaults;
@end

