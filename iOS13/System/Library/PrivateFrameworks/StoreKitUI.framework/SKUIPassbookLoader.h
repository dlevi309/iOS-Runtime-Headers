/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/PKAddPassesViewControllerDelegate.h>

@protocol SKUIPassbookLoaderDelegate;
@class SKUIClientContext, NSOperationQueue, NSString;

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	id<SKUIPassbookLoaderDelegate> _delegate;
	long long _loadCount;
	NSOperationQueue* _operationQueue;

}

@property (assign,nonatomic,__weak) id<SKUIPassbookLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUIPassbookLoaderDelegate>)delegate;
-(void)setDelegate:(id<SKUIPassbookLoaderDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)loadPassWithURL:(id)arg1 ;
-(void)_loadPassWithURL:(id)arg1 ;
-(void)_sendDidFinishIfFinished;
-(void)_didLoadWithPass:(id)arg1 error:(id)arg2 ;
@end

