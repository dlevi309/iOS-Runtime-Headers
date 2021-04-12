/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
*/

#import <UIKitCore/UIWindowScene.h>

@class CHSWidget, CHSWidgetMetrics, NSString;

@interface CHUISAvocadoWindowScene : UIWindowScene {

	BOOL _visibleEntryShouldSnapshot;

}

@property (nonatomic,copy,readonly) CHSWidget * widget; 
@property (nonatomic,copy,readonly) CHSWidgetMetrics * metrics; 
@property (nonatomic,readonly) unsigned long long style; 
@property (nonatomic,copy,readonly) NSString * widgetConfigurationIdentifier; 
@property (getter=isVisiblySettled,nonatomic,readonly) BOOL visiblySettled; 
@property (getter=isPrivateModeEnabled,nonatomic,readonly) BOOL privateModeEnabled; 
@property (getter=areAnimationsDisabled,nonatomic,readonly) BOOL animationsDisabled; 
@property (assign,getter=shouldVisibleEntrySnapshot,nonatomic) BOOL visibleEntryShouldSnapshot;              //@synthesize visibleEntryShouldSnapshot=_visibleEntryShouldSnapshot - In the implementation block
-(BOOL)isPrivateModeEnabled;
-(CHSWidgetMetrics *)metrics;
-(CHSWidget *)widget;
-(BOOL)areAnimationsDisabled;
-(BOOL)isVisiblySettled;
-(id)_sceneSettings;
-(unsigned long long)style;
-(NSString *)widgetConfigurationIdentifier;
-(BOOL)shouldVisibleEntrySnapshot;
-(void)setVisibleEntryShouldSnapshot:(BOOL)arg1 ;
@end

