/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, HDCodableMedicalCodingList;

@interface HDCodableInspectableValueCollection : PBCodable <NSCopying> {

	long long _collectionType;
	NSMutableArray* _collections;
	HDCodableMedicalCodingList* _elementTags;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasCollectionType; 
@property (assign,nonatomic) long long collectionType;                              //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,retain) NSMutableArray * collections;                          //@synthesize collections=_collections - In the implementation block
@property (nonatomic,readonly) BOOL hasElementTags; 
@property (nonatomic,retain) HDCodableMedicalCodingList * elementTags;              //@synthesize elementTags=_elementTags - In the implementation block
+(Class)collectionType;
-(id)dictionaryRepresentation;
-(HDCodableMedicalCodingList *)elementTags;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(id)collectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(long long)collectionType;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCollectionType:(long long)arg1 ;
-(NSMutableArray *)collections;
-(void)setCollections:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addCollection:(id)arg1 ;
-(void)setElementTags:(HDCodableMedicalCodingList *)arg1 ;
-(unsigned long long)collectionsCount;
-(void)clearCollections;
-(void)setHasCollectionType:(BOOL)arg1 ;
-(BOOL)hasCollectionType;
-(BOOL)hasElementTags;
@end

