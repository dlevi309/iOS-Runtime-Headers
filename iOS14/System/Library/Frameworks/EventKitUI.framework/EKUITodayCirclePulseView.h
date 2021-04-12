/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class UIView, TodayCirclePulseBackground, UILabel, NSDictionary, NSString, UIFont;

@interface EKUITodayCirclePulseView : UIView <_UIBasicAnimationFactory> {

	UIView* _backgroundContainer;
	TodayCirclePulseBackground* _background;
	UILabel* _label;
	UILabel* _overlayLabel;
	NSDictionary* _attributes;
	NSDictionary* _overlayAttributes;
	BOOL _usesTextYOffsetWithoutAdjustmentForOverlay;
	BOOL _circleShouldFillFrame;
	BOOL _dontApplyCenteringOffset;
	double _circleDiameter;
	double _textYOffset;
	double _textFrameWidthAdjustment;
	CGPoint _textOffsetFromCircle;

}

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,copy) NSString * overlayString; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIFont * overlayFont; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (nonatomic,retain) NSDictionary * overlayAttributes; 
@property (assign,nonatomic) double circleDiameter;                                        //@synthesize circleDiameter=_circleDiameter - In the implementation block
@property (assign,nonatomic) double textYOffset;                                           //@synthesize textYOffset=_textYOffset - In the implementation block
@property (assign,nonatomic) CGPoint textOffsetFromCircle;                                 //@synthesize textOffsetFromCircle=_textOffsetFromCircle - In the implementation block
@property (assign,nonatomic) BOOL usesTextYOffsetWithoutAdjustmentForOverlay;              //@synthesize usesTextYOffsetWithoutAdjustmentForOverlay=_usesTextYOffsetWithoutAdjustmentForOverlay - In the implementation block
@property (assign,nonatomic) BOOL circleShouldFillFrame;                                   //@synthesize circleShouldFillFrame=_circleShouldFillFrame - In the implementation block
@property (assign,nonatomic) BOOL dontApplyCenteringOffset;                                //@synthesize dontApplyCenteringOffset=_dontApplyCenteringOffset - In the implementation block
@property (assign,nonatomic) double textFrameWidthAdjustment;                              //@synthesize textFrameWidthAdjustment=_textFrameWidthAdjustment - In the implementation block
@property (assign,nonatomic) BOOL usesRoundedRectInsteadOfCircle; 
@property (assign,nonatomic) double roundedRectCornerRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)pulse:(/*^block*/id)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)_layoutSubviews;
-(id)_overlayLabel;
-(NSDictionary *)attributes;
-(BOOL)usesRoundedRectInsteadOfCircle;
-(double)roundedRectCornerRadius;
-(void)setUsesRoundedRectInsteadOfCircle:(BOOL)arg1 ;
-(void)setRoundedRectCornerRadius:(double)arg1 ;
-(void)_updateLabelAttributedString;
-(void)_updateOverlayLabelAttributedString;
-(BOOL)dontApplyCenteringOffset;
-(double)textFrameWidthAdjustment;
-(BOOL)circleShouldFillFrame;
-(double)circleDiameter;
-(CGPoint)textOffsetFromCircle;
-(void)setOverlayString:(NSString *)arg1 ;
-(NSString *)string;
-(BOOL)usesTextYOffsetWithoutAdjustmentForOverlay;
-(NSString *)overlayString;
-(void)setOverlayFont:(UIFont *)arg1 ;
-(UIFont *)overlayFont;
-(void)setOverlayAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)overlayAttributes;
-(void)setCircleDiameter:(double)arg1 ;
-(double)textYOffset;
-(void)setTextYOffset:(double)arg1 ;
-(void)setTextOffsetFromCircle:(CGPoint)arg1 ;
-(void)setUsesTextYOffsetWithoutAdjustmentForOverlay:(BOOL)arg1 ;
-(void)setCircleShouldFillFrame:(BOOL)arg1 ;
-(void)setDontApplyCenteringOffset:(BOOL)arg1 ;
-(void)setTextFrameWidthAdjustment:(double)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(UIFont *)font;
@end

