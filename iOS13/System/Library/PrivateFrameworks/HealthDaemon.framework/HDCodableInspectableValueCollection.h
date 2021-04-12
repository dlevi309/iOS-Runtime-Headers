/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)collectionType;
-(NSMutableArray *)collections;
-(void)setCollectionType:(long long)arg1 ;
-(HDCodableMedicalCodingList *)elementTags;
-(void)setCollections:(NSMutableArray *)arg1 ;
-(void)addCollection:(id)arg1 ;
-(void)setHasCollectionType:(BOOL)arg1 ;
-(BOOL)hasCollectionType;
-(void)setElementTags:(HDCodableMedicalCodingList *)arg1 ;
-(unsigned long long)collectionsCount;
-(void)clearCollections;
-(id)collectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasElementTags;
@end

