/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingLayout.h>

@protocol PXRelatedTilingLayoutDelegate;
@class PXRelatedDataSource, PXRelatedSpec;

@interface PXRelatedTilingLayout : PXTilingLayout {

	unsigned long long _dataSourceIdentifier;
	long long _numberOfEntries;
	long long _numberOfColumns;
	long long _numberOfRows;
	UIEdgeInsets _margins;
	CGSize _itemSize;
	CGSize _interItemSpacing;
	CGRect _contentBounds;
	BOOL _isDataSourceTransient;
	SCD_Struct_PX24 _delegateRespondsTo;
	id<PXRelatedTilingLayoutDelegate> _delegate;
	PXRelatedDataSource* _dataSource;
	PXRelatedSpec* _spec;
	long long _maximumNumberOfRows;
	PXSimpleIndexPath _highlightedIndexPath;
	PXSimpleIndexPath _focusedIndexPath;

}

@property (assign,nonatomic,__weak) id<PXRelatedTilingLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXRelatedDataSource * dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXRelatedSpec * spec;                                           //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfRows;                                  //@synthesize maximumNumberOfRows=_maximumNumberOfRows - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath highlightedIndexPath;                         //@synthesize highlightedIndexPath=_highlightedIndexPath - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath focusedIndexPath;                             //@synthesize focusedIndexPath=_focusedIndexPath - In the implementation block
-(CGRect)contentBounds;
-(void)setSpec:(PXRelatedSpec *)arg1 ;
-(void)prepareLayout;
-(void)setReferenceSize:(CGSize)arg1 ;
-(id)init;
-(id<PXRelatedTilingLayoutDelegate>)delegate;
-(PXRelatedDataSource *)dataSource;
-(PXSimpleIndexPath)indexPathForTileIdentifier:(PXTileIdentifier)arg1 ;
-(long long)tileKindForTileIdentifier:(PXTileIdentifier)arg1 ;
-(PXRelatedSpec *)spec;
-(void)setDelegate:(id<PXRelatedTilingLayoutDelegate>)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)setDataSource:(PXRelatedDataSource *)arg1 ;
-(PXSimpleIndexPath)focusedIndexPath;
-(void)setMaximumNumberOfRows:(long long)arg1 ;
-(void)setFocusedIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForEntryAtPoint:(CGPoint)arg1 ;
-(PXTileIdentifier)tileIdentifierForTileKind:(long long)arg1 entryIndexPath:(PXSimpleIndexPath)arg2 ;
-(CGRect)rectOfInterestForEntryAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXTileIdentifier)_tileIdentifierForTileKind:(long long)arg1 entryIndex:(long long)arg2 ;
-(void)_enumerateEntryIndexesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)_rectForEntryAtIndex:(long long)arg1 ;
-(BOOL)_shouldShowActivityIndicator;
-(CGRect)_rectForActivityIndicator;
-(BOOL)_shouldShowEmptyPlaceholder;
-(CGRect)_rectForEmptyPlaceholder;
-(long long)maximumNumberOfRows;
-(void)setHighlightedIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)highlightedIndexPath;
@end

