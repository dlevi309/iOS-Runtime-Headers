/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats : PBCodable <NSCopying> {

	double _conversions;
	double _impressions;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasConversions; 
@property (assign,nonatomic) double conversions;               //@synthesize conversions=_conversions - In the implementation block
@property (assign,nonatomic) BOOL hasImpressions; 
@property (assign,nonatomic) double impressions;               //@synthesize impressions=_impressions - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasImpressions;
-(double)impressions;
-(void)setHasImpressions:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(double)conversions;
-(void)setConversions:(double)arg1 ;
-(void)setHasConversions:(BOOL)arg1 ;
-(BOOL)hasConversions;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImpressions:(double)arg1 ;
@end

