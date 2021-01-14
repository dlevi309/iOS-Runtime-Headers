/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPRecord, CKDPRecordIdentifier, CKDPRecordType;

@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable <NSCopying> {

	NSString* _etag;
	CKDPRecord* _record;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPRecordType* _recordType;
	int _type;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                      //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordType; 
@property (nonatomic,retain) CKDPRecordType * recordType;                          //@synthesize recordType=_recordType - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) CKDPRecord * record;                                  //@synthesize record=_record - In the implementation block
-(CKDPRecord *)record;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(CKDPRecordIdentifier *)recordIdentifier;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(NSString *)etag;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(BOOL)hasRecordType;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(CKDPRecordType *)recordType;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)hasRecordIdentifier;
-(id)description;
-(void)setRecordType:(CKDPRecordType *)arg1 ;
-(BOOL)hasRecord;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
@end

