/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UISlider.h>

@class UIColor, NSMutableArray;

@interface HUIStepSlider : UISlider {

	BOOL _restrictsValuesToTicks;
	BOOL _supportsVibrancy;
	BOOL _drawsEndTicks;
	unsigned long long _segmentCount;
	UIColor* _tickColor;
	NSMutableArray* _ticks;

}

@property (nonatomic,retain) NSMutableArray * ticks;                       //@synthesize ticks=_ticks - In the implementation block
@property (assign,nonatomic) unsigned long long segmentCount;              //@synthesize segmentCount=_segmentCount - In the implementation block
@property (assign,nonatomic) BOOL restrictsValuesToTicks;                  //@synthesize restrictsValuesToTicks=_restrictsValuesToTicks - In the implementation block
@property (assign,nonatomic) BOOL supportsVibrancy;                        //@synthesize supportsVibrancy=_supportsVibrancy - In the implementation block
@property (assign,nonatomic) BOOL drawsEndTicks;                           //@synthesize drawsEndTicks=_drawsEndTicks - In the implementation block
@property (nonatomic,retain) UIColor * tickColor;                          //@synthesize tickColor=_tickColor - In the implementation block
-(id)traitCollection;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSMutableArray *)ticks;
-(void)layoutSubviews;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)setSegmentCount:(unsigned long long)arg1 ;
-(unsigned long long)segmentCount;
-(void)setTicks:(NSMutableArray *)arg1 ;
-(void)sliderTapped:(id)arg1 ;
-(unsigned long long)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1 ;
-(BOOL)supportsVibrancy;
-(UIColor *)tickColor;
-(void)setTickColor:(UIColor *)arg1 ;
-(void)setRestrictsValuesToTicks:(BOOL)arg1 ;
-(void)setSupportsVibrancy:(BOOL)arg1 ;
-(void)setDrawsEndTicks:(BOOL)arg1 ;
-(BOOL)restrictsValuesToTicks;
-(BOOL)drawsEndTicks;
@end

