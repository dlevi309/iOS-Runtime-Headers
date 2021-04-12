/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isDemoModeEnabled;
-(NSUserDefaults *)internalSettings;
-(BOOL)isDebugUIEnabled;
-(void)setDebugUIEnabled:(BOOL)arg1 ;
-(long long)numberOfActionPredictions;
-(void)setNumberOfActionPredictions:(long long)arg1 ;
-(BOOL)isActionsEnabled;
-(void)setActionsEnabled:(BOOL)arg1 ;
-(BOOL)isSnapshotLabelEnabled;
-(void)setSnapshotLabelEnabled:(BOOL)arg1 ;
-(NSDate *)lastViewDidDisappearDate;
-(void)setDemoModeEnabled:(BOOL)arg1 ;
-(BOOL)isForceEmptyEnabled;
-(void)setForceEmptyEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetFeedbackEnabled;
-(id)_appsForDemoMode;
-(NSString *)savedContentSizeCategory;
-(void)setSavedContentSizeCategory:(NSString *)arg1 ;
-(void)setWidgetFeedbackEnabled:(BOOL)arg1 ;
-(void)setLastViewDidDisappearDate:(NSDate *)arg1 ;
@end

