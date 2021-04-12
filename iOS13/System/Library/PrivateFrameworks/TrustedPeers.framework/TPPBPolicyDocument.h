/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface TPPBPolicyDocument : PBCodable <NSCopying> {

	unsigned long long _policyVersion;
	NSMutableArray* _categoriesByViews;
	NSMutableArray* _introducersByCategorys;
	NSMutableArray* _keyViewMappings;
	NSMutableArray* _modelToCategorys;
	NSMutableArray* _redactions;
	SCD_Struct_TP3 _has;

}

@property (assign,nonatomic) BOOL hasPolicyVersion; 
@property (assign,nonatomic) unsigned long long policyVersion;                     //@synthesize policyVersion=_policyVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * modelToCategorys;                    //@synthesize modelToCategorys=_modelToCategorys - In the implementation block
@property (nonatomic,retain) NSMutableArray * categoriesByViews;                   //@synthesize categoriesByViews=_categoriesByViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * introducersByCategorys;              //@synthesize introducersByCategorys=_introducersByCategorys - In the implementation block
@property (nonatomic,retain) NSMutableArray * redactions;                          //@synthesize redactions=_redactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyViewMappings;                     //@synthesize keyViewMappings=_keyViewMappings - In the implementation block
+(Class)modelToCategoryType;
+(Class)categoriesByViewType;
+(Class)introducersByCategoryType;
+(Class)redactionsType;
+(Class)keyViewMappingType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)redactions;
-(void)setRedactions:(NSMutableArray *)arg1 ;
-(void)setPolicyVersion:(unsigned long long)arg1 ;
-(void)setHasPolicyVersion:(BOOL)arg1 ;
-(BOOL)hasPolicyVersion;
-(unsigned long long)policyVersion;
-(void)clearModelToCategorys;
-(void)addModelToCategory:(id)arg1 ;
-(unsigned long long)modelToCategorysCount;
-(id)modelToCategoryAtIndex:(unsigned long long)arg1 ;
-(void)clearCategoriesByViews;
-(void)addCategoriesByView:(id)arg1 ;
-(unsigned long long)categoriesByViewsCount;
-(id)categoriesByViewAtIndex:(unsigned long long)arg1 ;
-(void)clearIntroducersByCategorys;
-(void)addIntroducersByCategory:(id)arg1 ;
-(unsigned long long)introducersByCategorysCount;
-(id)introducersByCategoryAtIndex:(unsigned long long)arg1 ;
-(void)clearRedactions;
-(void)addRedactions:(id)arg1 ;
-(unsigned long long)redactionsCount;
-(id)redactionsAtIndex:(unsigned long long)arg1 ;
-(void)clearKeyViewMappings;
-(void)addKeyViewMapping:(id)arg1 ;
-(unsigned long long)keyViewMappingsCount;
-(id)keyViewMappingAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)modelToCategorys;
-(void)setModelToCategorys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)categoriesByViews;
-(void)setCategoriesByViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)introducersByCategorys;
-(void)setIntroducersByCategorys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)keyViewMappings;
-(void)setKeyViewMappings:(NSMutableArray *)arg1 ;
@end

