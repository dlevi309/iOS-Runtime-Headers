/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIButtonBarLayoutMetricsData;
@class UIBarButtonItem, NSArray;

@interface _UIButtonBarLayout : NSObject {

	id<_UIButtonBarLayoutMetricsData> _layoutMetrics;
	BOOL _dirty;

}

@property (assign,getter=isDirty,nonatomic) BOOL dirty;                      //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,readonly) BOOL isSpaceLayout; 
@property (nonatomic,readonly) BOOL isGroupLayout; 
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem; 
@property (nonatomic,readonly) NSArray * subLayouts; 
-(id)init;
-(id)description;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)compact;
-(BOOL)isDirty;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(void)setSuppressSpacing:(BOOL)arg1 ;
-(void)setUseGroupSizing:(BOOL)arg1 ;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg1 doneAppearanceChanged:(BOOL)arg2 ;
-(void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4 ;
-(BOOL)shouldHoriziontallyCenterView:(id)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(BOOL)isGroupLayout;
-(NSArray *)subLayouts;
-(BOOL)isSpaceLayout;
-(BOOL)_shouldBeDirty;
-(void)_configure;
-(void)configure;
-(void)_addLayoutViews:(id)arg1 ;
-(void)_addLayoutGuides:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(id)_metricsData;
-(BOOL)suppressSpacing;
-(BOOL)useGroupSizing;
-(void)addLayoutViews:(id)arg1 ;
-(void)addLayoutGuides:(id)arg1 ;
-(void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
@end

