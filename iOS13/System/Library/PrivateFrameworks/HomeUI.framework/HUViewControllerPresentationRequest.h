/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class UIViewController;

@interface HUViewControllerPresentationRequest : NSObject {

	BOOL _animated;
	UIViewController* _viewController;
	unsigned long long _preferredPresentationType;

}

@property (nonatomic,readonly) UIViewController * viewController;                       //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) unsigned long long preferredPresentationType;              //@synthesize preferredPresentationType=_preferredPresentationType - In the implementation block
@property (assign,nonatomic) BOOL animated;                                             //@synthesize animated=_animated - In the implementation block
+(id)requestWithViewController:(id)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(unsigned long long)preferredPresentationType;
-(void)setPreferredPresentationType:(unsigned long long)arg1 ;
@end

