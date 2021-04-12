/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPCPlaybackHistoryRecordChangeRequest;

@interface MPCPlaybackHistoryRecordChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPCPlaybackHistoryRecordChangeRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPCPlaybackHistoryRecordChangeRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setRequest:(MPCPlaybackHistoryRecordChangeRequest *)arg1 ;
-(id)responseHandler;
-(MPCPlaybackHistoryRecordChangeRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
-(void)_finishChangeRequestOperationWithError:(id)arg1 ;
@end

