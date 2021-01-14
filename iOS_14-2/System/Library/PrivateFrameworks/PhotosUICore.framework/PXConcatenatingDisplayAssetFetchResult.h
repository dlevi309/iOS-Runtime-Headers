/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXDisplayAssetFetchResult.h>

@class NSArray, NSString;

@interface PXConcatenatingDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult> {

	NSArray* _fetchResults;
	long long* _startIndexes;
	long long _subFetchResultsCount;
	long long _count;

}

@property (nonatomic,readonly) id<PXDisplayAsset> firstObject; 
@property (nonatomic,readonly) id<PXDisplayAsset> lastObject; 
@property (nonatomic,readonly) long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)thumbnailAssetAtIndex:(unsigned long long)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(long long)count;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1 ;
-(id<PXDisplayAsset>)lastObject;
-(id<PXDisplayAsset>)firstObject;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1 ;
-(id)initWithFetchResults:(id)arg1 ;
-(id)_subFetchResultForIndex:(long long)arg1 localIndex:(long long*)arg2 ;
-(void)dealloc;
@end

