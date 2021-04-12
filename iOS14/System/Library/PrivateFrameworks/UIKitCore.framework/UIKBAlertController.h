/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

