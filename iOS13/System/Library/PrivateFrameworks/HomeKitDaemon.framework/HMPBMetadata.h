/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapCharacteristics;              //@synthesize hapCharacteristics=_hapCharacteristics - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapServices;                     //@synthesize hapServices=_hapServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapCategories;                   //@synthesize hapCategories=_hapCategories - In the implementation block
+(Class)hapCharacteristicsType;
+(Class)hapServicesType;
+(Class)hapCategoriesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(unsigned long long)hapCharacteristicsCount;
-(NSMutableArray *)hapCharacteristics;
-(unsigned long long)hapServicesCount;
-(NSMutableArray *)hapServices;
-(unsigned long long)hapCategoriesCount;
-(NSMutableArray *)hapCategories;
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
@end

