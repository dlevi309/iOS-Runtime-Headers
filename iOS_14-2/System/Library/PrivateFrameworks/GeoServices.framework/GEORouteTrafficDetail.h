/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORouteTrafficDetail : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _spokenRouteName;
	NSString* _unabbreviatedRouteName;
	NSString* _writtenRouteName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _routeTrafficCondition;
	struct {
		unsigned has_routeTrafficCondition : 1;
		unsigned read_unknownFields : 1;
		unsigned read_spokenRouteName : 1;
		unsigned read_unabbreviatedRouteName : 1;
		unsigned read_writtenRouteName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRouteTrafficCondition; 
@property (assign,nonatomic) int routeTrafficCondition; 
@property (nonatomic,readonly) BOOL hasWrittenRouteName; 
@property (nonatomic,retain) NSString * writtenRouteName; 
@property (nonatomic,readonly) BOOL hasSpokenRouteName; 
@property (nonatomic,retain) NSString * spokenRouteName; 
@property (nonatomic,readonly) BOOL hasUnabbreviatedRouteName; 
@property (nonatomic,retain) NSString * unabbreviatedRouteName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)writtenRouteName;
-(NSString *)spokenRouteName;
-(NSString *)unabbreviatedRouteName;
-(void)setRouteTrafficCondition:(int)arg1 ;
-(void)setWrittenRouteName:(NSString *)arg1 ;
-(void)setSpokenRouteName:(NSString *)arg1 ;
-(void)setUnabbreviatedRouteName:(NSString *)arg1 ;
-(int)routeTrafficCondition;
-(void)setHasRouteTrafficCondition:(BOOL)arg1 ;
-(BOOL)hasRouteTrafficCondition;
-(id)routeTrafficConditionAsString:(int)arg1 ;
-(int)StringAsRouteTrafficCondition:(id)arg1 ;
-(BOOL)hasWrittenRouteName;
-(BOOL)hasSpokenRouteName;
-(BOOL)hasUnabbreviatedRouteName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

