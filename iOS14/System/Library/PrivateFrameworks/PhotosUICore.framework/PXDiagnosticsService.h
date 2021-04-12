/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSArray, NSString, UIViewController;

@interface PXDiagnosticsService : NSObject {

	BOOL _canProvideConsoleDescription;
	BOOL _canProvideSettingsViewController;
	BOOL _canPerformAction;
	NSArray* _itemProviders;
	NSString* _consoleDescription;
	UIViewController* _settingsViewController;

}

@property (nonatomic,copy,readonly) NSArray * itemProviders;                             //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) BOOL canProvideConsoleDescription;                        //@synthesize canProvideConsoleDescription=_canProvideConsoleDescription - In the implementation block
@property (nonatomic,readonly) NSString * consoleDescription;                            //@synthesize consoleDescription=_consoleDescription - In the implementation block
@property (nonatomic,readonly) BOOL canProvideContextualViewController; 
@property (nonatomic,readonly) UIViewController * contextualViewController; 
@property (nonatomic,readonly) BOOL canProvideSettingsViewController;                    //@synthesize canProvideSettingsViewController=_canProvideSettingsViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * settingsViewController;                //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (nonatomic,readonly) BOOL canPerformAction;                                    //@synthesize canPerformAction=_canPerformAction - In the implementation block
-(BOOL)canPerformAction;
-(id)init;
-(void)performAction;
-(UIViewController *)contextualViewController;
-(NSArray *)itemProviders;
-(BOOL)canProvideConsoleDescription;
-(NSString *)consoleDescription;
-(BOOL)canProvideContextualViewController;
-(BOOL)canProvideSettingsViewController;
-(UIViewController *)settingsViewController;
-(NSString *)title;
-(id)initWithItemProviders:(id)arg1 ;
@end

