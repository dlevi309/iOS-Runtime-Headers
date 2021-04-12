/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoAudioFilePlayerAsset, SPProtoAudioFilePlayerItem, SPProtoAudioFileQueuePlayer;

@interface SPProtoAudioFilePlayerMessage : PBCodable <NSCopying> {

	SPProtoAudioFilePlayerAsset* _asset;
	SPProtoAudioFilePlayerItem* _playerItem;
	SPProtoAudioFileQueuePlayer* _queuePlayer;

}

@property (nonatomic,readonly) BOOL hasAsset; 
@property (nonatomic,retain) SPProtoAudioFilePlayerAsset * asset;                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerItem; 
@property (nonatomic,retain) SPProtoAudioFilePlayerItem * playerItem;                //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,readonly) BOOL hasQueuePlayer; 
@property (nonatomic,retain) SPProtoAudioFileQueuePlayer * queuePlayer;              //@synthesize queuePlayer=_queuePlayer - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SPProtoAudioFilePlayerAsset *)asset;
-(void)setAsset:(SPProtoAudioFilePlayerAsset *)arg1 ;
-(SPProtoAudioFilePlayerItem *)playerItem;
-(void)setPlayerItem:(SPProtoAudioFilePlayerItem *)arg1 ;
-(SPProtoAudioFileQueuePlayer *)queuePlayer;
-(void)setQueuePlayer:(SPProtoAudioFileQueuePlayer *)arg1 ;
-(BOOL)hasAsset;
-(BOOL)hasPlayerItem;
-(BOOL)hasQueuePlayer;
@end

