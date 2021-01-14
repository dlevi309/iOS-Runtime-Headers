/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchWhitelistedBundleIDsURLRequest : CKDURLRequest {

	/*^block*/id _bundleIDsFetchedBlock;

}

@property (nonatomic,copy) id bundleIDsFetchedBlock;              //@synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock - In the implementation block
-(id)applicationBundleIdentifierForNetworkAttribution;
-(id)applicationBundleIdentifierForContainerAccess;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(BOOL)requiresTokenRegistration;
-(void)setBundleIDsFetchedBlock:(id)arg1 ;
-(id)bundleIDsFetchedBlock;
@end

