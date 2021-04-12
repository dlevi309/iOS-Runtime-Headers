/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPRecord *)record;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(BOOL)hasRecord;
-(void)setClientVersionETagMatch:(BOOL)arg1 ;
-(void)setHasClientVersionETagMatch:(BOOL)arg1 ;
-(BOOL)hasClientVersionETagMatch;
-(BOOL)clientVersionETagMatch;
@end

