/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORPCarPlayAuxiliaryControl, GEORPWatchAuxiliaryControl;

@interface GEORPAuxiliaryControl : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEORPCarPlayAuxiliaryControl* _car;
	GEORPWatchAuxiliaryControl* _watch;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_car : 1;
		unsigned read_watch : 1;
		unsigned wrote_car : 1;
		unsigned wrote_watch : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasWatch; 
@property (nonatomic,retain) GEORPWatchAuxiliaryControl * watch; 
@property (nonatomic,readonly) BOOL hasCar; 
@property (nonatomic,retain) GEORPCarPlayAuxiliaryControl * car; 
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
-(void)_readWatch;
-(void)_readCar;
-(GEORPWatchAuxiliaryControl *)watch;
-(GEORPCarPlayAuxiliaryControl *)car;
-(void)setWatch:(GEORPWatchAuxiliaryControl *)arg1 ;
-(void)setCar:(GEORPCarPlayAuxiliaryControl *)arg1 ;
-(BOOL)hasWatch;
-(BOOL)hasCar;
@end

