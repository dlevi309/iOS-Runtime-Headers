/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class PLAssetsdClient;

@interface PLGatekeeperClient : NSObject {

	PLAssetsdClient* _assetsdClient;

}
+(id)sharedInstance;
-(void)getLibrarySizes:(/*^block*/id)arg1 ;
-(void)getLibrarySizesFromDB:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
@end

