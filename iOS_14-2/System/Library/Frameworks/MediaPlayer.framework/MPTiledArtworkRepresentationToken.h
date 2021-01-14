/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol NSCopying;
@class NSArray;

@interface MPTiledArtworkRepresentationToken : NSObject {

	id<NSCopying> _revisionIdentifier;
	NSArray* _tileArtworkVisualIdenticalityIdentifiers;

}

@property (nonatomic,copy) id<NSCopying> revisionIdentifier;                                //@synthesize revisionIdentifier=_revisionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * tileArtworkVisualIdenticalityIdentifiers;              //@synthesize tileArtworkVisualIdenticalityIdentifiers=_tileArtworkVisualIdenticalityIdentifiers - In the implementation block
-(NSArray *)tileArtworkVisualIdenticalityIdentifiers;
-(void)setTileArtworkVisualIdenticalityIdentifiers:(NSArray *)arg1 ;
-(id<NSCopying>)revisionIdentifier;
-(void)setRevisionIdentifier:(id<NSCopying>)arg1 ;
@end

