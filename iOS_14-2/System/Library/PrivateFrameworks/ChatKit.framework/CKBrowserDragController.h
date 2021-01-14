/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

