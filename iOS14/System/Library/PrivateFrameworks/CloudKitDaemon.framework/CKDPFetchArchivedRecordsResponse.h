/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface CKDPFetchArchivedRecordsResponse : PBCodable <NSCopying> {

	NSData* _archiveContinuationToken;
	NSMutableArray* _records;
	int _status;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,retain) NSMutableArray * records;                        //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) BOOL hasArchiveContinuationToken; 
@property (nonatomic,retain) NSData * archiveContinuationToken;               //@synthesize archiveContinuationToken=_archiveContinuationToken - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                      //@synthesize status=_status - In the implementation block
+(Class)recordType;
-(id)dictionaryRepresentation;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)clearRecords;
-(NSMutableArray *)records;
-(unsigned long long)recordsCount;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addRecord:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)recordAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)setArchiveContinuationToken:(NSData *)arg1 ;
-(BOOL)hasArchiveContinuationToken;
-(NSData *)archiveContinuationToken;
@end

