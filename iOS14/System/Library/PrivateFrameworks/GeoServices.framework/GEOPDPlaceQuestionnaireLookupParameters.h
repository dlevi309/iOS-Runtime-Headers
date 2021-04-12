/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDPlaceQuestionnaireLookupParameters : PBCodable <NSCopying> {

	NSMutableArray* _placeInfos;

}

@property (nonatomic,retain) NSMutableArray * placeInfos; 
+(BOOL)isValid:(id)arg1 ;
+(Class)placeInfoType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)placeInfos;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addPlaceInfo:(id)arg1 ;
-(void)setPlaceInfos:(NSMutableArray *)arg1 ;
-(unsigned long long)placeInfosCount;
-(id)placeInfoAtIndex:(unsigned long long)arg1 ;
-(void)clearPlaceInfos;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

