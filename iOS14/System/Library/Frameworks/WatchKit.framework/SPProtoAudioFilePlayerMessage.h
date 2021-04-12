/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setAsset:(SPProtoAudioFilePlayerAsset *)arg1 ;
-(SPProtoAudioFilePlayerAsset *)asset;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setPlayerItem:(SPProtoAudioFilePlayerItem *)arg1 ;
-(SPProtoAudioFileQueuePlayer *)queuePlayer;
-(unsigned long long)hash;
-(void)setQueuePlayer:(SPProtoAudioFileQueuePlayer *)arg1 ;
-(BOOL)hasAsset;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SPProtoAudioFilePlayerItem *)playerItem;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPlayerItem;
-(BOOL)hasQueuePlayer;
@end

