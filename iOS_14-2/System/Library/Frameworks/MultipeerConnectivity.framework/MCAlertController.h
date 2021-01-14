/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)show;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)setAlertWindow:(UIWindow *)arg1 ;
-(UIWindow *)alertWindow;
-(id)viewWillAppearHandler;
-(id)viewDidDisappearHandler;
-(void)setViewWillAppearHandler:(id)arg1 ;
-(void)setViewDidDisappearHandler:(id)arg1 ;
@end

