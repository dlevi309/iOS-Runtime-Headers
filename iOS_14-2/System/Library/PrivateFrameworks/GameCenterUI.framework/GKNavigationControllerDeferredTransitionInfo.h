/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class UIViewController;

@interface GKNavigationControllerDeferredTransitionInfo : NSObject {

	BOOL _animated;
	int _type;
	UIViewController* _viewController;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
-(BOOL)animated;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setType:(int)arg1 ;
-(UIViewController *)viewController;
-(int)type;
-(void)dealloc;
@end

