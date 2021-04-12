/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIconListView.h>

@interface SBDockIconListView : SBIconListView {

	BOOL _vertical;
	long long _layoutStyle;
	double _spacing;
	unsigned long long _minimumNumberOfIconsToDistributeEvenlyToEdges;
	UIEdgeInsets _layoutInsets;

}

@property (assign,nonatomic) long long layoutStyle;                                                         //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,getter=isVertical,nonatomic) BOOL vertical;                                               //@synthesize vertical=_vertical - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutInsets;                                                     //@synthesize layoutInsets=_layoutInsets - In the implementation block
@property (assign,nonatomic) double spacing;                                                                //@synthesize spacing=_spacing - In the implementation block
@property (nonatomic,readonly) double effectiveSpacing; 
@property (assign,nonatomic) unsigned long long minimumNumberOfIconsToDistributeEvenlyToEdges;              //@synthesize minimumNumberOfIconsToDistributeEvenlyToEdges=_minimumNumberOfIconsToDistributeEvenlyToEdges - In the implementation block
+(double)defaultHeight;
+(unsigned long long)defaultIconViewConfigurationOptions;
+(CGRect)defaultFrameForOrientation:(long long)arg1 ;
-(double)spacing;
-(BOOL)isVertical;
-(void)setSpacing:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setVertical:(BOOL)arg1 ;
-(UIEdgeInsets)layoutInsets;
-(void)setLayoutInsets:(UIEdgeInsets)arg1 ;
-(id)initWithModel:(id)arg1 layoutProvider:(id)arg2 iconLocation:(id)arg3 orientation:(long long)arg4 iconViewProvider:(id)arg5 ;
-(BOOL)allowsAddingIconCount:(unsigned long long)arg1 ;
-(void)setMinimumNumberOfIconsToDistributeEvenlyToEdges:(unsigned long long)arg1 ;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned long long*)arg2 proposedOrder:(long long*)arg3 ;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 numberOfIcons:(unsigned long long)arg2 ;
-(double)effectiveSpacingForNumberOfIcons:(unsigned long long)arg1 ;
-(void)didAddIconView:(id)arg1 ;
-(CGRect)boundsForLayout;
-(CGSize)scaledAlignmentIconSize;
-(unsigned long long)minimumNumberOfIconsToDistributeEvenlyToEdges;
-(UIEdgeInsets)cursorHitTestingInsetsForIconSpacing:(CGSize)arg1 ;
-(double)effectiveSpacing;
-(BOOL)automaticallyAdjustsLayoutMetricsToFit;
-(BOOL)adaptsOrientationToTraitCollection;
-(double)_additionalHorizontalInsetToCenterIcons;
-(double)_additionalVerticalInsetToCenterIcons;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 metrics:(const SBIconListLayoutMetrics*)arg2 ;
@end

