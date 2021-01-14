/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(NSDictionary *)properties;
-(id)parent;
-(id)path;
-(id)name;
-(USKToken *)typeName;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)removeProperty:(id)arg1 ;
-(id)propertyList;
-(id)metadata;
-(BOOL)isEqual:(id)arg1 ;
-(UsdPrim*)usdPrim;
-(void)clearReferences;
-(id)property:(id)arg1 ;
-(id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 ;
-(BOOL)setMetadataWithKey:(id)arg1 value:(id)arg2 ;
-(id)childIterator;
-(id)metadataWithKey:(id)arg1 ;
-(BOOL)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3 ;
-(void)applyType:(id)arg1 ;
-(id)customMetadataWithKey:(id)arg1 ;
-(id)loadedChildIterator;
-(id)inheritedSkeletonBinding;
-(id)inheritedMaterialBinding;
-(id)inheritedSkeletonAnimationBinding;
-(id)initWithUsdPrim:(UsdPrim*)arg1 ;
-(BOOL)setCustomMetadata:(id)arg1 value:(id)arg2 ;
-(id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 ;
-(id)inheritedProperty:(id)arg1 ;
-(BOOL)selectVariant:(id)arg1 variantSet:(id)arg2 ;
-(id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 variability:(BOOL)arg4 ;
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

