/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <UIKitCore/UINavigationController.h>

@class RUIStyle, UIViewController;

@interface RUINavigationController : UINavigationController {

	unsigned long long _ruiSupportedInterfaceOrientations;
	RUIStyle* _style;
	unsigned long long _ruiModalPresentationStyle;
	UIViewController* _hostViewController;
	/*^block*/id _menuDismissalHandler;
	/*^block*/id _viewDidDisappearHandler;

}

@property (nonatomic,retain) RUIStyle * style;                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long ruiModalPresentationStyle;              //@synthesize ruiModalPresentationStyle=_ruiModalPresentationStyle - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,copy) id menuDismissalHandler;                                     //@synthesize menuDismissalHandler=_menuDismissalHandler - In the implementation block
@property (nonatomic,copy) id viewDidDisappearHandler;                                  //@synthesize viewDidDisappearHandler=_viewDidDisappearHandler - In the implementation block
-(void)setHostViewController:(UIViewController *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIViewController *)hostViewController;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setStyle:(RUIStyle *)arg1 ;
-(void)loadView;
-(BOOL)canBeShownFromSuspendedState;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(RUIStyle *)style;
-(unsigned long long)ruiModalPresentationStyle;
-(id)viewDidDisappearHandler;
-(void)setViewDidDisappearHandler:(id)arg1 ;
-(void)setRuiModalPresentationStyle:(unsigned long long)arg1 ;
-(void)setMenuDismissalHandler:(id)arg1 ;
-(void)_menuButtonPressed:(id)arg1 ;
-(id)menuDismissalHandler;
@end

