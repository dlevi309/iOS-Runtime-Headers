/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class UIView, UIColor, NSString;

@interface _UIScrollViewScrollIndicator : UIView <UIPointerInteractionDelegate> {

	BOOL _expandedForDirectManipulation;
	BOOL _hasPointer;
	unsigned long long _type;
	long long _style;
	UIView* _roundedFillView;
	UIColor* _foregroundColor;

}

@property (nonatomic,retain) UIView * roundedFillView;                        //@synthesize roundedFillView=_roundedFillView - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                       //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) BOOL hasPointer;                                 //@synthesize hasPointer=_hasPointer - In the implementation block
@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long style;                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL expandedForDirectManipulation;              //@synthesize expandedForDirectManipulation=_expandedForDirectManipulation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)indicatorDimension;
+(UIEdgeInsets)_cursorHitTestingInsets;
+(double)_expandedIndicatorDimension;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)foregroundColor;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHasPointer:(BOOL)arg1 ;
-(id)_colorForStyle:(long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(UIView *)roundedFillView;
-(void)layoutSubviews;
-(void)setExpandedForDirectManipulation:(BOOL)arg1 ;
-(unsigned long long)type;
-(BOOL)hasPointer;
-(void)_layoutFillViewAnimated:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(BOOL)expandedForDirectManipulation;
-(void)setStyle:(long long)arg1 ;
-(void)setRoundedFillView:(UIView *)arg1 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(CGRect)_offsetFillViewRectForExpandedState:(CGRect)arg1 ;
-(long long)style;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
@end

