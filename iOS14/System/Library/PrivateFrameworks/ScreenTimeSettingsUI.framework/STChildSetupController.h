/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCoordinator:(STRootViewModelCoordinator *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(UIViewController *)initialViewController;
-(id)completionHandler;
-(id)initWithDSID:(id)arg1 ;
-(STRootViewModelCoordinator *)coordinator;
-(void)saveValuesForModel:(id)arg1 ;
-(STIntroductionController *)introductionController;
-(void)setIntroductionController:(STIntroductionController *)arg1 ;
@end

