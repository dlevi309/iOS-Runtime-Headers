/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)rects;
-(CGRect)endEdge;
-(void)removeFromSuperview;
-(CGPoint)endCorner;
-(CGRect)rectAtIndex:(int)arg1 ;
-(void)geometryChanged;
-(BOOL)startIsHorizontal;
-(BOOL)endIsHorizontal;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)updateDragDots;
-(id)rectViewAtIndex:(int)arg1 ;
-(void)doneMagnifying;
-(CGRect)startEdge;
-(void)prepareForMagnification;
-(CGRect)boundingRect;
-(void)setRects:(NSArray *)arg1 ;
-(UIView*<UITextInput>)container;
-(CGPoint)startCorner;
-(void)dealloc;
-(void)updateRectViews;
@end

