/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSMutableSet, NSMutableDictionary, NSSet;

@interface PUTilingLayoutInvalidationContext : NSObject {

	NSMutableSet* _invalidatedTileKinds;
	BOOL _invalidatedAllTiles;
	BOOL _invalidatedContentBounds;
	BOOL _invalidatedAnyTile;
	NSMutableDictionary* __invalidatedIndexPathsByTileKind;

}

@property (nonatomic,readonly) NSMutableDictionary * _invalidatedIndexPathsByTileKind;              //@synthesize _invalidatedIndexPathsByTileKind=__invalidatedIndexPathsByTileKind - In the implementation block
@property (assign,nonatomic) BOOL invalidatedAllTiles;                                              //@synthesize invalidatedAllTiles=_invalidatedAllTiles - In the implementation block
@property (assign,nonatomic) BOOL invalidatedAnyTile;                                               //@synthesize invalidatedAnyTile=_invalidatedAnyTile - In the implementation block
@property (nonatomic,readonly) NSSet * invalidatedTileKinds;                                        //@synthesize invalidatedTileKinds=_invalidatedTileKinds - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedContentBounds;                                       //@synthesize invalidatedContentBounds=_invalidatedContentBounds - In the implementation block
-(id)init;
-(void)setInvalidatedAllTiles:(BOOL)arg1 ;
-(void)invalidateAllTilesWithKind:(id)arg1 ;
-(void)invalidateAllTiles;
-(void)enumerateInvalidatedTilesUsingBlock:(/*^block*/id)arg1 ;
-(void)invalidateTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(void)setInvalidatedAnyTile:(BOOL)arg1 ;
-(BOOL)invalidatedAllTiles;
-(void)invalidateContentBounds;
-(NSSet *)invalidatedTileKinds;
-(NSMutableDictionary *)_invalidatedIndexPathsByTileKind;
-(BOOL)invalidatedAnyTile;
-(BOOL)invalidatedContentBounds;
@end

