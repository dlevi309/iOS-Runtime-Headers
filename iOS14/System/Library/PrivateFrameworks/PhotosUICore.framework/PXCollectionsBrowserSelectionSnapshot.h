/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXBrowserSelectionSnapshot.h>

@class NSArray, PXSectionedDataSource, NSString;

@interface PXCollectionsBrowserSelectionSnapshot : NSObject <PXBrowserSelectionSnapshot> {

	NSArray* _indexPaths;
	PXSectionedDataSource* _dataSource;
	NSArray* _modelObjects;

}

@property (nonatomic,readonly) long long estimatedAssetCount; 
@property (nonatomic,readonly) long long assetCount; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) long long estimatedModelObjectsCount; 
@property (nonatomic,readonly) NSArray * modelObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)mediaType;
-(long long)assetCount;
-(id)displayAssetAtIndex:(long long)arg1 ;
-(id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2 ;
-(id)assetReferenceAtIndex:(long long)arg1 ;
-(long long)indexOfAssetReference:(id)arg1 ;
-(long long)estimatedModelObjectsCount;
-(long long)estimatedAssetCount;
-(NSArray *)modelObjects;
@end

