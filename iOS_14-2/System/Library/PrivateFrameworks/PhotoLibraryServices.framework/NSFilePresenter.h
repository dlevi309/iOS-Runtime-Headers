/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSURL, NSOperationQueue, NSSet;


@protocol NSFilePresenter <NSObject>
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@optional
-(void)presentedItemDidMoveToURL:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
-(void)presentedItemDidResolveConflictVersion:(id)arg1;
-(NSSet *)observedPresentedItemUbiquityAttributes;
-(void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1;
-(void)presentedSubitemDidAppearAtURL:(id)arg1;
-(void)presentedSubitemDidChangeAtURL:(id)arg1;
-(void)presentedItemDidGainVersion:(id)arg1;
-(void)presentedItemDidLoseVersion:(id)arg1;
-(void)presentedItemDidChange;
-(NSURL *)primaryPresentedItemURL;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1;

@required
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;

@end

