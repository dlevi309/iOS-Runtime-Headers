/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _PKAllowDrawingWhilePresentingPopoverViewDelegate;
@interface _PKAllowDrawingWhilePresentingPopoverView : UIView {

	BOOL _isHitTesting;
	id<_PKAllowDrawingWhilePresentingPopoverViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isHitTesting;                                                                  //@synthesize isHitTesting=_isHitTesting - In the implementation block
@property (assign,nonatomic,__weak) id<_PKAllowDrawingWhilePresentingPopoverViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_PKAllowDrawingWhilePresentingPopoverViewDelegate>)delegate;
-(void)setDelegate:(id<_PKAllowDrawingWhilePresentingPopoverViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isHitTesting;
-(void)setIsHitTesting:(BOOL)arg1 ;
-(id)_rootAncestorViewOfDimmmingView:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

