/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SPProtoObjectMessage *)destroy;
-(void)setDestroy:(SPProtoObjectMessage *)arg1 ;
-(BOOL)hasDestroy;
-(id)sockPuppetMessage;
-(void)setUpsertWithMetaData:(SPProtoAudioFilePlayerAssetUpdateMetaData *)arg1 ;
-(BOOL)hasUpsertWithMetaData;
-(SPProtoAudioFilePlayerAssetUpdateMetaData *)upsertWithMetaData;
@end

