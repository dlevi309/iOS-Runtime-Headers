/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSURL, NSOperationQueue, NSSet;


@protocol NSFilePresenter <NSObject>
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@optional
-(NSSet *)observedPresentedItemUbiquityAttributes;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1;
-(void)presentedSubitemDidChangeAtURL:(id)arg1;
-(void)presentedItemDidChange;
-(void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
-(void)presentedItemDidMoveToURL:(id)arg1;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
-(void)presentedItemDidGainVersion:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
-(void)presentedItemDidLoseVersion:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
-(void)presentedItemDidResolveConflictVersion:(id)arg1;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1;
-(void)presentedSubitemDidAppearAtURL:(id)arg1;
-(NSURL *)primaryPresentedItemURL;

@required
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;

@end

