/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKWrapperViewController.h>

@class PKCompactNavigationContainerController;

@interface PKCompactNavigationContainedNavigationWrapperViewController : PKWrapperViewController {

	PKCompactNavigationContainerController* _parentViewController;
	BOOL _useParentSafeAreaInsets;

}

@property (assign,nonatomic) BOOL useParentSafeAreaInsets;              //@synthesize useParentSafeAreaInsets=_useParentSafeAreaInsets - In the implementation block
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(id)initWithWrappedViewController:(id)arg1 parentViewController:(id)arg2 ;
-(BOOL)useParentSafeAreaInsets;
-(void)setUseParentSafeAreaInsets:(BOOL)arg1 ;
-(id)initWithWrappedViewController:(id)arg1 type:(long long)arg2 ;
@end

