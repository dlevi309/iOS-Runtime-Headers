/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AECameraAssetPackageGenerator : NSObject {

	NSObject*<OS_dispatch_queue> __generationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _generationQueue;              //@synthesize _generationQueue=__generationQueue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)_generationQueue;
-(void)_populatePackage:(id)arg1 fromReviewAsset:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)generatePackageFromReviewAsset:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

