/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPModelLibrarySearchRequest;

@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	shared_ptr<mlcore::LocalizedSearchQuery>* _runningQuery;
	MPModelLibrarySearchRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibrarySearchRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                 //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)init;
-(void)cancel;
-(void)execute;
-(void)setRequest:(MPModelLibrarySearchRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(MPModelLibrarySearchRequest *)request;
-(id)responseHandler;
@end

