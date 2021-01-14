/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PHAAssetResourceDataLoading.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, PHPhotoLibrary, NSString;

@interface PHAAssetResourceDataLoader : NSObject <PHAAssetResourceDataLoading> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _activeDownloads;
	PHPhotoLibrary* _photoLibrary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataLoaderWithDefaultConfigurationForPhotoLibrary:(id)arg1 ;
-(id)assetResourceFromAcceptableAssetResources:(id)arg1 options:(id)arg2 ;
-(id)init;
-(void)_inq_downloadAssetResource:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_firstLocallyAvailableAssetResourceFromAssetResources:(id)arg1 ;
-(id)_localFileURLForAssetResource:(id)arg1 error:(id*)arg2 ;
-(void)requestDataForAssetResource:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_inq_cancelAllDownloads;
-(void)cancelAllDownloads;
@end

