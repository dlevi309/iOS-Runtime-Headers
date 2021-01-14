/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>
#import <libobjc.A.dylib/PXPresentedGridLayout.h>

@class PXExploreParsingState, PXExploreLayoutMetrics, NSString;

@interface PXExploreLayoutGenerator : PXLayoutGenerator <PXGDiagnosticsProvider, PXPresentedGridLayout> {

	long long _count;
	long long _capacity;
	SCD_Struct_PX88* _inputItemInfos;
	PXLayoutGeometry* _outputGeometries;
	long long* _outputItemIndexToParseLocation;
	SCD_Struct_PX29* _outputItemLocations;
	long long* _outputNumberOfColumnsAtRow;
	BOOL _isPrepared;
	CGPoint _origin;
	long long _row;
	long long _localNumberOfColumns;
	long long _localNumberOfRows;
	CGSize _cellSize;
	CGSize _intercellSpacing;
	CGSize _contentSize;
	PXCornerSpriteIndexes _cornerSpriteIndexes;
	CGSize _headerItemSize;
	CGSize _minHeroItemsSize;
	PXExploreParsingState* _localState;
	CGSize _minimumItemSize;
	CGSize _buildingBlockSize;

}

@property (nonatomic,readonly) PXExploreParsingState * localState;                 //@synthesize localState=_localState - In the implementation block
@property (nonatomic,readonly) long long numberOfRemainingItems; 
@property (nonatomic,copy) PXExploreLayoutMetrics * metrics; 
@property (nonatomic,readonly) CGSize headerItemSize; 
@property (nonatomic,readonly) CGSize minHeroItemsSize; 
@property (nonatomic,readonly) CGSize minimumItemSize;                             //@synthesize minimumItemSize=_minimumItemSize - In the implementation block
@property (nonatomic,readonly) CGSize buildingBlockSize;                           //@synthesize buildingBlockSize=_buildingBlockSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long presentedNumberOfRows; 
-(void)addLocalItemWithType:(long long)arg1 atColumn:(long long)arg2 row:(long long)arg3 columnSpan:(long long)arg4 rowSpan:(long long)arg5 ;
-(CGSize)estimatedSizeForPadLandscape;
-(void)_parseFourColumnHeroRowWithType:(long long)arg1 heroItemType:(long long)arg2 numberOfItems:(long long)arg3 ;
-(CGSize)_estimatedSizeForFourColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(CGSize)minimumItemSize;
-(void)_parseThreeColumnShortRowWithNumberOfItems:(long long)arg1 ;
-(BOOL)parseThreeColumnGroupWithShortRowFollowedByLargeHero;
-(CGSize)minHeroItemsSize;
-(BOOL)parsePadLandscapeLayout;
-(CGSize)_cellSizeForNumberOfColumns:(long long)arg1 ;
-(BOOL)parseThreeColumnMediumHeroRowWithPano;
-(CGSize)estimatedSize;
-(void)_parseThreeColumnHeaderRowWithNumberOfItems:(long long)arg1 ;
-(void)_parseThreeColumnMediumHeroRowWithNumberOfItems:(long long)arg1 ;
-(long long)itemIndexForItem:(long long)arg1 inDirection:(unsigned long long)arg2 ;
-(CGSize)size;
-(CGSize)_estimatedSizeForSixColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(CGSize)estimatedSizeForPadPortrait;
-(void)beginRowWithNumberOfColumns:(long long)arg1 ;
-(BOOL)_parseFourColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(BOOL)parseThreeColumnShortRowWithPano;
-(void)_parseFourColumnShortRowWithNumberOfItems:(long long)arg1 ;
-(BOOL)parseThreeColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 ;
-(BOOL)parsePhoneLandscapeLayout;
-(BOOL)parseFourColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 ;
-(long long)numberOf:(unsigned long long)arg1 withinNextItems:(long long)arg2 ;
-(void)reorderNextItems:(long long)arg1 usingMapping:(/*^block*/id)arg2 ;
-(CGSize)buildingBlockSize;
-(BOOL)parseFourColumnGroupWithShortRowFollowedByLargeHero;
-(double)_buildingBlockAspectRatioForNumberOfColumns:(long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_parseThreeColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(BOOL)parsePhonePortraitLayout;
-(BOOL)parsePadPortraitLayout;
-(BOOL)_isShortRowNextFollowedByLargeHero;
-(PXCornerSpriteIndexes)cornerSpriteIndexes;
-(id)initWithMetrics:(id)arg1 ;
-(long long)presentedNumberOfColumnsAtRow:(long long)arg1 ;
-(CGSize)_estimatedSizeForColumns:(long long)arg1 headerRows:(long long)arg2 averageItemsPerBlock:(double)arg3 averageRowsPerBlock:(double)arg4 withOptions:(unsigned long long)arg5 ;
-(BOOL)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(unsigned long long)arg4 ;
-(CGSize)estimatedSizeForPhonePortrait;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(CGSize)headerItemSize;
-(BOOL)nextItems:(long long)arg1 areAll:(unsigned long long)arg2 ;
-(unsigned long long)attributesForNextItemAtIndex:(long long)arg1 ;
-(void)getLowestAspectRatio:(double*)arg1 highestAspectRatio:(double*)arg2 forNextItems:(long long)arg3 ;
-(long long)preferredRowTypeAfterRowWithType:(long long)arg1 ;
-(NSString *)diagnosticDescription;
-(double)score:(long long)arg1 forNextItemAtIndex:(long long)arg2 ;
-(BOOL)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 options:(unsigned long long)arg3 ;
-(SCD_Struct_PX29)presentedItemLocationForItemAtIndex:(long long)arg1 ;
-(void)_parseSixColumnHeroRowWithNumberOfItems:(long long)arg1 heroItemType:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(unsigned long long)arg4 ;
-(BOOL)_parseSixColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(BOOL)prepareNextItems:(long long)arg1 withLargeHeroIndex:(long long)arg2 ;
-(long long)numberOfItemsInSixColumnShortRowForNumberOfRemainingItems:(long long)arg1 ;
-(BOOL)nextItems:(long long)arg1 isAny:(unsigned long long)arg2 ;
-(void)sortNextItems:(long long)arg1 withItemAtIndex:(long long)arg2 having:(long long)arg3 ;
-(void)_parseSixColumnShortRowWithNumberOfItems:(long long)arg1 ;
-(CGSize)estimatedSizeForPhoneLandscape;
-(PXExploreParsingState *)localState;
-(void)setBuildingBlockColumnSpan:(long long)arg1 rowSpan:(long long)arg2 withNumberOfColumns:(long long)arg3 ;
-(long long)numberOfRemainingItems;
-(id)presentedItemsInRect:(CGRect)arg1 ;
-(long long)itemIndexForPresentedItemIndex:(long long)arg1 ;
-(void)_prepareIfNeeded;
-(void)invalidate;
-(void)moveNextItemAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(long long)numberOfItemsInSixColumnHeroRowForNumberOfRemainingItems:(long long)arg1 rowOptions:(unsigned long long*)arg2 ;
-(CGSize)_estimatedSizeForThreeColumnLayoutWithOptions:(unsigned long long)arg1 ;
-(long long)indexWithinNextItems:(long long)arg1 having:(long long)arg2 keyIndex:(long long)arg3 ;
-(BOOL)parseMacLayout;
-(long long)presentedNumberOfRows;
-(BOOL)isAcceptableLargeHeroNextItemAtIndex:(long long)arg1 ;
-(CGRect)presentedRectForItemAtIndex:(long long)arg1 ;
-(BOOL)parseThreeColumnGroupWithThreeItemsFollowedByOneItemAllowingLargeHeroAtEnd:(BOOL)arg1 ;
-(void)endRowWithType:(long long)arg1 ;
-(BOOL)parseThreeColumnGroupWithFiveItems;
-(BOOL)nextInputItems:(unsigned long long)arg1 ;
-(long long)numberOfItemsInFourColumnMediumHeroRowForNumberOfRemainingItems:(long long)arg1 ;
-(void)_addTwoItemsForThreeColumnRowPreferringTallVariant:(BOOL)arg1 ;
-(void)_addThreeItemsToSixColumnRowWithHeroItemType:(long long)arg1 options:(unsigned long long)arg2 rowType:(long long*)arg3 ;
-(id)presentedItemsBetweenItem:(long long)arg1 andItem:(long long)arg2 ;
-(void)dealloc;
@end

