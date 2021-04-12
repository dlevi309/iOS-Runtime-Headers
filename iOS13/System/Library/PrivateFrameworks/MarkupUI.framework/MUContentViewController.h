/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
*/

#import <UIKitCore/UIViewController.h>

@protocol MUContentViewControllerDelegate;
@class AKController;

@interface MUContentViewController : UIViewController {

	id<MUContentViewControllerDelegate> _delegate;
	AKController* _annotationController;

}

@property (__weak) id<MUContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) AKController * annotationController;                       //@synthesize annotationController=_annotationController - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<MUContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MUContentViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(AKController *)annotationController;
-(void)setAnnotationController:(AKController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
@end

