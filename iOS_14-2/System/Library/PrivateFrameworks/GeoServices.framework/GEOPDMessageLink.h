/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOTimezone;

@interface GEOPDMessageLink : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _hoursOfOperations;
	NSString* _messageId;
	NSString* _messageUrl;
	NSString* _navBackgroundColor;
	NSString* _navTintColor;
	GEOTimezone* _timezone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _responseTime;
	BOOL _isVerified;
	struct {
		unsigned has_responseTime : 1;
		unsigned has_isVerified : 1;
		unsigned read_unknownFields : 1;
		unsigned read_hoursOfOperations : 1;
		unsigned read_messageId : 1;
		unsigned read_messageUrl : 1;
		unsigned read_navBackgroundColor : 1;
		unsigned read_navTintColor : 1;
		unsigned read_timezone : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId; 
@property (nonatomic,readonly) BOOL hasMessageUrl; 
@property (nonatomic,retain) NSString * messageUrl; 
@property (assign,nonatomic) BOOL hasResponseTime; 
@property (assign,nonatomic) int responseTime; 
@property (nonatomic,retain) NSMutableArray * hoursOfOperations; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone; 
@property (assign,nonatomic) BOOL hasIsVerified; 
@property (assign,nonatomic) BOOL isVerified; 
@property (nonatomic,readonly) BOOL hasNavBackgroundColor; 
@property (nonatomic,retain) NSString * navBackgroundColor; 
@property (nonatomic,readonly) BOOL hasNavTintColor; 
@property (nonatomic,retain) NSString * navTintColor; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)hoursOfOperationType;
+(BOOL)isValid:(id)arg1 ;
+(id)messageLinkForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOTimezone *)timezone;
-(PBUnknownFields *)unknownFields;
-(void)setMessageId:(NSString *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)isVerified;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)navTintColor;
-(NSString *)navBackgroundColor;
-(void)setMessageUrl:(NSString *)arg1 ;
-(void)addHoursOfOperation:(id)arg1 ;
-(void)setIsVerified:(BOOL)arg1 ;
-(void)setNavTintColor:(NSString *)arg1 ;
-(void)setNavBackgroundColor:(NSString *)arg1 ;
-(unsigned long long)hoursOfOperationsCount;
-(void)clearHoursOfOperations;
-(id)initWithData:(id)arg1 ;
-(id)hoursOfOperationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMessageId;
-(BOOL)hasMessageUrl;
-(id)responseTimeAsString:(int)arg1 ;
-(BOOL)hasIsVerified;
-(int)StringAsResponseTime:(id)arg1 ;
-(NSMutableArray *)hoursOfOperations;
-(void)setHoursOfOperations:(NSMutableArray *)arg1 ;
-(void)setHasIsVerified:(BOOL)arg1 ;
-(BOOL)hasNavBackgroundColor;
-(BOOL)hasNavTintColor;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasTimezone;
-(unsigned long long)hash;
-(int)responseTime;
-(void)setResponseTime:(int)arg1 ;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(BOOL)hasResponseTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(NSString *)messageUrl;
@end

