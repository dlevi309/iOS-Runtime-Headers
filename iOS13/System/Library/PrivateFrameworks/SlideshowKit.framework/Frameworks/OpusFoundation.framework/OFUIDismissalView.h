/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OFUIDismissalViewDelegate;
@interface OFUIDismissalView : UIView {

	id<OFUIDismissalViewDelegate> _dismissalViewDelegate;
	BOOL _inPassthroughHitTest;

}

@property (assign,nonatomic) id<OFUIDismissalViewDelegate> dismissalViewDelegate;              //@synthesize dismissalViewDelegate=_dismissalViewDelegate - In the implementation block
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setDismissalViewDelegate:(id<OFUIDismissalViewDelegate>)arg1 ;
-(id<OFUIDismissalViewDelegate>)dismissalViewDelegate;
@end

