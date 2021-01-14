/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLSkinDeformerComponent.h>

@class NSArray, NSData, NSString;

@interface MDLSkinDeformer : NSObject <NSCopying, MDLSkinDeformerComponent> {

	NSArray* _jointPaths;
	NSData* _jointBindTransforms;
	SCD_Struct_MD1 _meshBindTransform;

}

@property (nonatomic,readonly) NSArray * jointPaths;                          //@synthesize jointPaths=_jointPaths - In the implementation block
@property (nonatomic,readonly) NSData * jointBindTransforms;                  //@synthesize jointBindTransforms=_jointBindTransforms - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MD1 meshBindTransform;              //@synthesize meshBindTransform=_meshBindTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJointPaths:(id)arg1 jointBindTransforms:(id)arg2 meshBindTransform:(SCD_Struct_MD1)arg3 ;
-(unsigned long long)copyJointBindTransformsInto:(SCD_Struct_MD1*)arg1 maxCount:(unsigned long long)arg2 ;
-(NSArray *)jointPaths;
-(NSData *)jointBindTransforms;
-(SCD_Struct_MD1)meshBindTransform;
-(id)initWithJointPaths:(id)arg1 jointBindTransforms:(const SCD_Struct_MD1*)arg2 count:(unsigned long long)arg3 meshBindTransform:(SCD_Struct_MD1)arg4 ;
@end

