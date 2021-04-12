/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSArray;

@interface GKContiguousContainerView : UIView {

	BOOL _vertical;
	BOOL _applyOrthogonalConstraints;
	UIView* _baselineView;
	double _overlap;
	NSArray* _replaceableConstraints;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) BOOL vertical;                                 //@synthesize vertical=_vertical - In the implementation block
@property (assign,nonatomic) BOOL applyOrthogonalConstraints;               //@synthesize applyOrthogonalConstraints=_applyOrthogonalConstraints - In the implementation block
@property (nonatomic,retain) NSArray * replaceableConstraints;              //@synthesize replaceableConstraints=_replaceableConstraints - In the implementation block
@property (assign,nonatomic) UIView * baselineView;                         //@synthesize baselineView=_baselineView - In the implementation block
@property (assign,nonatomic) double overlap;                                //@synthesize overlap=_overlap - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                           //@synthesize insets=_insets - In the implementation block
+(id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(BOOL)arg3 ;
+(id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(BOOL)arg3 applyOrthogonalConstraints:(BOOL)arg4 ;
+(id)containerForViewsFontsLeadings:(id)arg1 options:(long long)arg2 ;
-(CGSize)intrinsicContentSize;
-(double)overlap;
-(UIView *)baselineView;
-(BOOL)vertical;
-(id)viewForBaselineLayout;
-(void)replaceSubviews:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBaselineView:(UIView *)arg1 ;
-(void)setApplyOrthogonalConstraints:(BOOL)arg1 ;
-(void)_addContiguousSubviews:(id)arg1 ;
-(BOOL)applyOrthogonalConstraints;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setOverlap:(double)arg1 ;
-(NSArray *)replaceableConstraints;
-(void)setReplaceableConstraints:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setVertical:(BOOL)arg1 ;
@end

