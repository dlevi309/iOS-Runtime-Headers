/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/

#import <UIKitCore/UIAlertController.h>

@class UIWindow;

@interface MCAlertController : UIAlertController {

	/*^block*/id _viewWillAppearHandler;
	/*^block*/id _viewDidDisappearHandler;
	UIWindow* _alertWindow;

}

@property (nonatomic,retain) UIWindow * alertWindow;                //@synthesize alertWindow=_alertWindow - In the implementation block
@property (nonatomic,copy) id viewWillAppearHandler;                //@synthesize viewWillAppearHandler=_viewWillAppearHandler - In the implementation block
@property (nonatomic,copy) id viewDidDisappearHandler;              //@synthesize viewDidDisappearHandler=_viewDidDisappearHandler - In the implementation block
-(void)dealloc;
-(void)show;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setAlertWindow:(UIWindow *)arg1 ;
-(UIWindow *)alertWindow;
-(id)viewWillAppearHandler;
-(id)viewDidDisappearHandler;
-(void)setViewWillAppearHandler:(id)arg1 ;
-(void)setViewDidDisappearHandler:(id)arg1 ;
@end

