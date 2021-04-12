/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_spokenRouteName : 1;
		unsigned wrote_unabbreviatedRouteName : 1;
		unsigned wrote_writtenRouteName : 1;
		unsigned wrote_routeTrafficCondition : 1;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readWrittenRouteName;
-(void)_readSpokenRouteName;
-(void)_readUnabbreviatedRouteName;
-(NSString *)writtenRouteName;
-(NSString *)spokenRouteName;
-(NSString *)unabbreviatedRouteName;
-(void)setWrittenRouteName:(NSString *)arg1 ;
-(void)setSpokenRouteName:(NSString *)arg1 ;
-(void)setUnabbreviatedRouteName:(NSString *)arg1 ;
-(int)routeTrafficCondition;
-(void)setRouteTrafficCondition:(int)arg1 ;
-(void)setHasRouteTrafficCondition:(BOOL)arg1 ;
-(BOOL)hasRouteTrafficCondition;
-(id)routeTrafficConditionAsString:(int)arg1 ;
-(int)StringAsRouteTrafficCondition:(id)arg1 ;
-(BOOL)hasWrittenRouteName;
-(BOOL)hasSpokenRouteName;
-(BOOL)hasUnabbreviatedRouteName;
@end

