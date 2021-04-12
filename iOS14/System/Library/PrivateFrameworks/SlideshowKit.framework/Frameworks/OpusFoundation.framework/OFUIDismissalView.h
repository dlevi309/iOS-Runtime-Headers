/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(void)setDismissalViewDelegate:(id<OFUIDismissalViewDelegate>)arg1 ;
-(id<OFUIDismissalViewDelegate>)dismissalViewDelegate;
@end

