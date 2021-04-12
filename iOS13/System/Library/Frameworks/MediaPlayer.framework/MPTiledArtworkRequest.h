/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSArray;

@interface MPTiledArtworkRequest : NSObject <NSCopying> {

	os_unfair_lock_s _cacheLock;
	NSArray* _artworkCatalogsCache;
	long long _artworkCatalogsCacheCount;
	BOOL _allowsSynchronousArtworkCatalogsBlockExecution;
	/*^block*/id _artworkCatalogsBlock;
	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	double _tileSpacing;
	id<NSCopying> _entityIdentifier;
	id<NSCopying> _namespaceIdentifier;
	id<NSCopying> _revisionIdentifier;

}

@property (nonatomic,copy) id artworkCatalogsBlock;                                            //@synthesize artworkCatalogsBlock=_artworkCatalogsBlock - In the implementation block
@property (assign,nonatomic) BOOL allowsSynchronousArtworkCatalogsBlockExecution;              //@synthesize allowsSynchronousArtworkCatalogsBlockExecution=_allowsSynchronousArtworkCatalogsBlockExecution - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns;                               //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRows;                                  //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) double tileSpacing;                                               //@synthesize tileSpacing=_tileSpacing - In the implementation block
@property (nonatomic,copy) id<NSCopying> entityIdentifier;                                     //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,copy) id<NSCopying> namespaceIdentifier;                                  //@synthesize namespaceIdentifier=_namespaceIdentifier - In the implementation block
@property (nonatomic,copy) id<NSCopying> revisionIdentifier;                                   //@synthesize revisionIdentifier=_revisionIdentifier - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfColumns;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRows;
-(void)setRevisionIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)revisionIdentifier;
-(void)setEntityIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)entityIdentifier;
-(id)artworkCatalogsWithCount:(unsigned long long)arg1 ;
-(id)existingArtworkCatalogsWithCount:(long long)arg1 ;
-(BOOL)hasExistingArtworkCatalogsWithCount:(long long)arg1 ;
-(id)artworkCatalogsBlock;
-(void)setArtworkCatalogsBlock:(id)arg1 ;
-(BOOL)allowsSynchronousArtworkCatalogsBlockExecution;
-(void)setAllowsSynchronousArtworkCatalogsBlockExecution:(BOOL)arg1 ;
-(double)tileSpacing;
-(void)setTileSpacing:(double)arg1 ;
-(id<NSCopying>)namespaceIdentifier;
-(void)setNamespaceIdentifier:(id<NSCopying>)arg1 ;
@end

