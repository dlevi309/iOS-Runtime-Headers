/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@protocol _UIImageViewOverlayViewDelegate;
@interface _UIImageViewOverlayView : UIView {

	id<_UIImageViewOverlayViewDelegate> _overlayViewDelegate;

}

@property (assign,nonatomic,__weak) id<_UIImageViewOverlayViewDelegate> overlayViewDelegate;              //@synthesize overlayViewDelegate=_overlayViewDelegate - In the implementation block
-(void)setClipsToBounds:(BOOL)arg1 ;
-(id<_UIImageViewOverlayViewDelegate>)overlayViewDelegate;
-(void)setOverlayViewDelegate:(id<_UIImageViewOverlayViewDelegate>)arg1 ;
@end

