/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDFetchWhitelistedBundleIDsOperation : CKDOperation {

	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
-(void)main;
-(NSArray *)bundleIDs;
-(id)activityCreate;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
@end

