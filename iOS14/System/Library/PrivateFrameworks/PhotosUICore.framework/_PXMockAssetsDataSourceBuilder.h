/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXMockDataSourceBuilder.h>

@class NSMutableArray, NSArray, NSString;

@interface _PXMockAssetsDataSourceBuilder : NSObject <PXMockDataSourceBuilder> {

	NSMutableArray* _mutableAssetsBySection;
	NSMutableArray* _mutableAssetCollections;

}

@property (nonatomic,readonly) NSArray * assetsBySection; 
@property (nonatomic,readonly) NSArray * assetCollections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)assetsBySection;
-(void)appendMockDisplayAssetSectionWithCount:(long long)arg1 assetProperties:(id)arg2 assetCollection:(id)arg3 ;
-(void)appendMockDisplayAssetsWithCount:(long long)arg1 assetProperties:(id)arg2 ;
-(NSArray *)assetCollections;
@end

