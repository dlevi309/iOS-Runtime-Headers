/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAnnotationController:(AKController *)arg1 ;
-(id<MUContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MUContentViewControllerDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AKController *)annotationController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
@end

