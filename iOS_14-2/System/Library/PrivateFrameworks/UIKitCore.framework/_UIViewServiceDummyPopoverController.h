/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPopoverController.h>

@protocol _UIViewServiceDummyPopoverControllerDelegate;
@interface _UIViewServiceDummyPopoverController : UIPopoverController {

	id<_UIViewServiceDummyPopoverControllerDelegate> _dummyPopoverControllerDelegate;

}

@property (assign,nonatomic,__weak) id<_UIViewServiceDummyPopoverControllerDelegate> dummyPopoverControllerDelegate;              //@synthesize dummyPopoverControllerDelegate=_dummyPopoverControllerDelegate - In the implementation block
+(Class)_popoverViewClass;
-(id<_UIViewServiceDummyPopoverControllerDelegate>)dummyPopoverControllerDelegate;
-(void)_popoverView:(id)arg1 didSetUseToolbarShine:(BOOL)arg2 ;
-(void)_super_setPopoverContentSize:(CGSize)arg1 ;
-(void)setDummyPopoverControllerDelegate:(id<_UIViewServiceDummyPopoverControllerDelegate>)arg1 ;
-(void)setPopoverContentSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(BOOL)_attemptsToAvoidKeyboard;
@end

