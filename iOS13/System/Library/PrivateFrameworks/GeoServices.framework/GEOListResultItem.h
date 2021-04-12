/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)resultType;
-(long long)latency;
-(void)writeTo:(id)arg1 ;
-(void)setResultType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(id)resultTypeAsString:(int)arg1 ;
-(int)StringAsResultType:(id)arg1 ;
-(BOOL)initiallyVisible;
-(void)setInitiallyVisible:(BOOL)arg1 ;
-(void)setHasInitiallyVisible:(BOOL)arg1 ;
-(BOOL)hasInitiallyVisible;
-(BOOL)eventuallyVisible;
-(void)setEventuallyVisible:(BOOL)arg1 ;
-(void)setHasEventuallyVisible:(BOOL)arg1 ;
-(BOOL)hasEventuallyVisible;
-(void)setLatency:(long long)arg1 ;
-(void)setHasLatency:(BOOL)arg1 ;
-(BOOL)hasLatency;
-(int)tappedCount;
-(void)setTappedCount:(int)arg1 ;
-(void)setHasTappedCount:(BOOL)arg1 ;
-(BOOL)hasTappedCount;
-(unsigned long long)businessId;
-(void)setBusinessId:(unsigned long long)arg1 ;
-(void)setHasBusinessId:(BOOL)arg1 ;
-(BOOL)hasBusinessId;
@end

