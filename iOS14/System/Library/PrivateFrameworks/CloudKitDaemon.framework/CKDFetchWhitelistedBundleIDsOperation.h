/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDFetchWhitelistedBundleIDsOperation : CKDOperation {

	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;                                                                           //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) id<CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy; 
-(int)operationType;
-(id)activityCreate;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
@end

