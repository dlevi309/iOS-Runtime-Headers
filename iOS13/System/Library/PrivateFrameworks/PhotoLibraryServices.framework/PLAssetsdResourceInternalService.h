/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)batchSaveAssetJobs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prepareRevertToOriginalWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)purgeExpiredOutboundSharingAssetsWithReply:(/*^block*/id)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg1 trustedCallerBundleID:(id)arg2 ;
@end

