/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UITextInput;
@class UIView, NSArray, NSMutableArray, UIWebDragDotView;

@interface UIWebTextRangeView : UIView {

	UIView*<UITextInput> m_container;
	NSArray* _rects;
	NSMutableArray* _rectViews;
	UIWebDragDotView* _startDot;
	UIWebDragDotView* _endDot;
	BOOL _magnifying;

}

@property (nonatomic,readonly) UIView*<UITextInput> container; 
@property (nonatomic,copy) NSArray * rects;                                 //@synthesize rects=_rects - In the implementation block
-(void)dealloc;
-(UIView*<UITextInput>)container;
-(void)removeFromSuperview;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)boundingRect;
-(NSArray *)rects;
-(CGRect)startEdge;
-(CGRect)endEdge;
-(void)updateRectViews;
-(void)setRects:(NSArray *)arg1 ;
-(void)prepareForMagnification;
-(void)doneMagnifying;
-(void)geometryChanged;
-(BOOL)startIsHorizontal;
-(BOOL)endIsHorizontal;
-(CGRect)rectAtIndex:(int)arg1 ;
-(CGPoint)endCorner;
-(CGPoint)startCorner;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)updateDragDots;
-(id)rectViewAtIndex:(int)arg1 ;
@end

