/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface VCPProtoMovieFaceprintResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	unsigned _faceID;
	NSData* _faceprintBlob;

}

@property (assign,nonatomic) unsigned faceID;                     //@synthesize faceID=_faceID - In the implementation block
@property (nonatomic,retain) NSData * faceprintBlob;              //@synthesize faceprintBlob=_faceprintBlob - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)faceID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(id)exportToLegacyDictionary;
-(void)setFaceprintBlob:(NSData *)arg1 ;
-(NSData *)faceprintBlob;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFaceID:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

