/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, MDLScatteringFunction, NSString;

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration> {

	NSMutableArray* _userProperties;
	NSMutableArray* _builtinProperties;
	MDLScatteringFunction* _scatteringFunction;
	NSString* _name;
	MDLMaterial* _baseMaterial;
	unsigned long long _materialFace;

}

@property (nonatomic,retain,readonly) MDLScatteringFunction * scatteringFunction; 
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) MDLMaterial * baseMaterial;                                       //@synthesize baseMaterial=_baseMaterial - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long materialFace;                                  //@synthesize materialFace=_materialFace - In the implementation block
+(id)materialWithSCNMaterial:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MD5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(BidirectionalScatteringDistributionFunction*)bsdf;
-(void)setProperty:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithName:(id)arg1 scatteringFunction:(id)arg2 ;
-(unsigned long long)materialFace;
-(MDLScatteringFunction *)scatteringFunction;
-(NSString *)name;
-(void)removeAllProperties;
-(void)setName:(NSString *)arg1 ;
-(void)removeProperty:(id)arg1 ;
-(id)propertyNamed:(id)arg1 ;
-(id)propertyWithSemantic:(unsigned long long)arg1 ;
-(void)loadTexturesUsingArchiveAssetResolver:(id)arg1 cache:(id)arg2 ;
-(void)resolveTexturesWithResolver:(id)arg1 ;
-(void)loadTexturesUsingResolver:(id)arg1 cache:(id)arg2 ;
-(void)setScatteringFunction:(MDLScatteringFunction *)arg1 ;
-(MDLMaterial *)baseMaterial;
-(id)propertiesWithSemantic:(unsigned long long)arg1 ;
-(void)loadTexturesUsingResolver:(id)arg1 ;
-(id)initWithName:(id)arg1 physicallyPlausibleBSDF:(PhysicallyPlausibleDistribution*)arg2 ;
-(void)conformToMatProperties;
-(void)setBaseMaterial:(MDLMaterial *)arg1 ;
-(void)setMaterialFace:(unsigned long long)arg1 ;
@end

