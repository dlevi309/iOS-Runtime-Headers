/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoObjectMessage, SPProtoAudioFilePlayerItemSetCurrentTime, SPProtoAudioFilePlayerStatus, SPProtoAudioFilePlayerUpdateContainedIdentifier;

@interface SPProtoAudioFilePlayerItem : PBCodable <NSCopying> {

	SPProtoObjectMessage* _destroy;
	SPProtoObjectMessage* _getCurrentTime;
	SPProtoObjectMessage* _notifyDidPlayToEndTime;
	SPProtoObjectMessage* _notifyFailedToPlayToEndTime;
	SPProtoObjectMessage* _notifyTimeJumped;
	SPProtoAudioFilePlayerItemSetCurrentTime* _setItemCurrentTime;
	SPProtoAudioFilePlayerStatus* _setStatus;
	SPProtoAudioFilePlayerUpdateContainedIdentifier* _upsertWithAsset;

}

@property (nonatomic,readonly) BOOL hasUpsertWithAsset; 
@property (nonatomic,retain) SPProtoAudioFilePlayerUpdateContainedIdentifier * upsertWithAsset;              //@synthesize upsertWithAsset=_upsertWithAsset - In the implementation block
@property (nonatomic,readonly) BOOL hasDestroy; 
@property (nonatomic,retain) SPProtoObjectMessage * destroy;                                                 //@synthesize destroy=_destroy - In the implementation block
@property (nonatomic,readonly) BOOL hasSetStatus; 
@property (nonatomic,retain) SPProtoAudioFilePlayerStatus * setStatus;                                       //@synthesize setStatus=_setStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasGetCurrentTime; 
@property (nonatomic,retain) SPProtoObjectMessage * getCurrentTime;                                          //@synthesize getCurrentTime=_getCurrentTime - In the implementation block
@property (nonatomic,readonly) BOOL hasNotifyTimeJumped; 
@property (nonatomic,retain) SPProtoObjectMessage * notifyTimeJumped;                                        //@synthesize notifyTimeJumped=_notifyTimeJumped - In the implementation block
@property (nonatomic,readonly) BOOL hasNotifyDidPlayToEndTime; 
@property (nonatomic,retain) SPProtoObjectMessage * notifyDidPlayToEndTime;                                  //@synthesize notifyDidPlayToEndTime=_notifyDidPlayToEndTime - In the implementation block
@property (nonatomic,readonly) BOOL hasNotifyFailedToPlayToEndTime; 
@property (nonatomic,retain) SPProtoObjectMessage * notifyFailedToPlayToEndTime;                             //@synthesize notifyFailedToPlayToEndTime=_notifyFailedToPlayToEndTime - In the implementation block
@property (nonatomic,readonly) BOOL hasSetItemCurrentTime; 
@property (nonatomic,retain) SPProtoAudioFilePlayerItemSetCurrentTime * setItemCurrentTime;                  //@synthesize setItemCurrentTime=_setItemCurrentTime - In the implementation block
-(id)dictionaryRepresentation;
-(SPProtoObjectMessage *)destroy;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDestroy:(SPProtoObjectMessage *)arg1 ;
-(void)setSetStatus:(SPProtoAudioFilePlayerStatus *)arg1 ;
-(BOOL)hasDestroy;
-(BOOL)hasSetStatus;
-(SPProtoAudioFilePlayerStatus *)setStatus;
-(id)sockPuppetMessage;
-(void)setGetCurrentTime:(SPProtoObjectMessage *)arg1 ;
-(void)setNotifyTimeJumped:(SPProtoObjectMessage *)arg1 ;
-(void)setNotifyDidPlayToEndTime:(SPProtoObjectMessage *)arg1 ;
-(void)setNotifyFailedToPlayToEndTime:(SPProtoObjectMessage *)arg1 ;
-(void)setUpsertWithAsset:(SPProtoAudioFilePlayerUpdateContainedIdentifier *)arg1 ;
-(void)setSetItemCurrentTime:(SPProtoAudioFilePlayerItemSetCurrentTime *)arg1 ;
-(BOOL)hasUpsertWithAsset;
-(BOOL)hasGetCurrentTime;
-(BOOL)hasNotifyTimeJumped;
-(BOOL)hasNotifyDidPlayToEndTime;
-(BOOL)hasNotifyFailedToPlayToEndTime;
-(BOOL)hasSetItemCurrentTime;
-(SPProtoAudioFilePlayerUpdateContainedIdentifier *)upsertWithAsset;
-(SPProtoObjectMessage *)getCurrentTime;
-(SPProtoObjectMessage *)notifyTimeJumped;
-(SPProtoObjectMessage *)notifyDidPlayToEndTime;
-(SPProtoObjectMessage *)notifyFailedToPlayToEndTime;
-(SPProtoAudioFilePlayerItemSetCurrentTime *)setItemCurrentTime;
@end

