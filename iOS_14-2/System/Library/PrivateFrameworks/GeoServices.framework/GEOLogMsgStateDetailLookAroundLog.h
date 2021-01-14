/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOLogMsgStateDetailLookAroundLog : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _durationSec;
	NSMutableArray* _lookAroundPipRecords;
	NSMutableArray* _lookAroundViewRecords;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _poisShown;
	struct {
		unsigned has_durationSec : 1;
		unsigned has_poisShown : 1;
		unsigned read_lookAroundPipRecords : 1;
		unsigned read_lookAroundViewRecords : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDurationSec; 
@property (assign,nonatomic) double durationSec; 
@property (assign,nonatomic) BOOL hasPoisShown; 
@property (assign,nonatomic) unsigned poisShown; 
@property (nonatomic,retain) NSMutableArray * lookAroundPipRecords; 
@property (nonatomic,retain) NSMutableArray * lookAroundViewRecords; 
+(Class)lookAroundPipRecordsType;
+(Class)lookAroundViewRecordsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(unsigned)poisShown;
-(id)jsonRepresentation;
-(double)durationSec;
-(void)setPoisShown:(unsigned)arg1 ;
-(void)addLookAroundPipRecords:(id)arg1 ;
-(void)addLookAroundViewRecords:(id)arg1 ;
-(unsigned long long)lookAroundPipRecordsCount;
-(void)clearLookAroundPipRecords;
-(BOOL)hasDurationSec;
-(id)lookAroundPipRecordsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lookAroundViewRecordsCount;
-(void)clearLookAroundViewRecords;
-(id)lookAroundViewRecordsAtIndex:(unsigned long long)arg1 ;
-(void)setHasDurationSec:(BOOL)arg1 ;
-(void)setHasPoisShown:(BOOL)arg1 ;
-(BOOL)hasPoisShown;
-(NSMutableArray *)lookAroundPipRecords;
-(void)setLookAroundPipRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lookAroundViewRecords;
-(void)setLookAroundViewRecords:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setDurationSec:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

