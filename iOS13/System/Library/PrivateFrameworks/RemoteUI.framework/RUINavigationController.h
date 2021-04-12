/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <UIKitCore/UINavigationController.h>

@class RUIStyle;

@interface RUINavigationController : UINavigationController {

	unsigned long long _ruiSupportedInterfaceOrientations;
	RUIStyle* _style;
	/*^block*/id _menuDismissalHandler;

}

@property (nonatomic,retain) RUIStyle * style;                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id menuDismissalHandler;              //@synthesize menuDismissalHandler=_menuDismissalHandler - In the implementation block
-(RUIStyle *)style;
-(void)setStyle:(RUIStyle *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setMenuDismissalHandler:(id)arg1 ;
-(void)_menuButtonPressed:(id)arg1 ;
-(id)menuDismissalHandler;
@end

