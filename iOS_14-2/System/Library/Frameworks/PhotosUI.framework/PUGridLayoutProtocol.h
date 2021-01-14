/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class NSIndexPath, NSSet, NSString;


@protocol PUGridLayoutProtocol <NSObject,PUCollectionViewLayoutDelegating>
@property (nonatomic,readonly) NSIndexPath * globalFooterIndexPath; 
@property (assign,nonatomic) double globalHeaderHeight; 
@property (assign,nonatomic) double globalFooterHeight; 
@property (assign,nonatomic) double globalTopPadding; 
@property (assign,nonatomic) double globalBottomPadding; 
@property (nonatomic,copy) NSSet * hiddenItemIndexPaths; 
@property (nonatomic,copy) NSString * sectionHeaderElementKind; 
@property (assign,nonatomic) BOOL sectionHeadersEnabled; 
@property (assign,nonatomic) double sectionTopPadding; 
@property (assign,nonatomic) BOOL usesAspectItems; 
@property (nonatomic,readonly) CGSize itemSize; 
@required
-(CGSize)itemSize;
-(double)globalTopPadding;
-(void)setSectionTopPadding:(double)arg1;
-(void)setGlobalBottomPadding:(double)arg1;
-(void)setGlobalTopPadding:(double)arg1;
-(CGPoint*)targetContentOffsetForViewSizeTransitionContext:(id)arg1;
-(void)finalizeViewTransitionToSize;
-(id)prepareForViewTransitionToSize:(CGSize)arg1;
-(void)setSectionHeaderElementKind:(id)arg1;
-(void)setSectionHeadersEnabled:(BOOL)arg1;
-(id)assetIndexPathsForElementsInRect:(CGRect)arg1;
-(void)setHiddenItemIndexPaths:(id)arg1;
-(NSIndexPath *)globalFooterIndexPath;
-(double)globalBottomPadding;
-(NSSet *)hiddenItemIndexPaths;
-(BOOL)usesAspectItems;
-(void)setUsesAspectItems:(BOOL)arg1;
-(void)invalidateLayoutForVerticalScroll;
-(NSString *)sectionHeaderElementKind;
-(double)globalHeaderHeight;
-(double)globalFooterHeight;
-(void)setGlobalHeaderHeight:(double)arg1;
-(void)setGlobalFooterHeight:(double)arg1;
-(BOOL)sectionHeadersEnabled;
-(double)sectionTopPadding;

@end

