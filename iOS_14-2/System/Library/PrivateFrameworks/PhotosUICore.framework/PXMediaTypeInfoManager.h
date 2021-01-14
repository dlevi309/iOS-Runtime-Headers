/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface PXMediaTypeInfoManager : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _pendingCompletionHandlers;

}
+(id)sharedManager;
+(id)knowledgeBaseFallbackURL;
-(id)init;
-(void)_processPendingCallbacksWithAsset:(id)arg1 ;
-(void)mediaTypeInfoURLForUTI:(id)arg1 codecName:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_installMobileAssetAsUserInitiated:(BOOL)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)prepareInformationForLookups;
-(id)_init;
-(void)_handleInstallMobileAssetCallbackWithAsset:(id)arg1 UTI:(id)arg2 codecName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleAssetDownloadProgressWithAsset:(id)arg1 error:(id)arg2 ;
-(void)_handleAssetQueryCallbackWithAsset:(id)arg1 error:(id)arg2 userInitiated:(BOOL)arg3 ;
-(void)_prepareInformationForLookups;
@end

