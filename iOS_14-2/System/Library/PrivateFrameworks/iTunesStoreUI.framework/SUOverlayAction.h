/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class UIViewController, SUOverlayTransition;

@interface SUOverlayAction : NSObject {

	long long _animationCount;
	UIViewController* _otherViewController;
	SUOverlayTransition* _transition;
	int _type;
	UIViewController* _viewController;

}

@property (assign,nonatomic) int actionType;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long animationCount;                            //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,retain) UIViewController * otherViewController;              //@synthesize otherViewController=_otherViewController - In the implementation block
@property (nonatomic,retain) SUOverlayTransition * transition;                    //@synthesize transition=_transition - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                   //@synthesize viewController=_viewController - In the implementation block
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(void)setViewController:(UIViewController *)arg1 ;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
-(UIViewController *)viewController;
-(void)setTransition:(SUOverlayTransition *)arg1 ;
-(SUOverlayTransition *)transition;
-(void)dealloc;
-(UIViewController *)otherViewController;
-(void)setOtherViewController:(UIViewController *)arg1 ;
@end

