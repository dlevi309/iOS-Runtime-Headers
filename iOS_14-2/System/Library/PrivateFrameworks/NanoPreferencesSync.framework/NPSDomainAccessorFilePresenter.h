/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol NPSDomainAccessorFilePresenterDelegate, OS_dispatch_queue;
@class NSURL, NSOperationQueue, NSSet, NSObject, NSString;

@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter> {

	BOOL _current;
	NSURL* _domainURL;
	id<NPSDomainAccessorFilePresenterDelegate> _delegate;
	NSOperationQueue* _presenterOperationQueue;
	NSObject*<OS_dispatch_queue> _presenterUnderlyingQueue;

}

@property (nonatomic,retain) NSURL * domainURL;                                                         //@synthesize domainURL=_domainURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * presenterOperationQueue;                                //@synthesize presenterOperationQueue=_presenterOperationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> presenterUnderlyingQueue;                     //@synthesize presenterUnderlyingQueue=_presenterUnderlyingQueue - In the implementation block
@property (assign,getter=isCurrent,nonatomic) BOOL current;                                             //@synthesize current=_current - In the implementation block
@property (nonatomic,__weak,readonly) id<NPSDomainAccessorFilePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
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
-(id<NPSDomainAccessorFilePresenterDelegate>)delegate;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(BOOL)presentedItemNeedsWatching;
-(id)initWithDelegate:(id)arg1 domainURL:(id)arg2 ;
-(void)setDomainURL:(NSURL *)arg1 ;
-(id)synchronizeForReadingOnly:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(NSOperationQueue *)presenterOperationQueue;
-(void)setPresenterOperationQueue:(NSOperationQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)presenterUnderlyingQueue;
-(void)setPresenterUnderlyingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)domainURL;
-(void)setCurrent:(BOOL)arg1 ;
-(BOOL)isCurrent;
-(void)dealloc;
@end

