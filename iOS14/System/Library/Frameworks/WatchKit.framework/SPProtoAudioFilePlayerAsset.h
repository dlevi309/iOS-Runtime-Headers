/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoObjectMessage, SPProtoAudioFilePlayerAssetUpdateMetaData;

@interface SPProtoAudioFilePlayerAsset : PBCodable <NSCopying> {

	SPProtoObjectMessage* _destroy;
	SPProtoAudioFilePlayerAssetUpdateMetaData* _upsertWithMetaData;

}

@property (nonatomic,readonly) BOOL hasUpsertWithMetaData; 
@property (nonatomic,retain) SPProtoAudioFilePlayerAssetUpdateMetaData * upsertWithMetaData;              //@synthesize upsertWithMetaData=_upsertWithMetaData - In the implementation block
@property (nonatomic,readonly) BOOL hasDestroy; 
@property (nonatomic,retain) SPProtoObjectMessage * destroy;                                              //@synthesize destroy=_destroy - In the implementation block
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
-(BOOL)hasDestroy;
-(id)sockPuppetMessage;
-(void)setUpsertWithMetaData:(SPProtoAudioFilePlayerAssetUpdateMetaData *)arg1 ;
-(BOOL)hasUpsertWithMetaData;
-(SPProtoAudioFilePlayerAssetUpdateMetaData *)upsertWithMetaData;
@end

