/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

