/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>

@protocol _PUPickerUnavailableUIViewControllerDelegate;
@class NSError, PXContentUnavailableView;

@interface _PUPickerUnavailableUIViewController : UIViewController {

	unsigned long long _reason;
	NSError* _error;
	id<_PUPickerUnavailableUIViewControllerDelegate> _delegate;
	PXContentUnavailableView* _unavailableView;

}

@property (nonatomic,readonly) PXContentUnavailableView * unavailableView;                                  //@synthesize unavailableView=_unavailableView - In the implementation block
@property (nonatomic,readonly) unsigned long long reason;                                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (assign,nonatomic,__weak) id<_PUPickerUnavailableUIViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)unavailableUIViewController:(unsigned long long)arg1 error:(id)arg2 delegate:(id)arg3 ;
+(id)unavailableUIViewControllerEmbeddedInNavigationController:(unsigned long long)arg1 error:(id)arg2 delegate:(id)arg3 ;
-(id)init;
-(id<_PUPickerUnavailableUIViewControllerDelegate>)delegate;
-(NSError *)error;
-(void)setDelegate:(id<_PUPickerUnavailableUIViewControllerDelegate>)arg1 ;
-(id)initWithReason:(unsigned long long)arg1 error:(id)arg2 ;
-(void)updateUnavailableView;
-(id)unavailableTitle;
-(PXContentUnavailableView *)unavailableView;
-(id)unavailableMessage;
-(id)unavailableButtonTitle;
-(id)reasonDebugDescription;
-(void)askDelegateToCancel;
-(void)askDelegateToRetry;
-(void)viewDidLoad;
-(unsigned long long)reason;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateReason:(unsigned long long)arg1 error:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

