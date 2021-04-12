/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPZone, NSMutableArray, CKDPShareMetadata, CKDPRecord;

@interface CKDPRecordResolveTokenResponse : PBCodable <NSCopying> {

	NSString* _container;
	int _containerEnvironment;
	CKDPZone* _recordZone;
	NSMutableArray* _records;
	CKDPShareMetadata* _shareMetadata;
	CKDPRecord* _shareRecord;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasContainer; 
@property (nonatomic,retain) NSString * container;                           //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL hasContainerEnvironment; 
@property (assign,nonatomic) int containerEnvironment;                       //@synthesize containerEnvironment=_containerEnvironment - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                       //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) BOOL hasShareRecord; 
@property (nonatomic,retain) CKDPRecord * shareRecord;                       //@synthesize shareRecord=_shareRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasShareMetadata; 
@property (nonatomic,retain) CKDPShareMetadata * shareMetadata;              //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordZone; 
@property (nonatomic,retain) CKDPZone * recordZone;                          //@synthesize recordZone=_recordZone - In the implementation block
+(Class)recordType;
-(id)dictionaryRepresentation;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)clearRecords;
-(NSMutableArray *)records;
-(unsigned long long)recordsCount;
-(BOOL)hasContainer;
-(void)mergeFrom:(id)arg1 ;
-(void)setShareMetadata:(CKDPShareMetadata *)arg1 ;
-(CKDPZone *)recordZone;
-(void)setContainer:(NSString *)arg1 ;
-(BOOL)hasRecordZone;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addRecord:(id)arg1 ;
-(CKDPShareMetadata *)shareMetadata;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)recordAtIndex:(unsigned long long)arg1 ;
-(NSString *)container;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRecordZone:(CKDPZone *)arg1 ;
-(void)setShareRecord:(CKDPRecord *)arg1 ;
-(int)containerEnvironment;
-(void)setContainerEnvironment:(int)arg1 ;
-(void)setHasContainerEnvironment:(BOOL)arg1 ;
-(BOOL)hasContainerEnvironment;
-(id)containerEnvironmentAsString:(int)arg1 ;
-(int)StringAsContainerEnvironment:(id)arg1 ;
-(BOOL)hasShareRecord;
-(BOOL)hasShareMetadata;
-(CKDPRecord *)shareRecord;
@end

