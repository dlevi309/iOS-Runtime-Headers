/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(void)writeTo:(id)arg1 ;
-(CKDPRecordType *)recordType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(void)setRecordType:(CKDPRecordType *)arg1 ;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasRecordIdentifier;
-(CKDPRecordIdentifier *)recordIdentifier;
-(CKDPRecord *)record;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(BOOL)hasRecord;
-(BOOL)hasRecordType;
@end

