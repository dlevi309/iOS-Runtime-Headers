/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSUpdatableAssetController.h>

@protocol SKUIJSUpdatableAssetController <JSExport>
@required
-(void)refreshCachedManifest:(id)arg1;
-(id)currentManifestVersion;
-(id)loadResource:(id)arg1;
-(id)newestCachedManifestVersion;

@end


@class SKUIClientContext;

@interface SKUIJSUpdatableAssetController : IKJSObject <SKUIJSUpdatableAssetController> {

	SKUIClientContext* _clientContext;

}
-(void)refreshCachedManifest:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 ;
-(id)currentManifestVersion;
-(id)loadResource:(id)arg1 ;
-(id)newestCachedManifestVersion;
@end

