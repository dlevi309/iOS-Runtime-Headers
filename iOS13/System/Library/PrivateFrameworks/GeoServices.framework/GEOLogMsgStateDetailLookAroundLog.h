/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_durationSec : 1;
		unsigned wrote_lookAroundPipRecords : 1;
		unsigned wrote_lookAroundViewRecords : 1;
		unsigned wrote_poisShown : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDurationSec; 
@property (assign,nonatomic) double durationSec; 
@property (assign,nonatomic) BOOL hasPoisShown; 
@property (assign,nonatomic) unsigned poisShown; 
@property (nonatomic,retain) NSMutableArray * lookAroundPipRecords; 
@property (nonatomic,retain) NSMutableArray * lookAroundViewRecords; 
+(BOOL)isValid:(id)arg1 ;
+(Class)lookAroundPipRecordsType;
+(Class)lookAroundViewRecordsType;
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
-(void)_readLookAroundPipRecords;
-(void)_addNoFlagsLookAroundPipRecords:(id)arg1 ;
-(void)_readLookAroundViewRecords;
-(void)_addNoFlagsLookAroundViewRecords:(id)arg1 ;
-(unsigned long long)lookAroundPipRecordsCount;
-(void)clearLookAroundPipRecords;
-(id)lookAroundPipRecordsAtIndex:(unsigned long long)arg1 ;
-(void)addLookAroundPipRecords:(id)arg1 ;
-(unsigned long long)lookAroundViewRecordsCount;
-(void)clearLookAroundViewRecords;
-(id)lookAroundViewRecordsAtIndex:(unsigned long long)arg1 ;
-(void)addLookAroundViewRecords:(id)arg1 ;
-(double)durationSec;
-(void)setDurationSec:(double)arg1 ;
-(void)setHasDurationSec:(BOOL)arg1 ;
-(BOOL)hasDurationSec;
-(unsigned)poisShown;
-(void)setPoisShown:(unsigned)arg1 ;
-(void)setHasPoisShown:(BOOL)arg1 ;
-(BOOL)hasPoisShown;
-(NSMutableArray *)lookAroundPipRecords;
-(void)setLookAroundPipRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lookAroundViewRecords;
-(void)setLookAroundViewRecords:(NSMutableArray *)arg1 ;
@end

