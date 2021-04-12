/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

