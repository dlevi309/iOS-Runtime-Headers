/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableDictionary, _UINavigationBarLargeTitleView, UILabel, UIView;

@interface _UINavigationBarLargeTitleViewLayout : NSObject {

	NSMutableDictionary* _titleHeightCache;
	NSMutableDictionary* _restingHeightCache;
	double _cachedRestingHeight;
	BOOL _alignAccessoryViewToTitleBaseline;
	BOOL _providesExtraSpaceForExcessiveLineHeights;
	_UINavigationBarLargeTitleView* _contentView;
	long long _titleType;
	UILabel* _titleLabel;
	unsigned long long _twoLineMode;
	double _titleRestingHeight;
	UIView* _accessoryView;
	unsigned long long _accessoryViewHorizontalAlignment;
	NSDirectionalEdgeInsets _layoutMargins;

}

@property (nonatomic,readonly) _UINavigationBarLargeTitleView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long titleType;                                              //@synthesize titleType=_titleType - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long twoLineMode;                                   //@synthesize twoLineMode=_twoLineMode - In the implementation block
@property (nonatomic,readonly) double titleRestingHeight;                                      //@synthesize titleRestingHeight=_titleRestingHeight - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                           //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL alignAccessoryViewToTitleBaseline;                           //@synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline - In the implementation block
@property (assign,nonatomic) BOOL providesExtraSpaceForExcessiveLineHeights;                   //@synthesize providesExtraSpaceForExcessiveLineHeights=_providesExtraSpaceForExcessiveLineHeights - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryViewHorizontalAlignment;              //@synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets layoutMargins;                            //@synthesize layoutMargins=_layoutMargins - In the implementation block
-(id)description;
-(_UINavigationBarLargeTitleView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)setLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)layoutMargins;
-(void)removeContent;
-(void)cleanupAfterLayoutTransitionCompleted;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)setTitleType:(long long)arg1 ;
-(void)_invalidateTitleHeightCache;
-(void)updateRestingTitleHeight;
-(double)titleRestingHeight;
-(CGSize)sizeFittingSize:(CGSize)arg1 titleType:(long long)arg2 ;
-(void)layoutViews;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)setAlignAccessoryViewToTitleBaseline:(BOOL)arg1 ;
-(void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1 ;
-(void)setTwoLineMode:(unsigned long long)arg1 ;
-(void)setProvidesExtraSpaceForExcessiveLineHeights:(BOOL)arg1 ;
-(UIView *)accessoryView;
-(long long)titleType;
-(unsigned long long)twoLineMode;
-(BOOL)providesExtraSpaceForExcessiveLineHeights;
-(BOOL)alignAccessoryViewToTitleBaseline;
-(unsigned long long)accessoryViewHorizontalAlignment;
-(CGRect)_contentLayoutBoundsUsingRestingTitleHeight:(BOOL)arg1 ;
-(double)_textHeightForSize:(CGSize)arg1 titleType:(long long)arg2 ;
-(void)_enforceLayoutOrdering;
-(void)layoutViewsWithOffset:(UIOffset)arg1 useRestingTitleHeight:(BOOL)arg2 ;
-(CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(double)arg1 ;
-(void)layoutViewsWithOffsetSupportingMultiLineShrinkToFit:(UIOffset)arg1 useRestingTitleHeight:(BOOL)arg2 ;
-(void)setContentAlpha:(double)arg1 ;
-(CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidthSupportingMultiLineShrinkToFit:(double)arg1 ;
-(CGRect)_contentLayoutBounds;
@end

