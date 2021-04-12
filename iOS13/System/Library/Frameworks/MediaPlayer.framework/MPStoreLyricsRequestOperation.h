/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPStoreLyricsRequest;

@interface MPStoreLyricsRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPStoreLyricsRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPStoreLyricsRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                          //@synthesize responseHandler=_responseHandler - In the implementation block
+(BOOL)supportsLyricsForURLBagDictionary:(id)arg1 ;
+(id)_lyricsURLForURLBagDictionary:(id)arg1 ;
-(void)execute;
-(void)setRequest:(MPStoreLyricsRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(MPStoreLyricsRequest *)request;
-(id)responseHandler;
-(void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 allowingAuthentication:(BOOL)arg3 ;
@end

