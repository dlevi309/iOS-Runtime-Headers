/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)setPreferredPresentationType:(unsigned long long)arg1 ;
-(UIViewController *)viewController;
-(unsigned long long)preferredPresentationType;
@end

