/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecord;

@interface CKDPOplockFailure : PBCodable <NSCopying> {

	CKDPRecord* _recordForOplockFailure;

}

@property (nonatomic,readonly) BOOL hasRecordForOplockFailure; 
@property (nonatomic,retain) CKDPRecord * recordForOplockFailure;              //@synthesize recordForOplockFailure=_recordForOplockFailure - In the implementation block
-(id)dictionaryRepresentation;
-(void)setRecordForOplockFailure:(CKDPRecord *)arg1 ;
-(BOOL)hasRecordForOplockFailure;
-(CKDPRecord *)recordForOplockFailure;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

