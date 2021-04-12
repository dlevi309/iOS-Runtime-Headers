/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLAssetsdServicePermissions, PLLazyObject;

@interface PLAssetsdInnerService : NSObject {

	PLAssetsdServicePermissions* _permissions;
	long long _requiredState;
	PLLazyObject* _lazyService;

}
-(id)instantiateInnerService;
-(void)_awaitForRequiredLibraryStateWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getInnerServiceWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithPermissions:(id)arg1 requiredLibraryServicesState:(long long)arg2 lazyService:(id)arg3 ;
@end

