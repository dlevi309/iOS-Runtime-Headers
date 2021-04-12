/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_hoursOfOperations : 1;
		unsigned wrote_messageId : 1;
		unsigned wrote_messageUrl : 1;
		unsigned wrote_navBackgroundColor : 1;
		unsigned wrote_navTintColor : 1;
		unsigned wrote_timezone : 1;
		unsigned wrote_responseTime : 1;
		unsigned wrote_isVerified : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)hoursOfOperationType;
+(id)messageLinkForPlaceData:(id)arg1 ;
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
-(GEOTimezone *)timezone;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readMessageId;
-(void)_readMessageUrl;
-(void)_readHoursOfOperations;
-(void)_addNoFlagsHoursOfOperation:(id)arg1 ;
-(void)_readTimezone;
-(void)_readNavBackgroundColor;
-(void)_readNavTintColor;
-(NSString *)messageUrl;
-(NSString *)navBackgroundColor;
-(NSString *)navTintColor;
-(void)setMessageUrl:(NSString *)arg1 ;
-(unsigned long long)hoursOfOperationsCount;
-(void)clearHoursOfOperations;
-(id)hoursOfOperationAtIndex:(unsigned long long)arg1 ;
-(void)addHoursOfOperation:(id)arg1 ;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(void)setNavBackgroundColor:(NSString *)arg1 ;
-(void)setNavTintColor:(NSString *)arg1 ;
-(NSMutableArray *)hoursOfOperations;
-(BOOL)hasMessageId;
-(BOOL)hasMessageUrl;
-(int)responseTime;
-(void)setResponseTime:(int)arg1 ;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(BOOL)hasResponseTime;
-(id)responseTimeAsString:(int)arg1 ;
-(int)StringAsResponseTime:(id)arg1 ;
-(void)setHoursOfOperations:(NSMutableArray *)arg1 ;
-(BOOL)hasTimezone;
-(BOOL)isVerified;
-(void)setIsVerified:(BOOL)arg1 ;
-(void)setHasIsVerified:(BOOL)arg1 ;
-(BOOL)hasIsVerified;
-(BOOL)hasNavBackgroundColor;
-(BOOL)hasNavTintColor;
@end

