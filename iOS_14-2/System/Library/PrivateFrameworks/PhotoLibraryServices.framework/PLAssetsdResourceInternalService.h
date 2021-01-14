/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdResourceInternalServiceProtocol.h>

@class NSString;

@interface PLAssetsdResourceInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceInternalServiceProtocol> {

	NSString* _trustedCallerBundleID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)batchSaveAssetJobs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg1 trustedCallerBundleID:(id)arg2 ;
-(void)prepareRevertToOriginalWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)purgeExpiredOutboundSharingAssetsWithReply:(/*^block*/id)arg1 ;
@end

