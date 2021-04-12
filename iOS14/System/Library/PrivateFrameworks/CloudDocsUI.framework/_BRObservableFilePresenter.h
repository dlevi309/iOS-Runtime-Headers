/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, BRObservableFile, NSString;

@interface _BRObservableFilePresenter : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;
	BRObservableFile* _parent;

}

@property (copy) NSURL * presentedItemURL;                                         //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain) NSOperationQueue * presentedItemOperationQueue;                 //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (assign,nonatomic,__weak) BRObservableFile * parent;                     //@synthesize parent=_parent - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(BRObservableFile *)parent;
-(void)setParent:(BRObservableFile *)arg1 ;
-(void)presentedItemUbiquityDidChange;
-(void)presentedItemDidChange;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPresentedItemURL:(NSURL *)arg1 ;
-(void)setPresentedItemOperationQueue:(NSOperationQueue *)arg1 ;
@end

