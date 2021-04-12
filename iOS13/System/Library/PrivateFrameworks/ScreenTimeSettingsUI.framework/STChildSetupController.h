/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class UIViewController, STRootViewModelCoordinator, STIntroductionController;

@interface STChildSetupController : NSObject {

	/*^block*/id _completionHandler;
	UIViewController* _initialViewController;
	STRootViewModelCoordinator* _coordinator;
	STIntroductionController* _introductionController;

}

@property (nonatomic,retain) STRootViewModelCoordinator * coordinator;                       //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) STIntroductionController * introductionController;              //@synthesize introductionController=_introductionController - In the implementation block
@property (copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) UIViewController * initialViewController;                     //@synthesize initialViewController=_initialViewController - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setCoordinator:(STRootViewModelCoordinator *)arg1 ;
-(STRootViewModelCoordinator *)coordinator;
-(id)initWithDSID:(id)arg1 ;
-(UIViewController *)initialViewController;
-(void)saveValuesForModel:(id)arg1 ;
-(STIntroductionController *)introductionController;
-(void)setIntroductionController:(STIntroductionController *)arg1 ;
@end

