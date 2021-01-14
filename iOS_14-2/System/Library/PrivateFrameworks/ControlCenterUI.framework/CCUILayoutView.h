/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIScrollView.h>

@protocol CCUILayoutViewLayoutSource;
@class CCUILayoutOptions;

@interface CCUILayoutView : CCUIScrollView {

	CCUILayoutOptions* _layoutOptions;
	id<CCUILayoutViewLayoutSource> _layoutSource;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                         //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<CCUILayoutViewLayoutSource> layoutSource;              //@synthesize layoutSource=_layoutSource - In the implementation block
-(double)_totalExtraItemSpacingForDoubleMarginIndices:(id)arg1 itemSpacing:(double)arg2 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)_extraItemSpacingForItemAtPosition:(unsigned long long)arg1 doubleMarginIndices:(id)arg2 itemSpacing:(double)arg3 ;
-(id)_verticalDoubleMarginIndices;
-(id)subviewsToLayout;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setLayoutSource:(id<CCUILayoutViewLayoutSource>)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)edgeInsets;
-(CGRect)frameForLayoutRect:(CCUILayoutRect)arg1 ;
-(void)iterateLayoutSubviewsWithBlock:(/*^block*/id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_horizontalDoubleMarginIndices;
-(void)didAddSubview:(id)arg1 ;
-(id<CCUILayoutViewLayoutSource>)layoutSource;
-(CGRect)frameForSubview:(id)arg1 ;
-(void)setNeedsLayout;
-(id)initWithFrame:(CGRect)arg1 layoutOptions:(id)arg2 ;
@end

