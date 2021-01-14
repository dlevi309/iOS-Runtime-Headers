/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_lyricsURLForURLBagDictionary:(id)arg1 ;
+(BOOL)supportsLyricsForURLBagDictionary:(id)arg1 ;
-(void)execute;
-(void)setRequest:(MPStoreLyricsRequest *)arg1 ;
-(id)responseHandler;
-(MPStoreLyricsRequest *)request;
-(void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 allowingAuthentication:(BOOL)arg3 ;
-(void)setResponseHandler:(id)arg1 ;
@end

