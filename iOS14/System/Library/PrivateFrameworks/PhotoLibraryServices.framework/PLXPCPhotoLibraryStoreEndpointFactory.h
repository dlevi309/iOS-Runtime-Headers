/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSXPCStoreServerEndpointFactory.h>

@class NSURL, PLAssetsdClient, NSString;

@interface PLXPCPhotoLibraryStoreEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory> {

	NSURL* _libraryURL;
	PLAssetsdClient* _assetsdClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAssetsdClient:(id)arg1 ;
-(id)newEndpoint;
@end

