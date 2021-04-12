/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

@class NSArray, NSData;


@protocol MDLSkinDeformerComponent <MDLComponent>
@property (nonatomic,readonly) NSArray * jointPaths; 
@property (nonatomic,readonly) NSData * jointBindTransforms; 
@property (nonatomic,readonly) SCD_Struct_MD1 meshBindTransform; 
@required
-(unsigned long long)copyJointBindTransformsInto:(/*function pointer*/void**)arg1 maxCount:(unsigned long long)arg2;
-(NSArray *)jointPaths;
-(NSData *)jointBindTransforms;
-(SCD_Struct_MD1)meshBindTransform;

@end

