/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	struct {
		unsigned read_bookedTableSessionId : 1;
		unsigned read_bookedTables : 1;
		unsigned wrote_bookedTableSessionId : 1;
		unsigned wrote_bookedTables : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBookedTableSessionId; 
@property (nonatomic,retain) NSString * bookedTableSessionId; 
@property (nonatomic,retain) NSMutableArray * bookedTables; 
+(BOOL)isValid:(id)arg1 ;
+(Class)bookedTableType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readBookedTableSessionId;
-(void)_readBookedTables;
-(void)_addNoFlagsBookedTable:(id)arg1 ;
-(NSString *)bookedTableSessionId;
-(void)setBookedTableSessionId:(NSString *)arg1 ;
-(unsigned long long)bookedTablesCount;
-(void)clearBookedTables;
-(id)bookedTableAtIndex:(unsigned long long)arg1 ;
-(void)addBookedTable:(id)arg1 ;
-(BOOL)hasBookedTableSessionId;
-(NSMutableArray *)bookedTables;
-(void)setBookedTables:(NSMutableArray *)arg1 ;
@end

