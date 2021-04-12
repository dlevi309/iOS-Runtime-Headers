/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCollectionLayoutEnvironment_Private;
@class _UIListSeparatorConfiguration, UICollectionView, NSArray, NSString, UIColor;

@interface _UICollectionViewListLayoutSectionConfiguration : NSObject <NSCopying> {

	BOOL _stylesFirstItemAsHeader;
	BOOL __apiVersion;
	_UIListSeparatorConfiguration* _separatorConfiguration;
	long long _appearanceStyle;
	double _rowHeight;
	double _sectionHeaderHeight;
	double _sectionFooterHeight;
	double _estimatedRowHeight;
	double _estimatedSectionHeaderHeight;
	double _estimatedSectionFooterHeight;
	long long _separatorStyle;
	/*^block*/id _separatorInsetProvider;
	/*^block*/id _leadingSwipeActionsConfigurationProvider;
	/*^block*/id _trailingSwipeActionsConfigurationProvider;
	/*^block*/id _willBeginSwipingHandler;
	/*^block*/id _didEndSwipingHandler;
	UICollectionView* _collectionView;
	id<NSCollectionLayoutEnvironment_Private> _layoutEnvironment;
	NSArray* _itemHeights;
	NSString* __headerElementKind;
	NSString* __footerElementKind;
	UIColor* __backgroundColor;

}

