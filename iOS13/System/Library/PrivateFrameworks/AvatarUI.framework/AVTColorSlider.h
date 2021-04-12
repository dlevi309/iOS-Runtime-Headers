/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UISlider.h>

@protocol AVTColorSliderDelegate;
@class CALayer, CAShapeLayer, UIImageView, _UIEdgeFeedbackGenerator, UISelectionFeedbackGenerator;

@interface AVTColorSlider : UISlider {

	BOOL _shouldTriggerFeedback;
	id<AVTColorSliderDelegate> _delegate;
	CALayer* _trackLayer;
	CAShapeLayer* _thumbClippingLayer;
	CALayer* _thumbContentLayer;
	CAShapeLayer* _thumbBorderLayer;
	UIImageView* _thumbView;
	_UIEdgeFeedbackGenerator* _edgeFeedbackGenerator;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	long long _layoutDirection;

}

@property (nonatomic,retain) CALayer * trackLayer;                                                   //@synthesize trackLayer=_trackLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * thumbClippingLayer;                                      //@synthesize thumbClippingLayer=_thumbClippingLayer - In the implementation block
@property (nonatomic,retain) CALayer * thumbContentLayer;                                            //@synthesize thumbContentLayer=_thumbContentLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * thumbBorderLayer;                                        //@synthesize thumbBorderLayer=_thumbBorderLayer - In the implementation block
@property (nonatomic,retain) UIImageView * thumbView;                                                //@synthesize thumbView=_thumbView - In the implementation block
@property (nonatomic,retain) _UIEdgeFeedbackGenerator * edgeFeedbackGenerator;                       //@synthesize edgeFeedbackGenerator=_edgeFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * selectionFeedbackGenerator;              //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL shouldTriggerFeedback;                                             //@synthesize shouldTriggerFeedback=_shouldTriggerFeedback - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                                              //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,readonly) CALayer * thumbLayer; 
@property (assign,nonatomic,__weak) id<AVTColorSliderDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
-(id<AVTColorSliderDelegate>)delegate;
-(void)setDelegate:(id<AVTColorSliderDelegate>)arg1 ;
-(void)layoutSubviews;
-(long long)layoutDirection;
-(void)setLayoutDirection:(long long)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(id)currentMinimumTrackImage;
-(id)currentMaximumTrackImage;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(void)setSelectionFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(UIImageView *)thumbView;
-(void)setThumbView:(UIImageView *)arg1 ;
-(void)relayoutSublayers;
-(void)valueDidChange:(id)arg1 forEvent:(id)arg2 ;
-(CALayer *)thumbContentLayer;
-(_UIEdgeFeedbackGenerator *)edgeFeedbackGenerator;
-(CAShapeLayer *)thumbClippingLayer;
-(CAShapeLayer *)thumbBorderLayer;
-(CALayer *)trackLayer;
-(CGColorRef)trackBorderColor;
-(void)removeTrackLayer:(id)arg1 animated:(BOOL)arg2 ;
-(void)setThumbContentLayer:(CALayer *)arg1 ;
-(void)setThumbBorderLayer:(CAShapeLayer *)arg1 ;
-(void)setThumbClippingLayer:(CAShapeLayer *)arg1 ;
-(BOOL)shouldTriggerFeedback;
-(void)setShouldTriggerFeedback:(BOOL)arg1 ;
-(id)initWithUserInterfaceLayoutDirection:(long long)arg1 ;
-(CALayer *)thumbLayer;
-(void)setTrackLayer:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTrackLayer:(CALayer *)arg1 ;
-(void)setEdgeFeedbackGenerator:(_UIEdgeFeedbackGenerator *)arg1 ;
@end

