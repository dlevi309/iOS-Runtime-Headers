/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(id<AVTColorSliderDelegate>)delegate;
-(void)relayoutSublayers;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(CALayer *)thumbContentLayer;
-(void)valueDidChange:(id)arg1 forEvent:(id)arg2 ;
-(CAShapeLayer *)thumbClippingLayer;
-(CAShapeLayer *)thumbBorderLayer;
-(CALayer *)trackLayer;
-(CGColorRef)trackBorderColor;
-(void)removeTrackLayer:(id)arg1 animated:(BOOL)arg2 ;
-(void)setThumbView:(UIImageView *)arg1 ;
-(void)setThumbContentLayer:(CALayer *)arg1 ;
-(void)setThumbBorderLayer:(CAShapeLayer *)arg1 ;
-(void)setThumbClippingLayer:(CAShapeLayer *)arg1 ;
-(BOOL)shouldTriggerFeedback;
-(void)setShouldTriggerFeedback:(BOOL)arg1 ;
-(id)initWithUserInterfaceLayoutDirection:(long long)arg1 ;
-(CALayer *)thumbLayer;
-(void)setTrackLayer:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTrackLayer:(CALayer *)arg1 ;
-(_UIEdgeFeedbackGenerator *)edgeFeedbackGenerator;
-(void)setDelegate:(id<AVTColorSliderDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setSelectionFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setEdgeFeedbackGenerator:(_UIEdgeFeedbackGenerator *)arg1 ;
-(id)createThumbView;
-(void)setLayoutDirection:(long long)arg1 ;
-(UIImageView *)thumbView;
-(long long)layoutDirection;
-(id)currentMinimumTrackImage;
-(id)currentMaximumTrackImage;
@end

