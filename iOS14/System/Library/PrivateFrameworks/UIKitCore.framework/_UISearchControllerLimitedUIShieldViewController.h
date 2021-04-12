/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDismissAction:(id)arg1 ;
-(void)viewDidLoad;
-(id)dismissAction;
-(void)setLimitedAccessView:(_UISearchControllerLimitedAccessView *)arg1 ;
-(_UISearchControllerLimitedAccessView *)limitedAccessView;
-(void)_backButtonPressed:(id)arg1 ;
-(void)dealloc;
@end

