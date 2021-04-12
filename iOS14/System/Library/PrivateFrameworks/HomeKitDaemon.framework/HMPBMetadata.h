/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying> {

	NSMutableArray* _hapCategories;
	NSMutableArray* _hapCharacteristics;
	NSMutableArray* _hapServices;
	int _version;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapCharacteristics;              //@synthesize hapCharacteristics=_hapCharacteristics - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapServices;                     //@synthesize hapServices=_hapServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapCategories;                   //@synthesize hapCategories=_hapCategories - In the implementation block
+(Class)hapCharacteristicsType;
+(Class)hapServicesType;
+(Class)hapCategoriesType;
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSMutableArray *)hapServices;
-(unsigned long long)hapCharacteristicsCount;
-(unsigned long long)hapServicesCount;
-(unsigned long long)hapCategoriesCount;
-(NSMutableArray *)hapCategories;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(int)arg1 ;
-(NSMutableArray *)hapCharacteristics;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addHapCharacteristics:(id)arg1 ;
-(void)addHapServices:(id)arg1 ;
-(void)addHapCategories:(id)arg1 ;
-(void)clearHapCharacteristics;
-(id)hapCharacteristicsAtIndex:(unsigned long long)arg1 ;
-(void)clearHapServices;
-(id)hapServicesAtIndex:(unsigned long long)arg1 ;
-(void)clearHapCategories;
-(id)hapCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)setHapCharacteristics:(NSMutableArray *)arg1 ;
-(void)setHapServices:(NSMutableArray *)arg1 ;
-(void)setHapCategories:(NSMutableArray *)arg1 ;
-(int)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

