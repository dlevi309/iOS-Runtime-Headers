/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLPhotoLibraryBundle.h>
#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, PLBackgroundJobService, PLLazyObject, NSString;

@interface PLServerPhotoLibraryBundle : PLPhotoLibraryBundle <NSFilePresenter> {

	Class _libraryServicesDelegateClass;
	PLBackgroundJobService* _backgroundJobService;
	NSOperationQueue* _presentedItemOperationQueue;
	PLLazyObject* _lazyTouchCoalescer;

}

@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)touch;
-(void)close;
-(void)unbindAssetsdService:(id)arg1 ;
-(void)clearShutdownReason;
-(id)newLibraryServicesManager;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2 backgroundJobService:(id)arg3 libraryServicesDelegateClass:(Class)arg4 ;
-(id)_newTouchCoalescer;
-(id)newBoundAssetsdServicesTable;
-(BOOL)bindAssetsdService:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldRelinquishToWriterOfSubitemAtURL:(id)arg1 ;
-(id)newAssetsdClient;
-(void)invalidateClientConnectionsWithReason:(id)arg1 ;
-(id)boundAssetsdServices;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1 ;
-(void)shutdownWithReason:(id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_touch;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)newChangePublisher;
@end

