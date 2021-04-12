/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLAssetsdServicePermissions, PLLazyObject;

@interface PLAssetsdInnerService : NSObject {

	PLAssetsdServicePermissions* _permissions;
	long long _requiredState;
	PLLazyObject* _lazyService;

}
-(void)getInnerServiceWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithPermissions:(id)arg1 requiredLibraryServicesState:(long long)arg2 lazyService:(id)arg3 ;
-(void)_awaitForRequiredLibraryStateWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)instantiateInnerService;
@end

