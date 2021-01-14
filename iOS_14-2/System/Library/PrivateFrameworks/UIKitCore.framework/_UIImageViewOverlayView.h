/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@protocol _UIImageViewOverlayViewDelegate;
@interface _UIImageViewOverlayView : UIView {

	id<_UIImageViewOverlayViewDelegate> _overlayViewDelegate;

}

@property (assign,nonatomic,__weak) id<_UIImageViewOverlayViewDelegate> overlayViewDelegate;              //@synthesize overlayViewDelegate=_overlayViewDelegate - In the implementation block
-(id<_UIImageViewOverlayViewDelegate>)overlayViewDelegate;
-(void)setOverlayViewDelegate:(id<_UIImageViewOverlayViewDelegate>)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
@end

