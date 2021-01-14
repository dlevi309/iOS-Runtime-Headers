/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface PKSelectionModificationKnob : CALayer {

	CALayer* _knobLayer;
	CALayer* _knobTailLayer;
	BOOL _isBrushSelecting;
	BOOL _isRTL;
	long long _knobLocation;
	CGColorRef _knobColor;

}

@property (assign,nonatomic) long long knobLocation;              //@synthesize knobLocation=_knobLocation - In the implementation block
@property (assign,nonatomic) CGColorRef knobColor;                //@synthesize knobColor=_knobColor - In the implementation block
-(void)layoutSublayers;
-(BOOL)isAccessibilityElement;
-(CGColorRef)knobColor;
-(id)accessibilityIdentifier;
-(void)setKnobColor:(CGColorRef)arg1 ;
-(void)dealloc;
-(void)_updateKnobAppearance;
-(CGRect)_rectForKnob;
-(CGRect)_rectForTail;
-(double)_knobTailWidth;
-(BOOL)_isTailFacingDown;
-(id)initWithLocation:(long long)arg1 color:(CGColorRef)arg2 isRTL:(BOOL)arg3 ;
-(BOOL)containsPoint:(CGPoint)arg1 inputType:(long long)arg2 ;
-(double)distanceFromKnobCenterToPoint:(CGPoint)arg1 ;
-(void)didBeginBrushSelection;
-(void)didEndBrushSelection;
-(long long)knobLocation;
-(void)setKnobLocation:(long long)arg1 ;
@end

