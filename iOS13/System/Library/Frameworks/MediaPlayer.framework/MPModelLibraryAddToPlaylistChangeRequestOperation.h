/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setResponseHandler:(id)arg1 ;
-(MPModelLibraryAddToPlaylistChangeRequest *)request;
-(id)responseHandler;
-(BOOL)_isCloudLibraryEnabled;
-(void)_updateCloudLibraryForPlaylist:(id)arg1 ;
@end

