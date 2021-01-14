/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKCodeRecordTransport;

@interface CKDPTranscodeRequest : PBRequest <NSCopying> {

	NSData* _constructedAssetDownloadParameters;
	CKCodeRecordTransport* _record;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) CKCodeRecordTransport * record;                            //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) BOOL hasConstructedAssetDownloadParameters; 
@property (nonatomic,retain) NSData * constructedAssetDownloadParameters;               //@synthesize constructedAssetDownloadParameters=_constructedAssetDownloadParameters - In the implementation block
-(CKCodeRecordTransport *)record;
-(id)dictionaryRepresentation;
-(NSData *)constructedAssetDownloadParameters;
-(void)setConstructedAssetDownloadParameters:(NSData *)arg1 ;
-(void)setRecord:(CKCodeRecordTransport *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasRecord;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasConstructedAssetDownloadParameters;
@end

