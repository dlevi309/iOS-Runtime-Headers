/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/StoreKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UILabel, NSString;

@interface SKStarRatingControl : UIControl {

	UIImageView* _backgroundImageView;
	UILabel* _explanationLabel;
	UIImageView* _foregroundImageView;
	CGSize _hitPadding;
	double _starWidth;
	CGPoint _trackingLastPoint;
	CGPoint _trackingStartPoint;
	float _value;

}

@property (nonatomic,copy) NSString * explanationText; 
@property (assign,nonatomic) double starWidth;                      //@synthesize starWidth=_starWidth - In the implementation block
@property (assign,nonatomic) float value; 
-(float)value;
-(void)setValue:(float)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(CGRect)_foregroundImageClipBounds;
-(id)_newExplanationLabel;
-(void)_updateValueForPoint:(CGPoint)arg1 ;
-(double)starWidth;
-(id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2 ;
-(NSString *)explanationText;
-(void)setHitPadding:(CGSize)arg1 ;
-(void)setExplanationText:(NSString *)arg1 ;
-(BOOL)canHandleSwipes;
-(void)setStarWidth:(double)arg1 ;
@end

