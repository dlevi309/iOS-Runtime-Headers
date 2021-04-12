/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PK3DLiveCardViewDelegate.h>

@class PKPass, PK3DCardView, UIImageView;

@interface PKLiveRenderedCardFaceView : UIView <PK3DLiveCardViewDelegate> {

	PKPass* _pass;
	PK3DCardView* _cardView;
	UIImageView* _logoImageView;
	BOOL _invalidated;

}
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 ;
-(void)sceneDidRenderAtTime:(double)arg1 ;
@end

