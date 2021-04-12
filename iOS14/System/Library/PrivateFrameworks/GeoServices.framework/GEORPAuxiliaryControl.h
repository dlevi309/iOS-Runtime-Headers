/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasWatch; 
@property (nonatomic,retain) GEORPWatchAuxiliaryControl * watch; 
@property (nonatomic,readonly) BOOL hasCar; 
@property (nonatomic,retain) GEORPCarPlayAuxiliaryControl * car; 
+(BOOL)isValid:(id)arg1 ;
-(GEORPCarPlayAuxiliaryControl *)car;
-(id)dictionaryRepresentation;
-(BOOL)hasWatch;
-(void)setCar:(GEORPCarPlayAuxiliaryControl *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasCar;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEORPWatchAuxiliaryControl *)watch;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setWatch:(GEORPWatchAuxiliaryControl *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

