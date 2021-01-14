/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKObject.h>

@class NSString, USKToken;

@interface USKProperty : USKObject {

	UsdProperty* _property;

}

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) USKToken * typeName; 
@property (nonatomic,readonly) NSString * role; 
@property (nonatomic,readonly) USKToken * roleName; 
-(BOOL)isAnimated;
-(id)urlValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(float)floatValue;
-(void)setFloatValue:(float)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(id)resourcePath;
-(void)setURL:(id)arg1 ;
-(id)path;
-(id)stringArray;
-(id)stringValue;
-(void)setIntValue:(int)arg1 ;
-(void)setData:(id)arg1 ;
-(1)float2Value;
-(1)float3Value;
-(1)float4Value;
-(void)setBoolValue:(BOOL)arg1 ;
-(id)name;
-(USKToken *)typeName;
-(void)setStringValue:(id)arg1 ;
-(id)parentNode;
-(id)data;
-(NSString *)type;
-(unsigned long long)hash;
-(int)intValue;
-(NSString *)role;
-(id)metadata;
-(void)setResourcePath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)targetObject;
-(void)setFloat2Value:;
-(void)setFloat3Value:;
-(void)setFloat4Value:;
-(void)setFloatArray:(float*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setFloat3Array:(1*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setFloat4x4Array:(SCD_Struct_US15*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble4x4Array:(SCD_Struct_US15*)arg1 count:(unsigned long long)arg2 ;
-(void)setDoubleArray:(double*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setDouble3Array:(1*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(id)objectPathArray;
-(id)objectPath;
-(1)double3Value;
-(void)setTokenValue:(id)arg1 ;
-(void)setObjectPathArray:(id)arg1 ;
-(void)setObjectPath:(id)arg1 ;
-(void)setTokenArray:(id)arg1 ;
-(void)setDouble3Value:;
-(void)setQuatfValue:({?=})arg1 ;
-(BOOL)setMetadataWithKey:(id)arg1 value:(id)arg2 ;
-(id)tokenValue;
-(id)metadataWithKey:(id)arg1 ;
-(BOOL)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3 ;
-(void)setStringArray:(id)arg1 ;
-(void)setIntArray:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setFloat3Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setFloat2Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)setConnectionWithTargetPaths:(id)arg1 ;
-(void)setDouble4x4Value:(SCD_Struct_US15)arg1 atTime:(double)arg2 ;
-(void)setFloatValue:(float)arg1 atTime:(double)arg2 ;
-(void)setFloat3Value:(double)arg1 ;
-(void)setQuatfValue:({?=})arg1 atTime:(double)arg2 ;
-(void)setDouble4x4Value:(SCD_Struct_US15)arg1 ;
-(void)setFloatArray:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setQuatfArray:({?=}*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(id)timeSamples;
-(unsigned long long)arraySize;
-(unsigned long long)floatArray:(float*)arg1 maxCount:(unsigned long long)arg2 ;
-(float)floatValueAtTime:(double)arg1 ;
-(id)customMetadataWithKey:(id)arg1 ;
-(id)timeCodeValue;
-(SCD_Struct_US15)double4x4Value;
-(unsigned long long)double4x4Array:(SCD_Struct_US15*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)arraySizeAtTime:(double)arg1 ;
-(unsigned long long)float3Array:(1*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)quatfArray:({?=}*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(id)tokenArray;
-(unsigned)uintValue;
-(1)double2Value;
-(1)double4Value;
-({?=})quatfValue;
-(unsigned long long)intArray:(int*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)uintArray:(unsigned*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)quatfArray:({?=}*)arg1 maxCount:(unsigned long long)arg2 ;
-(id)resourcePathArray;
-(unsigned long long)float2Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)float3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)float4Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)float4x4Array:(SCD_Struct_US15*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)doubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)double2Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)double3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)double4Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setTimeCodeValue:(id)arg1 ;
-(void)setUIntValue:(unsigned)arg1 ;
-(void)setDouble2Value:;
-(void)setDouble4Value:;
-(void)setUIntArray:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setQuatfArray:({?=}*)arg1 count:(unsigned long long)arg2 ;
-(void)setResourcePathArray:(id)arg1 ;
-(void)setFloat4Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setDoubleArray:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble2Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble3Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setDouble4Array:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithUsdProperty:(UsdProperty*)arg1 ;
-(BOOL)setCustomMetadata:(id)arg1 value:(id)arg2 ;
-(id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 ;
-(UsdProperty*)usdProperty;
-(id)dataAtTime:(double)arg1 ;
-(USKToken *)roleName;
-(id)connectedPropertyPath;
-(id)connectedPropertyPaths;
-(void)clearConnections;
-(unsigned)uintValueAtTime:(double)arg1 ;
-(double)doubleValueAtTime:(double)arg1 ;
-(2)double2ValueAtTime:(double)arg1 ;
-(2)double3ValueAtTime:(double)arg1 ;
-(2)double4ValueAtTime:(double)arg1 ;
-(SCD_Struct_US15)double4x4ValueAtTime:(double)arg1 ;
-(2)float2ValueAtTime:(double)arg1 ;
-(2)float3ValueAtTime:(double)arg1 ;
-(2)float4ValueAtTime:(double)arg1 ;
-({?=})quatfValueAtTime:(double)arg1 ;
-(unsigned long long)intArray:(int*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)uintArray:(unsigned*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(id)stringArrayAtTime:(double)arg1 ;
-(id)tokenArrayAtTime:(double)arg1 ;
-(unsigned long long)floatArray:(float*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)float2Array:(1*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)float4Array:(1*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)float4x4Array:(SCD_Struct_US15*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)doubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)double2Array:(1*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)double3Array:(1*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)double4Array:(1*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)double4x4Array:(SCD_Struct_US15*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setData:(id)arg1 atTime:(double)arg2 ;
-(void)setUIntValue:(unsigned)arg1 atTime:(double)arg2 ;
-(void)setDoubleValue:(double)arg1 atTime:(double)arg2 ;
-(void)setDouble2Value:(double)arg1 ;
-(void)setDouble3Value:(double)arg1 ;
-(void)setDouble4Value:(double)arg1 ;
-(void)setFloat2Value:(double)arg1 ;
-(void)setFloat4Value:(double)arg1 ;
-(void)setIntArray:(int*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setUIntArray:(unsigned*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setStringArray:(id)arg1 atTime:(double)arg2 ;
-(void)setTokenArray:(id)arg1 atTime:(double)arg2 ;
-(void)setFloat2Array:(1*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setFloat4Array:(1*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setFloat4x4Array:(SCD_Struct_US15*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setDouble2Array:(1*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setDouble4Array:(1*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setDouble4x4Array:(SCD_Struct_US15*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
@end

