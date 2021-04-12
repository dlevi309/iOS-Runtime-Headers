/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDCategoryInformation;

@interface GEOPDMerchantLookupResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDCategoryInformation* _categoryInfo;

}

@property (nonatomic,readonly) BOOL hasCategoryInfo; 
@property (nonatomic,retain) GEOPDCategoryInformation * categoryInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDCategoryInformation *)categoryInfo;
-(void)setCategoryInfo:(GEOPDCategoryInformation *)arg1 ;
-(BOOL)hasCategoryInfo;
@end

