/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(BRObservableFile *)parent;
-(void)setParent:(BRObservableFile *)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemUbiquityDidChange;
-(void)setPresentedItemURL:(NSURL *)arg1 ;
-(void)setPresentedItemOperationQueue:(NSOperationQueue *)arg1 ;
@end

