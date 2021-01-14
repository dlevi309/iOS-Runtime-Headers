/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(id)init;
-(void)setRequest:(MPModelLibrarySearchRequest *)arg1 ;
-(id)responseHandler;
-(MPModelLibrarySearchRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
-(void)cancel;
@end

