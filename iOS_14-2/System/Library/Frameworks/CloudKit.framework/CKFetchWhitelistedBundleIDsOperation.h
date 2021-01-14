/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKFetchWhitelistedBundleIDsOperationCallbacks.h>

@class NSArray;

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation <CKFetchWhitelistedBundleIDsOperationCallbacks> {

	/*^block*/id _fetchWhitelistedBundleIDsCompletionBlock;
	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;                                                                             //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,readonly) id<CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id fetchWhitelistedBundleIDsCompletionBlock;                                                     //@synthesize fetchWhitelistedBundleIDsCompletionBlock=_fetchWhitelistedBundleIDsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(void)performCKOperation;
-(id)fetchWhitelistedBundleIDsCompletionBlock;
-(void)setFetchWhitelistedBundleIDsCompletionBlock:(id)arg1 ;
-(void)handleOperationDidCompleteWithBundleIDs:(id)arg1 metrics:(id)arg2 error:(id)arg3 ;
@end

