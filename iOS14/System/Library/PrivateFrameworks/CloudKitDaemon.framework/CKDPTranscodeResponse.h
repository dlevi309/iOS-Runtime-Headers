/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKCodeRecordTransport;

@interface CKDPTranscodeResponse : PBCodable <NSCopying> {

	CKCodeRecordTransport* _record;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) CKCodeRecordTransport * record;              //@synthesize record=_record - In the implementation block
-(CKCodeRecordTransport *)record;
-(id)dictionaryRepresentation;
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
@end

