/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIViewController;

@interface _SBModalViewControllerStackTransition : NSObject {

	UIViewController* _viewController;
	unsigned long long _operation;
	BOOL _animated;
	/*^block*/id _completion;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) unsigned long long operation;                   //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
+(id)transitionForViewController:(id)arg1 operation:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)description;
-(unsigned long long)operation;
-(void)setOperation:(unsigned long long)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)invokeCompletionIfNecessaryWithResult:(BOOL)arg1 ;
@end

