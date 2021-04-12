/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)didAddSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setLayoutSource:(id<CCUILayoutViewLayoutSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 layoutOptions:(id)arg2 ;
-(CGRect)frameForLayoutRect:(CCUILayoutRect)arg1 ;
-(CGRect)frameForSubview:(id)arg1 ;
-(void)iterateLayoutSubviewsWithBlock:(/*^block*/id)arg1 ;
-(id<CCUILayoutViewLayoutSource>)layoutSource;
-(id)subviewsToLayout;
@end

