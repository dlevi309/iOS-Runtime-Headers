/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchWhitelistedBundleIDsURLRequest : CKDURLRequest {

	/*^block*/id _bundleIDsFetchedBlock;

}

@property (nonatomic,copy) id bundleIDsFetchedBlock;              //@synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock - In the implementation block
-(int)operationType;
-(id)sourceApplicationBundleIdentifier;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)requiresTokenRegistration;
-(void)setBundleIDsFetchedBlock:(id)arg1 ;
-(id)bundleIDsFetchedBlock;
@end

