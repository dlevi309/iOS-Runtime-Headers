/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDiscoveryWebServiceResponse.h>

@class PKDiscoveryManifest;

@interface PKDiscoveryManifestResponse : PKDiscoveryWebServiceResponse {

	PKDiscoveryManifest* _manifest;

}

@property (nonatomic,readonly) PKDiscoveryManifest * manifest;              //@synthesize manifest=_manifest - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKDiscoveryManifest *)manifest;
-(id)initWithManifest:(id)arg1 ;
@end

