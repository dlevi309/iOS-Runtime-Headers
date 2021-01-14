/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOLPRDefinedPlateType : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _conditions;
	NSString* _desc;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSMutableArray * conditions; 
@property (nonatomic,readonly) BOOL hasDesc; 
@property (nonatomic,retain) NSString * desc; 
+(Class)conditionsType;
+(BOOL)isValid:(id)arg1 ;
-(NSMutableArray *)conditions;
-(id)dictionaryRepresentation;
-(void)setDesc:(NSString *)arg1 ;
-(void)setConditions:(NSMutableArray *)arg1 ;
-(NSString *)desc;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)addConditions:(id)arg1 ;
-(unsigned long long)conditionsCount;
-(void)clearConditions;
-(id)conditionsAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDesc;
@end

