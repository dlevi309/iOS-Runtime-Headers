/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <UIKitCore/UINavigationController.h>

@protocol FANavigationControllerDelegate;
@interface FANavigationController : UINavigationController {

	id<FANavigationControllerDelegate> _familyDelegate;

}

@property (assign,nonatomic,__weak) id<FANavigationControllerDelegate> familyDelegate;              //@synthesize familyDelegate=_familyDelegate - In the implementation block
-(BOOL)_isEmpty;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFamilyDelegate:(id<FANavigationControllerDelegate>)arg1 ;
-(id<FANavigationControllerDelegate>)familyDelegate;
@end

