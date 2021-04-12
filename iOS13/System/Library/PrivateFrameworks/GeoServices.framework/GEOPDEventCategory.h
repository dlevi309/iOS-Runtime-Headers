/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDEventCategory : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _localizedCategorys;
	int _eventLookupCategory;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasEventLookupCategory; 
@property (assign,nonatomic) int eventLookupCategory; 
@property (nonatomic,retain) NSMutableArray * localizedCategorys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)localizedCategoryType;
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
-(NSMutableArray *)localizedCategorys;
-(BOOL)hasEventLookupCategory;
-(int)eventLookupCategory;
-(unsigned long long)localizedCategorysCount;
-(void)clearLocalizedCategorys;
-(id)localizedCategoryAtIndex:(unsigned long long)arg1 ;
-(void)addLocalizedCategory:(id)arg1 ;
-(void)setLocalizedCategorys:(NSMutableArray *)arg1 ;
-(void)setEventLookupCategory:(int)arg1 ;
-(void)setHasEventLookupCategory:(BOOL)arg1 ;
-(id)eventLookupCategoryAsString:(int)arg1 ;
-(int)StringAsEventLookupCategory:(id)arg1 ;
@end

