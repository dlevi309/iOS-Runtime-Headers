/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIAlertController.h>

@protocol UIKBAlertControllerDelegate;
@interface UIKBAlertController : UIAlertController {

	id<UIKBAlertControllerDelegate> _kbDelegate;

}

@property (assign,nonatomic) id<UIKBAlertControllerDelegate> kbDelegate;              //@synthesize kbDelegate=_kbDelegate - In the implementation block
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<UIKBAlertControllerDelegate>)kbDelegate;
-(void)setKbDelegate:(id<UIKBAlertControllerDelegate>)arg1 ;
@end

