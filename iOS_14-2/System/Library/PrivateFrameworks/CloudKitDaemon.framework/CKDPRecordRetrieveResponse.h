/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecord;

@interface CKDPRecordRetrieveResponse : PBCodable <NSCopying> {

	CKDPRecord* _record;
	BOOL _clientVersionETagMatch;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) CKDPRecord * record;                         //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) BOOL hasClientVersionETagMatch; 
@property (assign,nonatomic) BOOL clientVersionETagMatch;                 //@synthesize clientVersionETagMatch=_clientVersionETagMatch - In the implementation block
-(CKDPRecord *)record;
-(id)dictionaryRepresentation;
-(BOOL)clientVersionETagMatch;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setClientVersionETagMatch:(BOOL)arg1 ;
-(void)setHasClientVersionETagMatch:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasRecord;
-(BOOL)hasClientVersionETagMatch;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

