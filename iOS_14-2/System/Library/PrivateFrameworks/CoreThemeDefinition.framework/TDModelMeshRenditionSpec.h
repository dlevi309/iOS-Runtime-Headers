/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/TDModelObjectRenditionSpec.h>

@class NSOrderedSet;

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec

@property (nonatomic,retain) NSOrderedSet * submeshes; 
+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)processSubMesh:(id)arg1 withAssetSubmeshIndex:(unsigned*)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4 ;
@end

