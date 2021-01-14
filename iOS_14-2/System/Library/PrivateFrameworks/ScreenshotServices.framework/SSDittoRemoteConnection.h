/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class FBSOpenApplicationService;

@interface SSDittoRemoteConnection : NSObject {

	FBSOpenApplicationService* _openApplicationService;

}
-(id)init;
-(void)_sendAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendAction:(id)arg1 ;
-(void)preheatDittoProcess;
-(void)sendDittoProcessEnvironmentDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendDittoProcessImageIdentifierUpdate:(id)arg1 ;
-(void)sendDittoProcessMetadataUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendDittoProcessDocumentUpdate:(id)arg1 ;
-(void)sendDittoProcessPreheatRequestWithPresentationMode:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

