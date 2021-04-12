/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOListResultItem : PBCodable <NSCopying> {

	unsigned long long _businessId;
	long long _latency;
	int _resultType;
	int _tappedCount;
	BOOL _eventuallyVisible;
	BOOL _initiallyVisible;
	struct {
		unsigned has_businessId : 1;
		unsigned has_latency : 1;
		unsigned has_resultType : 1;
		unsigned has_tappedCount : 1;
		unsigned has_eventuallyVisible : 1;
		unsigned has_initiallyVisible : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType; 
@property (assign,nonatomic) BOOL hasInitiallyVisible; 
@property (assign,nonatomic) BOOL initiallyVisible; 
@property (assign,nonatomic) BOOL hasEventuallyVisible; 
@property (assign,nonatomic) BOOL eventuallyVisible; 
@property (assign,nonatomic) BOOL hasLatency; 
@property (assign,nonatomic) long long latency; 
@property (assign,nonatomic) BOOL hasTappedCount; 
@property (assign,nonatomic) int tappedCount; 
@property (assign,nonatomic) BOOL hasBusinessId; 
@property (assign,nonatomic) unsigned long long businessId; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)eventuallyVisible;
-(id)dictionaryRepresentation;
-(void)setResultType:(int)arg1 ;
-(BOOL)hasInitiallyVisible;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasEventuallyVisible:(BOOL)arg1 ;
-(void)setInitiallyVisible:(BOOL)arg1 ;
-(void)setLatency:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(int)tappedCount;
-(void)setHasResultType:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasTappedCount;
-(void)setTappedCount:(int)arg1 ;
-(void)setHasTappedCount:(BOOL)arg1 ;
-(id)description;
-(long long)latency;
-(void)setBusinessId:(unsigned long long)arg1 ;
-(int)StringAsResultType:(id)arg1 ;
-(id)resultTypeAsString:(int)arg1 ;
-(unsigned long long)hash;
-(void)setEventuallyVisible:(BOOL)arg1 ;
-(BOOL)hasLatency;
-(void)setHasLatency:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasInitiallyVisible:(BOOL)arg1 ;
-(unsigned long long)businessId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)initiallyVisible;
-(BOOL)hasBusinessId;
-(BOOL)hasResultType;
-(void)setHasBusinessId:(BOOL)arg1 ;
-(BOOL)hasEventuallyVisible;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

