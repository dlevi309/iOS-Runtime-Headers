/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class PLAssetsdClient;

@interface PLGatekeeperClient : NSObject {

	PLAssetsdClient* _assetsdClient;

}
+(id)sharedInstance;
-(void)getLibrarySizes:(/*^block*/id)arg1 ;
-(void)getLibrarySizesFromDB:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 intent:(unsigned long long)arg3 networkAccessAllowed:(BOOL)arg4 streamingAllowed:(BOOL)arg5 restrictToPlayable:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 handler:(/*^block*/id)arg8 ;
-(void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(BOOL)arg3 streamingAllowed:(BOOL)arg4 restrictToPlayable:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 handler:(/*^block*/id)arg7 ;
-(void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

