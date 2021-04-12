/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKObject.h>

@class NSString, USKToken, NSArray, NSDictionary;

@interface USKNode : USKObject {

	UsdPrim* _prim;

}

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) USKToken * typeName; 
@property (nonatomic,readonly) NSArray * schemaTypes; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)parent;
-(NSString *)type;
-(id)path;
-(id)propertyList;
-(id)specifier;
-(NSDictionary *)properties;
-(id)metadata;
-(void)setSpecifier:(id)arg1 ;
-(USKToken *)typeName;
-(BOOL)removeProperty:(id)arg1 ;
-(id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 ;
-(BOOL)setMetadataWithKey:(id)arg1 value:(id)arg2 ;
-(BOOL)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3 ;
-(id)metadataWithKey:(id)arg1 ;
-(id)customMetadataWithKey:(id)arg1 ;
-(id)property:(id)arg1 ;
-(id)loadedChildIterator;
-(id)childIterator;
-(id)inheritedSkeletonBinding;
-(id)inheritedMaterialBinding;
-(id)inheritedSkeletonAnimationBinding;
-(void)clearReferences;
-(id)initWithUsdPrim:(UsdPrim*)arg1 ;
-(BOOL)setCustomMetadata:(id)arg1 value:(id)arg2 ;
-(id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 ;
-(UsdPrim*)usdPrim;
-(id)inheritedProperty:(id)arg1 ;
-(BOOL)selectVariant:(id)arg1 variantSet:(id)arg2 ;
-(id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 variability:(BOOL)arg4 ;
-(void)applyType:(id)arg1 ;
-(BOOL)hasSchemaType:(id)arg1 ;
-(void)addReferenceWithURL:(id)arg1 nodePath:(id)arg2 ;
-(void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2 ;
-(void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2 offset:(id)arg3 ;
-(void)addVariantSet:(id)arg1 ;
-(void)addVariant:(id)arg1 variantSet:(id)arg2 ;
-(BOOL)hasVariantSets;
-(BOOL)hasVariantSet:(id)arg1 ;
-(id)variantSets;
-(id)variantsWithVariantSet:(id)arg1 ;
-(BOOL)editVariant:(id)arg1 variantSet:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isInstanceNode;
-(id)masterNode;
-(id)newCustomPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 ;
-(id)subtreeIterator;
-(id)loadedSubtreeIterator;
-(NSArray *)schemaTypes;
@end

