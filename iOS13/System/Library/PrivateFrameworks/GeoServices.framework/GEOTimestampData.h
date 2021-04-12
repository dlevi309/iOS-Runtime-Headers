/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_formatPattern : 1;
		unsigned wrote_timezone : 1;
		unsigned wrote_timestampVal : 1;
		unsigned wrote_displayTimezone : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double timeStamp; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * formatPattern; 
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)timezone;
-(double)timeStamp;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTimezone;
-(void)setTimezone:(NSString *)arg1 ;
-(BOOL)hasTimezone;
-(NSString *)formatPattern;
-(void)setTimestampVal:(unsigned)arg1 ;
-(void)setFormatPattern:(NSString *)arg1 ;
-(void)_readFormatPattern;
-(unsigned)timestampVal;
-(void)setHasTimestampVal:(BOOL)arg1 ;
-(BOOL)hasTimestampVal;
-(BOOL)displayTimezone;
-(void)setDisplayTimezone:(BOOL)arg1 ;
-(void)setHasDisplayTimezone:(BOOL)arg1 ;
-(BOOL)hasDisplayTimezone;
-(BOOL)hasFormatPattern;
-(BOOL)displayTimeZone;
@end

