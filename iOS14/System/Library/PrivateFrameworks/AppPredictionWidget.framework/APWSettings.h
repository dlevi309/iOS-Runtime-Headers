/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
*/


@class NSUserDefaults, NSDate, NSString;

@interface APWSettings : NSObject {

	BOOL _widgetFeedbackEnabled;
	NSUserDefaults* _internalSettings;
	NSDate* _lastViewDidDisappearDate;

}

@property (nonatomic,readonly) NSUserDefaults * internalSettings;                                    //@synthesize internalSettings=_internalSettings - In the implementation block
@property (assign,getter=isDebugUIEnabled,nonatomic) BOOL debugUIEnabled; 
@property (assign,getter=isSnapshotLabelEnabled,nonatomic) BOOL snapshotLabelEnabled; 
@property (assign,getter=isDemoModeEnabled,nonatomic) BOOL demoModeEnabled; 
@property (assign,getter=isForceEmptyEnabled,nonatomic) BOOL forceEmptyEnabled; 
@property (assign,getter=isWidgetFeedbackEnabled,nonatomic) BOOL widgetFeedbackEnabled;              //@synthesize widgetFeedbackEnabled=_widgetFeedbackEnabled - In the implementation block
@property (nonatomic,copy) NSDate * lastViewDidDisappearDate;                                        //@synthesize lastViewDidDisappearDate=_lastViewDidDisappearDate - In the implementation block
@property (nonatomic,copy) NSString * savedContentSizeCategory; 
+(id)sharedSettings;
-(BOOL)isWidgetFeedbackEnabled;
-(BOOL)isForceEmptyEnabled;
-(BOOL)isDemoModeEnabled;
-(void)setSavedContentSizeCategory:(NSString *)arg1 ;
-(BOOL)isActionsEnabled;
-(void)setDebugUIEnabled:(BOOL)arg1 ;
-(void)setNumberOfActionPredictions:(long long)arg1 ;
-(void)setActionsEnabled:(BOOL)arg1 ;
-(NSDate *)lastViewDidDisappearDate;
-(void)setWidgetFeedbackEnabled:(BOOL)arg1 ;
-(NSUserDefaults *)internalSettings;
-(id)_appsForDemoMode;
-(BOOL)isDebugUIEnabled;
-(NSString *)savedContentSizeCategory;
-(void)setSnapshotLabelEnabled:(BOOL)arg1 ;
-(long long)numberOfActionPredictions;
-(void)setLastViewDidDisappearDate:(NSDate *)arg1 ;
-(BOOL)isSnapshotLabelEnabled;
-(void)setDemoModeEnabled:(BOOL)arg1 ;
-(void)setForceEmptyEnabled:(BOOL)arg1 ;
@end

