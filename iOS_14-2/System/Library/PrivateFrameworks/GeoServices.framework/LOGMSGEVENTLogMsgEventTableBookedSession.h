/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface LOGMSGEVENTLogMsgEventTableBookedSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _bookedTableSessionId;
	NSMutableArray* _bookedTables;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasBookedTableSessionId; 
@property (nonatomic,retain) NSString * bookedTableSessionId; 
@property (nonatomic,retain) NSMutableArray * bookedTables; 
+(Class)bookedTableType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bookedTableSessionId;
-(void)setBookedTableSessionId:(NSString *)arg1 ;
-(void)addBookedTable:(id)arg1 ;
-(unsigned long long)bookedTablesCount;
-(void)clearBookedTables;
-(id)bookedTableAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBookedTableSessionId;
-(NSMutableArray *)bookedTables;
-(void)setBookedTables:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
