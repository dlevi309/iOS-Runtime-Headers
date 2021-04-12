/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIViewController;

@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject {

	UIViewController* _viewController;
	long long _level;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) long long level;                                       //@synthesize level=_level - In the implementation block
-(long long)level;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setLevel:(long long)arg1 ;
-(id)initWithViewController:(id)arg1 atLevel:(long long)arg2 ;
@end

