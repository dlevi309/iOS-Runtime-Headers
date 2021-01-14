/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKBalloonVibrancy;
@class CKBalloonView, UIVisualEffectView;

@interface CKVibrantBalloonContainerView : UIView {

	CKBalloonView*<CKBalloonVibrancy> _vibrantBalloonView;
	UIVisualEffectView* _blurView;
	UIVisualEffectView* _vibrantView;

}
-(CGSize)intrinsicContentSize;
-(void)setBlurEffect:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_commonInitWithVibrantBalloon:(id)arg1 ;
-(void)_setupVisualEffectViews;
-(id)initWithTextBalloonView:(id)arg1 frame:(CGRect)arg2 ;
-(id)initWithAudioBallonView:(id)arg1 frame:(CGRect)arg2 ;
-(void)setVibrancyEffect:(id)arg1 ;
-(void)setColorOverlay:(id)arg1 ;
@end

