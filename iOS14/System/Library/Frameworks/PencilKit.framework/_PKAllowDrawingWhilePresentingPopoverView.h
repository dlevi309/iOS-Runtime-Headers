/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<_PKAllowDrawingWhilePresentingPopoverViewDelegate>)arg1 ;
-(BOOL)isHitTesting;
-(void)setIsHitTesting:(BOOL)arg1 ;
-(id)_rootAncestorViewOfDimmmingView:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

