/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUImportActionCoordinatorDelegate;
@class UIViewController, PXImportController, NSString, UIAction, UIMenu, NSNumberFormatter;

@interface PUImportActionCoordinator : NSObject {

	BOOL _presentsAdditionalDeleteAllConfirmation;
	BOOL _ppt_alwaysImportDuplicatesNoPrompt;
	id<PUImportActionCoordinatorDelegate> _delegate;
	long long _loggingSource;
	UIViewController* _viewController;
	PXImportController* _importController;
	NSString* _loggingPrefix;
	UIAction* _importAllAction;
	UIMenu* _importActionsMenu;
	NSNumberFormatter* _percentageNumberFormatter;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                           //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) PXImportController * importController;                              //@synthesize importController=_importController - In the implementation block
@property (nonatomic,retain) NSString * loggingPrefix;                                           //@synthesize loggingPrefix=_loggingPrefix - In the implementation block
@property (nonatomic,retain) UIAction * importAllAction;                                         //@synthesize importAllAction=_importAllAction - In the implementation block
@property (nonatomic,retain) UIMenu * importActionsMenu;                                         //@synthesize importActionsMenu=_importActionsMenu - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * percentageNumberFormatter;                      //@synthesize percentageNumberFormatter=_percentageNumberFormatter - In the implementation block
@property (assign,nonatomic) BOOL ppt_alwaysImportDuplicatesNoPrompt;                            //@synthesize ppt_alwaysImportDuplicatesNoPrompt=_ppt_alwaysImportDuplicatesNoPrompt - In the implementation block
@property (assign,nonatomic,__weak) id<PUImportActionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long loggingSource;                                          //@synthesize loggingSource=_loggingSource - In the implementation block
@property (assign,nonatomic) BOOL presentsAdditionalDeleteAllConfirmation;                       //@synthesize presentsAdditionalDeleteAllConfirmation=_presentsAdditionalDeleteAllConfirmation - In the implementation block
+(id)deleteAllConfirmationMessageForItems:(id)arg1 importSource:(id)arg2 ;
+(long long)importBehaviorForBatteryState:(long long)arg1 batteryLevel:(float)arg2 ;
+(void)retrieveBatteryState:(long long*)arg1 batteryLevel:(float*)arg2 ;
+(float)lowBatteryLevelThresholdForDevice;
-(void)setViewController:(UIViewController *)arg1 ;
-(id<PUImportActionCoordinatorDelegate>)delegate;
-(void)stopImport;
-(void)setDelegate:(id<PUImportActionCoordinatorDelegate>)arg1 ;
-(void)setLoggingPrefix:(NSString *)arg1 ;
-(UIViewController *)viewController;
-(id)actionMenuForImportButton;
-(id)initWithViewController:(id)arg1 importController:(id)arg2 loggingSource:(long long)arg3 ;
-(void)configureImportActionsForBarButtonItem:(id)arg1 ;
-(BOOL)someItemsButNotAllAreSelected;
-(void)ppt_beginImportFromBarButtonItem;
-(void)importAllFromBarButtonItem;
-(void)_commitImportingItems:(id)arg1 ;
-(void)checkBatteryLevelWithCompletion:(/*^block*/id)arg1 ;
-(void)_importItems:(id)arg1 allowDuplicates:(BOOL)arg2 ;
-(void)notifyDelegateOfImportCancellation;
-(void)deleteItemsFromBarButtonItem:(id)arg1 ;
-(void)deleteItemsFromBarButtonItem:(id)arg1 withOneUpHintItems:(id)arg2 ;
-(void)_deleteItems:(id)arg1 ;
-(long long)loggingSource;
-(void)deleteItemsWithoutConfirmation:(id)arg1 ;
-(BOOL)presentsAdditionalDeleteAllConfirmation;
-(void)setPresentsAdditionalDeleteAllConfirmation:(BOOL)arg1 ;
-(PXImportController *)importController;
-(void)setImportController:(PXImportController *)arg1 ;
-(UIAction *)importAllAction;
-(void)setImportAllAction:(UIAction *)arg1 ;
-(UIMenu *)importActionsMenu;
-(void)setImportActionsMenu:(UIMenu *)arg1 ;
-(NSNumberFormatter *)percentageNumberFormatter;
-(void)setPercentageNumberFormatter:(NSNumberFormatter *)arg1 ;
-(BOOL)ppt_alwaysImportDuplicatesNoPrompt;
-(void)setPpt_alwaysImportDuplicatesNoPrompt:(BOOL)arg1 ;
-(NSString *)loggingPrefix;
@end

