/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKMacToolbarViewDelegate;
@interface CKMacToolbarView : UIView {

	id<CKMacToolbarViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKMacToolbarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CKMacToolbarViewDelegate>)delegate;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<CKMacToolbarViewDelegate>)arg1 ;
@end

