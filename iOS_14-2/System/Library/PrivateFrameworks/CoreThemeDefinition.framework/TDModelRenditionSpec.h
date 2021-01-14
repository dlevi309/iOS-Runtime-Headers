/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDModelAsset, NSSet;

@interface TDModelRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) TDModelAsset * asset; 
@property (nonatomic,retain) NSSet * childRenditions; 
@property (assign,nonatomic) int modelAssetIndex; 
+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)processModelObjectsInDocument:(id)arg1 ;
-(void)processMesh:(id)arg1 withAssetMeshIndex:(unsigned*)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4 ;
@end

