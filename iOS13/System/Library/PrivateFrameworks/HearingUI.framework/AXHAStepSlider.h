/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UISlider.h>

@class UIColor, NSMutableArray;

@interface AXHAStepSlider : UISlider {

	BOOL _restrictsValuesToTicks;
	BOOL _supportsVibrancy;
	unsigned long long _segmentCount;
	UIColor* _tickColor;
	NSMutableArray* _ticks;

}

@property (nonatomic,retain) NSMutableArray * ticks;                       //@synthesize ticks=_ticks - In the implementation block
@property (assign,nonatomic) unsigned long long segmentCount;              //@synthesize segmentCount=_segmentCount - In the implementation block
@property (assign,nonatomic) BOOL restrictsValuesToTicks;                  //@synthesize restrictsValuesToTicks=_restrictsValuesToTicks - In the implementation block
@property (assign,nonatomic) BOOL supportsVibrancy;                        //@synthesize supportsVibrancy=_supportsVibrancy - In the implementation block
@property (nonatomic,retain) UIColor * tickColor;                          //@synthesize tickColor=_tickColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)traitCollection;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(void)setSegmentCount:(unsigned long long)arg1 ;
-(void)sliderTapped:(id)arg1 ;
-(unsigned long long)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1 ;
-(unsigned long long)segmentCount;
-(NSMutableArray *)ticks;
-(void)setTicks:(NSMutableArray *)arg1 ;
-(BOOL)supportsVibrancy;
-(void)setTickColor:(UIColor *)arg1 ;
-(void)setRestrictsValuesToTicks:(BOOL)arg1 ;
-(void)setSupportsVibrancy:(BOOL)arg1 ;
-(BOOL)restrictsValuesToTicks;
-(UIColor *)tickColor;
@end

