/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <ShareSheet/UIActivityViewController.h>

@protocol SiriUIActivityViewControllerDelegate;
@interface SiriUIActivityViewController : UIActivityViewController {

	id<SiriUIActivityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriUIActivityViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIActivityViewControllerDelegate>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

