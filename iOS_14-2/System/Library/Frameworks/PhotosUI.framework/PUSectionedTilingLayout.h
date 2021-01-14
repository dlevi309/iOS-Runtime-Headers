/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTilingLayout.h>

@interface PUSectionedTilingLayout : PUTilingLayout {

	long long _numberOfSections;
	PUSectionedTilingLayoutSectionInfo* _sectionInfos;
	NSRange _computedSections;
	long long _seedSection;
	CGPoint _seedSectionOrigin;
	BOOL _leftToRight;
	CGSize _interSectionSpacing;

}

@property (nonatomic,readonly) NSRange computedSections; 
@property (assign,nonatomic) BOOL leftToRight;                        //@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,nonatomic) CGSize interSectionSpacing;              //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
-(CGRect)contentBounds;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)prepareLayout;
-(id)init;
-(id)layoutInfosForTilesInRect:(CGRect)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(void)addLayoutInfosForTilesInRect:(CGRect)arg1 section:(long long)arg2 toSet:(id)arg3 ;
-(CGSize)interSectionSpacing;
-(void)setInterSectionSpacing:(CGSize)arg1 ;
-(CGRect)boundsForSection:(long long)arg1 ;
-(void)setLeftToRight:(BOOL)arg1 ;
-(void)computeSectionsInRect:(CGRect)arg1 ;
-(void)invalidateSectionInfos;
-(CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2 ;
-(long long)_numberOfSections;
-(NSRange)computedSections;
-(BOOL)leftToRight;
-(CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2 ;
-(void)invalidateLayoutForUpdateWithItems:(id)arg1 ;
-(BOOL)_scrollsHorizontallyNotVertically;
-(void)_computeSeedSectionIfNeeded;
-(void)_ensureComputedSectionsHaveBeenSeeded;
-(PUSectionedTilingLayoutSectionInfo*)_sectionInfoForSection:(long long)arg1 ;
-(void)_invalidateNumberOfSections;
-(void)_markAllSectionInfosInvalid;
-(void)dealloc;
@end

