/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol SFDownloadFileDelegate;
@class NSURL, NSOperationQueue, NSSet, NSData, NSString;

@interface SFDownloadFile : NSObject <NSFilePresenter> {

	BOOL _invalidated;
	BOOL _usingSecurityScopedURL;
	BOOL _suspended;
	id<SFDownloadFileDelegate> _delegate;
	NSURL* _URL;
	NSData* _bookmarkData;

}

@property (assign,nonatomic,__weak) id<SFDownloadFileDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSData * bookmarkData;                                    //@synthesize bookmarkData=_bookmarkData - In the implementation block
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
-(id)initWithURL:(id)arg1 ;
-(id<SFDownloadFileDelegate>)delegate;
-(NSData *)bookmarkData;
-(void)_suspend;
-(void)setDelegate:(id<SFDownloadFileDelegate>)arg1 ;
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 ;
-(id)initWithBookmarkData:(id)arg1 ;
-(NSURL *)URL;
-(void)presentedItemDidChange;
-(void)invalidate;
-(void)_resume;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

