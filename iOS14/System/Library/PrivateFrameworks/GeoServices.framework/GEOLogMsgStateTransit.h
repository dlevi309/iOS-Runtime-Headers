/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateTransit : PBCodable <NSCopying> {

	BOOL _transitNotAvailableAdvisoryShowing;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasTransitNotAvailableAdvisoryShowing; 
@property (assign,nonatomic) BOOL transitNotAvailableAdvisoryShowing; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setTransitNotAvailableAdvisoryShowing:(BOOL)arg1 ;
-(BOOL)transitNotAvailableAdvisoryShowing;
-(void)setHasTransitNotAvailableAdvisoryShowing:(BOOL)arg1 ;
-(BOOL)hasTransitNotAvailableAdvisoryShowing;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

