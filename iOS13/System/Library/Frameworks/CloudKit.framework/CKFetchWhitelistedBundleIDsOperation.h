/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation {

	/*^block*/id _fetchWhitelistedBundleIDsCompletionBlock;
	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;                                      //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,copy) id fetchWhitelistedBundleIDsCompletionBlock;              //@synthesize fetchWhitelistedBundleIDsCompletionBlock=_fetchWhitelistedBundleIDsCompletionBlock - In the implementation block
-(NSArray *)bundleIDs;
-(BOOL)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(Class)operationInfoClass;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)fetchWhitelistedBundleIDsCompletionBlock;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(void)setFetchWhitelistedBundleIDsCompletionBlock:(id)arg1 ;
@end

