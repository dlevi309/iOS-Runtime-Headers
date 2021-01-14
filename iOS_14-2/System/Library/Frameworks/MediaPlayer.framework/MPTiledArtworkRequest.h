/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(id)init;
-(id<NSCopying>)revisionIdentifier;
-(unsigned long long)numberOfRows;
-(BOOL)allowsSynchronousArtworkCatalogsBlockExecution;
-(void)setAllowsSynchronousArtworkCatalogsBlockExecution:(BOOL)arg1 ;
-(unsigned long long)numberOfColumns;
-(id)existingArtworkCatalogsWithCount:(long long)arg1 ;
-(id)artworkCatalogsWithCount:(unsigned long long)arg1 ;
-(void)setTileSpacing:(double)arg1 ;
-(void)setArtworkCatalogsBlock:(id)arg1 ;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(void)setEntityIdentifier:(id<NSCopying>)arg1 ;
-(id)artworkCatalogsBlock;
-(double)tileSpacing;
-(BOOL)hasExistingArtworkCatalogsWithCount:(long long)arg1 ;
-(id<NSCopying>)entityIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNamespaceIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)namespaceIdentifier;
-(void)setRevisionIdentifier:(id<NSCopying>)arg1 ;
@end

