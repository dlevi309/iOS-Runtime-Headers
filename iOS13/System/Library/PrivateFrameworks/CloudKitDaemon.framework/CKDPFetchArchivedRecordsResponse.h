/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(NSMutableArray *)records;
-(void)addRecord:(id)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearRecords;
-(id)recordAtIndex:(unsigned long long)arg1 ;
-(void)setArchiveContinuationToken:(NSData *)arg1 ;
-(BOOL)hasArchiveContinuationToken;
-(NSData *)archiveContinuationToken;
@end

