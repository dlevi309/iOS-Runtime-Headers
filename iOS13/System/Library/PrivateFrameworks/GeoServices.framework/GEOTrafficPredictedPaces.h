/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader;

@interface GEOTrafficPredictedPaces : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE19* _encodedPaces;
	SCD_Struct_GE19* _secondsInFutures;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_encodedPaces : 1;
		unsigned read_secondsInFutures : 1;
		unsigned wrote_encodedPaces : 1;
		unsigned wrote_secondsInFutures : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long secondsInFuturesCount; 
@property (nonatomic,readonly) unsigned* secondsInFutures; 
@property (nonatomic,readonly) unsigned long long encodedPacesCount; 
@property (nonatomic,readonly) unsigned* encodedPaces; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
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
-(void)_readSecondsInFutures;
-(void)_addNoFlagsSecondsInFuture:(unsigned)arg1 ;
-(void)_readEncodedPaces;
-(void)_addNoFlagsEncodedPace:(unsigned)arg1 ;
-(unsigned long long)secondsInFuturesCount;
-(void)clearSecondsInFutures;
-(unsigned)secondsInFutureAtIndex:(unsigned long long)arg1 ;
-(void)addSecondsInFuture:(unsigned)arg1 ;
-(unsigned long long)encodedPacesCount;
-(void)clearEncodedPaces;
-(unsigned)encodedPaceAtIndex:(unsigned long long)arg1 ;
-(void)addEncodedPace:(unsigned)arg1 ;
-(unsigned*)secondsInFutures;
-(void)setSecondsInFutures:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)encodedPaces;
-(void)setEncodedPaces:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

