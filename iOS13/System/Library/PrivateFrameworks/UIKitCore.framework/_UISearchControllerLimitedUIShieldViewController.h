/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@class _UISearchControllerLimitedAccessView;

@interface _UISearchControllerLimitedUIShieldViewController : UIViewController {

	/*^block*/id _dismissAction;
	_UISearchControllerLimitedAccessView* _limitedAccessView;

}

@property (nonatomic,retain) _UISearchControllerLimitedAccessView * limitedAccessView;              //@synthesize limitedAccessView=_limitedAccessView - In the implementation block
@property (nonatomic,copy) id dismissAction;                                                        //@synthesize dismissAction=_dismissAction - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(void)setDismissAction:(id)arg1 ;
-(void)setLimitedAccessView:(_UISearchControllerLimitedAccessView *)arg1 ;
-(_UISearchControllerLimitedAccessView *)limitedAccessView;
-(void)_backButtonPressed:(id)arg1 ;
-(id)dismissAction;
@end