@property (getter=_collectionView,nonatomic,__weak,readonly) UICollectionView * collectionView;                                                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (getter=_layoutEnvironment,nonatomic,readonly) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;                                              //@synthesize layoutEnvironment=_layoutEnvironment - In the implementation block
@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants; 
@property (getter=_separatorConfigurationNoCopy,nonatomic,readonly) _UIListSeparatorConfiguration * _separatorConfigurationNoCopy; 
@property (getter=_wantsSwipeActions,nonatomic,readonly) BOOL wantsSwipeActions; 
@property (assign,getter=_isAPIVersion,nonatomic) BOOL _apiVersion;                                                                                                //@synthesize _apiVersion=__apiVersion - In the implementation block
@property (setter=_setItemHeights:,getter=_itemHeights,nonatomic,copy) NSArray * itemHeights;                                                                      //@synthesize itemHeights=_itemHeights - In the implementation block
@property (nonatomic,copy) NSString * _headerElementKind;                                                                                                          //@synthesize _headerElementKind=__headerElementKind - In the implementation block
@property (nonatomic,copy) NSString * _footerElementKind;                                                                                                          //@synthesize _footerElementKind=__footerElementKind - In the implementation block
@property (nonatomic,retain) UIColor * _backgroundColor;                                                                                                           //@synthesize _backgroundColor=__backgroundColor - In the implementation block
@property (assign,nonatomic) long long appearanceStyle;                                                                                                            //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (assign,nonatomic) BOOL stylesFirstItemAsHeader;                                                                                                         //@synthesize stylesFirstItemAsHeader=_stylesFirstItemAsHeader - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                                                                     //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double sectionHeaderHeight;                                                                                                           //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double sectionFooterHeight;                                                                                                           //@synthesize sectionFooterHeight=_sectionFooterHeight - In the implementation block
@property (assign,nonatomic) double estimatedRowHeight;                                                                                                            //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionHeaderHeight;                                                                                                  //@synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionFooterHeight;                                                                                                  //@synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight - In the implementation block
@property (setter=_setSeparatorConfiguration:,getter=_separatorConfiguration,nonatomic,copy) _UIListSeparatorConfiguration * _separatorConfiguration;              //@synthesize separatorConfiguration=_separatorConfiguration - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                                                                                             //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets separatorInset; 
@property (nonatomic,copy) id separatorInsetProvider;                                                                                                              //@synthesize separatorInsetProvider=_separatorInsetProvider - In the implementation block
@property (nonatomic,copy) id leadingSwipeActionsConfigurationProvider;                                                                                            //@synthesize leadingSwipeActionsConfigurationProvider=_leadingSwipeActionsConfigurationProvider - In the implementation block
@property (nonatomic,copy) id trailingSwipeActionsConfigurationProvider;                                                                                           //@synthesize trailingSwipeActionsConfigurationProvider=_trailingSwipeActionsConfigurationProvider - In the implementation block
@property (nonatomic,copy) id willBeginSwipingHandler;                                                                                                             //@synthesize willBeginSwipingHandler=_willBeginSwipingHandler - In the implementation block
@property (nonatomic,copy) id didEndSwipingHandler;                                                                                                                //@synthesize didEndSwipingHandler=_didEndSwipingHandler - In the implementation block
+(id)new;
-(id)_traitCollection;
-(NSDirectionalEdgeInsets)separatorInset;
-(id)initWithCollectionView:(id)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setSectionHeaderHeight:(double)arg1 ;
-(double)estimatedRowHeight;
-(double)estimatedSectionHeaderHeight;
-(double)_defaultSectionFooterHeight;
-(BOOL)_wantsSwipeActions;
-(NSDirectionalEdgeInsets)_sectionContentInsetsForAppearanceStyleWithDefaultInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setEstimatedSectionHeaderHeight:(double)arg1 ;
-(double)sectionHeaderHeight;
-(id)_constants;
-(void)setEstimatedRowHeight:(double)arg1 ;
-(id)_collectionView;
-(void)setSectionFooterHeight:(double)arg1 ;
-(double)sectionFooterHeight;
-(double)estimatedSectionFooterHeight;
-(void)setEstimatedSectionFooterHeight:(double)arg1 ;
-(void)setSeparatorInset:(NSDirectionalEdgeInsets)arg1 ;
-(long long)separatorStyle;
-(double)_separatorHeight;
-(id)init;
-(BOOL)_hasFooter;
-(void)setAppearanceStyle:(long long)arg1 ;
-(void)setStylesFirstItemAsHeader:(BOOL)arg1 ;
-(double)_effectiveEstimatedSectionHeaderHeight;
-(void)setRowHeight:(double)arg1 ;
-(void)set_apiVersion:(BOOL)arg1 ;
-(_UIListSeparatorConfiguration *)_separatorConfiguration;
-(BOOL)_shouldDrawThickSeparators;
-(NSString *)_headerElementKind;
-(BOOL)_isAPIVersion;
-(id)_itemHeights;
-(id)willBeginSwipingHandler;
-(BOOL)_hasHeaderOrFirstItemStyledAsHeader;
-(void)_setSeparatorConfiguration:(id)arg1 ;
-(_UIListSeparatorConfiguration *)_separatorConfigurationNoCopy;
-(id)_createSeparatorForBottom:(BOOL)arg1 ;
-(id)_layoutEnvironment;
-(id)initWithAppearanceStyle:(long long)arg1 layoutEnvironment:(id)arg2 ;
-(void)set_backgroundColor:(UIColor *)arg1 ;
-(double)rowHeight;
-(void)set_headerElementKind:(NSString *)arg1 ;
-(NSString *)_footerElementKind;
-(long long)appearanceStyle;
-(BOOL)stylesFirstItemAsHeader;
-(long long)_defaultSeparatorStyleForAppearanceStyle:(long long)arg1 ;
-(id)_generateLayoutGroup:(id)arg1 ;
-(double)_defaultSectionHeaderHeight;
-(id)_createSwipeActionsContainer;
-(void)setDidEndSwipingHandler:(id)arg1 ;
-(double)_effectiveEstimatedRowHeight;
-(long long)_defaultContentInsetsReference;
-(double)_defaultRowHeight;
-(id)trailingSwipeActionsConfigurationProvider;
-(BOOL)_usesSectionBackgroundDecoration;
-(UIColor *)_backgroundColor;
-(double)_effectiveEstimatedSectionFooterHeight;
-(id)leadingSwipeActionsConfigurationProvider;
-(id)separatorInsetProvider;
-(id)didEndSwipingHandler;
-(void)setLeadingSwipeActionsConfigurationProvider:(id)arg1 ;
-(void)setSeparatorInsetProvider:(id)arg1 ;
-(void)set_footerElementKind:(NSString *)arg1 ;
-(BOOL)_shouldSupplementariesFollowSectionInsets;
-(void)setTrailingSwipeActionsConfigurationProvider:(id)arg1 ;
-(void)_addSupplementaryItemsToLayout:(id)arg1 ;
-(void)setWillBeginSwipingHandler:(id)arg1 ;
-(void)_setItemHeights:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_shouldPinSupplementaries;
@end

