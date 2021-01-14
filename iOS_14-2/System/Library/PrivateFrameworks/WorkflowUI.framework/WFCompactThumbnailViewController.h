/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>

@protocol WFCompactThumbnailViewControllerDelegate;
@interface WFCompactThumbnailViewController : UIViewController {

	id<WFCompactThumbnailViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long preferredContentMode; 
@property (assign,nonatomic,__weak) id<WFCompactThumbnailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFCompactThumbnailViewControllerDelegate>)delegate;
-(double)contentHeightForWidth:(double)arg1 ;
-(void)setDelegate:(id<WFCompactThumbnailViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)preferredContentMode;
-(void)invalidateContentSize;
@end

