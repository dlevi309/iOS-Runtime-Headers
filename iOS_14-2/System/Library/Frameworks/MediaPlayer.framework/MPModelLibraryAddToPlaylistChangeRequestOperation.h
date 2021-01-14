/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelLibraryAddToPlaylistChangeRequest;

@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPModelLibraryAddToPlaylistChangeRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibraryAddToPlaylistChangeRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                              //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setRequest:(MPModelLibraryAddToPlaylistChangeRequest *)arg1 ;
-(id)responseHandler;
-(MPModelLibraryAddToPlaylistChangeRequest *)request;
-(BOOL)_isCloudLibraryEnabled;
-(void)setResponseHandler:(id)arg1 ;
-(void)_updateCloudLibraryForPlaylist:(id)arg1 ;
@end

