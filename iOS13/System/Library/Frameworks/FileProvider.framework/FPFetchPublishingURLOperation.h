/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>
#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, FPItem, NSProgress, NSString;

@interface FPFetchPublishingURLOperation : FPActionOperation <NSFilePresenter> {

	FPItem* _item;
	BOOL _isFilePresenter;
	NSOperationQueue* _operationQueue;
	NSURL* _itemURL;
	NSProgress* _remoteCancellableProgress;
	NSProgress* _itemUploadProgress;
	/*^block*/id _fetchCompletionBlock;
	/*^block*/id __t_filePresenterStarted;

}

@property (nonatomic,copy) id _t_filePresenterStarted;                                   //@synthesize _t_filePresenterStarted=__t_filePresenterStarted - In the implementation block
@property (nonatomic,copy) id fetchCompletionBlock;                                      //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(void)cancel;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(NSSet *)observedPresentedItemUbiquityAttributes;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithItem:(id)arg1 ;
-(id)fetchCompletionBlock;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)actionMain;
-(void)_tryFetchingSharingURL;
-(id)_t_filePresenterStarted;
-(void)set_t_filePresenterStarted:(id)arg1 ;
-(void)_setupFilePresenterAndWaitForUpload;
@end

