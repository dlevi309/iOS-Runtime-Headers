/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
*/

#import <ChronoUIServices/ChronoUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneSettings.h>

@class CHSWidget, CHSWidgetMetrics, NSString;

@interface CHUISMutableAvocadoSceneSettings : UIMutableApplicationSceneSettings {

	BOOL _privateModeEnabled;

}

@property (nonatomic,copy) CHSWidget * widget; 
@property (nonatomic,copy) CHSWidgetMetrics * metrics; 
@property (assign,nonatomic) unsigned long long style; 
@property (nonatomic,copy) NSString * widgetConfigurationIdentifier; 
@property (assign,getter=isVisiblySettled,nonatomic) BOOL visiblySettled; 
@property (assign,getter=isPrivateModeEnabled,nonatomic) BOOL privateModeEnabled;                            //@synthesize privateModeEnabled=_privateModeEnabled - In the implementation block
@property (assign,getter=areAnimationsDisabled,nonatomic) BOOL animationsDisabled; 
@property (assign,getter=shouldVisibleEntrySnapshot,nonatomic) BOOL visibleEntryShouldSnapshot; 
-(void)setMetrics:(CHSWidgetMetrics *)arg1 ;
-(BOOL)isPrivateModeEnabled;
-(CHSWidgetMetrics *)metrics;
-(CHSWidget *)widget;
-(void)setAnimationsDisabled:(BOOL)arg1 ;
-(BOOL)areAnimationsDisabled;
-(void)setPrivateModeEnabled:(BOOL)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isVisiblySettled;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)setWidget:(CHSWidget *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setVisiblySettled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(BOOL)privateMode;
-(NSString *)widgetConfigurationIdentifier;
-(BOOL)shouldVisibleEntrySnapshot;
-(void)setVisibleEntryShouldSnapshot:(BOOL)arg1 ;
-(void)setWidgetConfigurationIdentifier:(NSString *)arg1 ;
@end

