/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setRevisionIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)revisionIdentifier;
-(NSArray *)tileArtworkVisualIdenticalityIdentifiers;
-(void)setTileArtworkVisualIdenticalityIdentifiers:(NSArray *)arg1 ;
@end

