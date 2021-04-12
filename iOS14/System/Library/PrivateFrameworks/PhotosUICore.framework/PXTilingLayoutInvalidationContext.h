/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSMutableIndexSet, NSString, NSIndexSet;

@interface PXTilingLayoutInvalidationContext : NSObject {

	NSMutableArray* _invalidatedTileIdentifiers;
	NSMutableIndexSet* _invalidatedTileGroups;
	BOOL _invalidatedAllTiles;
	BOOL _invalidatedContentBounds;
	BOOL _invalidatedScrollBounds;
	BOOL _invalidatedVisibleRect;
	BOOL _invalidatedScrollInfo;
	NSString* _tag;

}

@property (nonatomic,readonly) NSIndexSet * invalidatedTileGroups; 
@property (nonatomic,readonly) BOOL invalidatedAllTiles;                        //@synthesize invalidatedAllTiles=_invalidatedAllTiles - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedContentBounds;                   //@synthesize invalidatedContentBounds=_invalidatedContentBounds - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedScrollBounds;                    //@synthesize invalidatedScrollBounds=_invalidatedScrollBounds - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedVisibleRect;                     //@synthesize invalidatedVisibleRect=_invalidatedVisibleRect - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedScrollInfo;                      //@synthesize invalidatedScrollInfo=_invalidatedScrollInfo - In the implementation block
@property (nonatomic,copy) NSString * tag;                                      //@synthesize tag=_tag - In the implementation block
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(void)invalidateAllTiles;
-(id)description;
-(void)invalidateTilesInGroup:(unsigned long long)arg1 ;
-(void)invalidateTileWithIdentifier:(PXTileIdentifier)arg1 ;
-(void)enumerateInvalidatedTileIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)invalidateScrollBounds;
-(void)invalidateVisibleRect;
-(void)invalidateScrollInfo;
-(NSIndexSet *)invalidatedTileGroups;
-(BOOL)invalidatedScrollBounds;
-(BOOL)invalidatedVisibleRect;
-(BOOL)invalidatedScrollInfo;
-(BOOL)invalidatedAllTiles;
-(void)invalidateContentBounds;
-(BOOL)invalidatedContentBounds;
-(void)invalidateEverything;
@end

