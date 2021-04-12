/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(void)invalidate;
-(void)sceneDidRenderAtTime:(double)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 ;
@end

