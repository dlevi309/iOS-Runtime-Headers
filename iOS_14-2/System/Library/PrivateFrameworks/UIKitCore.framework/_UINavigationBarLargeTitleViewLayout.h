/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)removeContent;
-(void)cleanupAfterLayoutTransitionCompleted;
-(unsigned long long)accessoryViewHorizontalAlignment;
-(UIView *)accessoryView;
-(void)setAlignAccessoryViewToTitleBaseline:(BOOL)arg1 ;
-(unsigned long long)twoLineMode;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(NSDirectionalEdgeInsets)layoutMargins;
-(CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(double)arg1 ;
-(void)updateRestingTitleHeight;
-(BOOL)providesExtraSpaceForExcessiveLineHeights;
-(void)setLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)description;
-(double)_textHeightForSize:(CGSize)arg1 titleType:(long long)arg2 ;
-(void)setContentAlpha:(double)arg1 ;
-(long long)titleType;
-(void)_enforceLayoutOrdering;
-(BOOL)alignAccessoryViewToTitleBaseline;
-(void)setProvidesExtraSpaceForExcessiveLineHeights:(BOOL)arg1 ;
-(CGRect)_contentLayoutBoundsUsingRestingTitleHeight:(BOOL)arg1 ;
-(CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidthSupportingMultiLineShrinkToFit:(double)arg1 ;
-(CGSize)sizeFittingSize:(CGSize)arg1 titleType:(long long)arg2 ;
-(double)titleRestingHeight;
-(void)_invalidateTitleHeightCache;
-(void)setTwoLineMode:(unsigned long long)arg1 ;
-(CGRect)_contentLayoutBounds;
-(void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1 ;
-(_UINavigationBarLargeTitleView *)contentView;
-(void)setTitleType:(long long)arg1 ;
-(void)layoutViews;
-(void)layoutViewsWithOffsetSupportingMultiLineShrinkToFit:(UIOffset)arg1 useRestingTitleHeight:(BOOL)arg2 ;
-(void)layoutViewsWithOffset:(UIOffset)arg1 useRestingTitleHeight:(BOOL)arg2 ;
@end

