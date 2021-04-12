/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <libobjc.A.dylib/BLUIHostServiceProtocol.h>

@protocol BLDownloadQueueUIManagerProtocol;
@class BLDownloadQueue, BLRequest;

@interface BLUIHostServiceProxy : NSObject <BLUIHostServiceProtocol> {

	BLDownloadQueue* _downloadQueue;
	BLRequest* _request;
	id<BLDownloadQueueUIManagerProtocol> _uiManagerDelegate;

}

@property (__weak,readonly) BLDownloadQueue * downloadQueue;                                     //@synthesize downloadQueue=_downloadQueue - In the implementation block
@property (__weak,readonly) BLRequest * request;                                                 //@synthesize request=_request - In the implementation block
@property (__weak,readonly) id<BLDownloadQueueUIManagerProtocol> uiManagerDelegate;              //@synthesize uiManagerDelegate=_uiManagerDelegate - In the implementation block
-(id)initWithUIManager:(id)arg1 forRequest:(id)arg2 inDownloadQueue:(id)arg3 ;
-(BLRequest *)request;
-(void)handleDialogRequest:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)handleAuthenticateRequest:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)handleEngagementRequest:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(BLDownloadQueue *)downloadQueue;
-(id<BLDownloadQueueUIManagerProtocol>)uiManagerDelegate;
-(id)_topMostViewController;
@end

