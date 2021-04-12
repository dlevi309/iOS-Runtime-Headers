/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <Preferences/PSListController.h>

@protocol OS_nw_path_evaluator;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface PSGAutomaticContentDownloadController : PSListController {

	id _settingsChangedObserver;
	BOOL _inLowDataMode;
	NSMutableArray* _applications;
	NSMutableDictionary* _applicationStates;
	NSObject*<OS_nw_path_evaluator> _defaultPathEvaluator;

}

@property (nonatomic,retain) NSMutableArray * applications;                                     //@synthesize applications=_applications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applicationStates;                           //@synthesize applicationStates=_applicationStates - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_evaluator> defaultPathEvaluator;              //@synthesize defaultPathEvaluator=_defaultPathEvaluator - In the implementation block
@property (assign,nonatomic) BOOL inLowDataMode;                                                //@synthesize inLowDataMode=_inLowDataMode - In the implementation block
-(id)init;
-(void)dealloc;
-(NSMutableArray *)applications;
-(void)setApplications:(NSMutableArray *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)whitelist;
-(id)specifiers;
-(NSMutableDictionary *)applicationStates;
-(void)setApplicationStates:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_nw_path_evaluator>)defaultPathEvaluator;
-(void)setDefaultPathEvaluator:(NSObject*<OS_nw_path_evaluator>)arg1 ;
-(BOOL)inLowDataMode;
-(void)setInLowDataMode:(BOOL)arg1 ;
-(void)setApplicationEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)applicationEnabled:(id)arg1 ;
-(void)setBackgroundRefreshState:(id)arg1 withSpecifier:(id)arg2 ;
-(id)backgroundRefreshState:(id)arg1 ;
@end

