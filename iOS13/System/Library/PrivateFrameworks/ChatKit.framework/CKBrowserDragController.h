/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>

@protocol CKBrowserDragControllerDelegate;
@interface CKBrowserDragController : UIViewController {

	id<CKBrowserDragControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CKBrowserDragControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CKBrowserDragControllerDelegate>)delegate;
-(void)setDelegate:(id<CKBrowserDragControllerDelegate>)arg1 ;
-(id)initWithView:(id)arg1 ;
@end

