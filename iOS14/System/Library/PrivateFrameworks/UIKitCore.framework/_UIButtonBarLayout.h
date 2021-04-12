/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSuppressSpacing:(BOOL)arg1 ;
-(void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(void)setUseGroupSizing:(BOOL)arg1 ;
-(void)_addLayoutGuides:(id)arg1 ;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(BOOL)isSpaceLayout;
-(void)_addLayoutViews:(id)arg1 ;
-(BOOL)isGroupLayout;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg1 doneAppearanceChanged:(BOOL)arg2 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(UIBarButtonItem *)barButtonItem;
-(void)addLayoutViews:(id)arg1 ;
-(void)_configure;
-(BOOL)suppressSpacing;
-(BOOL)_shouldBeDirty;
-(NSArray *)subLayouts;
-(id)_metricsData;
-(void)setDirty:(BOOL)arg1 ;
-(void)addLayoutGuides:(id)arg1 ;
-(void)configure;
-(BOOL)useGroupSizing;
-(BOOL)shouldHoriziontallyCenterView:(id)arg1 ;
-(BOOL)isDirty;
-(id)init;
-(id)description;
-(void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4 ;
-(BOOL)compact;
@end

