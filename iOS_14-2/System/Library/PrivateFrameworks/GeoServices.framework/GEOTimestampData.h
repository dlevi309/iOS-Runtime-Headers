/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatTokenTimeStampValue.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTimeZone, NSString, PBDataReader, PBUnknownFields;

@interface GEOTimestampData : PBCodable <GEOServerFormatTokenTimeStampValue, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _formatPattern;
	NSString* _timezone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _timestampVal;
	BOOL _displayTimezone;
	struct {
		unsigned has_timestampVal : 1;
		unsigned has_displayTimezone : 1;
		unsigned read_unknownFields : 1;
		unsigned read_formatPattern : 1;
		unsigned read_timezone : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) double timeStamp; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * formatPattern; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestampVal; 
@property (assign,nonatomic) unsigned timestampVal; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) NSString * timezone; 
@property (assign,nonatomic) BOOL hasDisplayTimezone; 
@property (assign,nonatomic) BOOL displayTimezone; 
@property (nonatomic,readonly) BOOL hasFormatPattern; 
@property (nonatomic,retain) NSString * formatPattern; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)timezone;
-(PBUnknownFields *)unknownFields;
-(NSTimeZone *)timeZone;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)formatPattern;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(double)timeStamp;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)hasTimezone;
-(void)setTimestampVal:(unsigned)arg1 ;
-(void)setDisplayTimezone:(BOOL)arg1 ;
-(void)setFormatPattern:(NSString *)arg1 ;
-(unsigned)timestampVal;
-(void)setHasTimestampVal:(BOOL)arg1 ;
-(BOOL)hasTimestampVal;
-(BOOL)displayTimezone;
-(void)setHasDisplayTimezone:(BOOL)arg1 ;
-(BOOL)hasDisplayTimezone;
-(BOOL)hasFormatPattern;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)displayTimeZone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimezone:(NSString *)arg1 ;
@end

