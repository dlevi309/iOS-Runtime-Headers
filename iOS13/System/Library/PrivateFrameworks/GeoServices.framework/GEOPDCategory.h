/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _localizedNames;
	int _level;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasLevel; 
@property (assign,nonatomic) int level; 
@property (nonatomic,retain) NSMutableArray * localizedNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(id)categoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(BOOL)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(Class)localizedNameType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(NSMutableArray *)localizedNames;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLevel:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasLevel;
-(unsigned long long)localizedNamesCount;
-(void)clearLocalizedNames;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(void)addLocalizedName:(id)arg1 ;
-(id)localizedNameAtIndex:(unsigned long long)arg1 ;
-(void)setHasLevel:(BOOL)arg1 ;
@end

