/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDisplayAssetFetchResult.h>

@protocol PXDisplayAssetFetchResult;
@class NSString;

@interface PXWrappingDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult> {

	NSRange _range;
	id<PXDisplayAssetFetchResult> _displayFetchResult;

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
-(id)initWithFetchResult:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1 ;
-(id<PXDisplayAsset>)lastObject;
-(id<PXDisplayAsset>)firstObject;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1 ;
@end

