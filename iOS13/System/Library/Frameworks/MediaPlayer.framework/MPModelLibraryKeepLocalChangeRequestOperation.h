/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelLibraryKeepLocalChangeRequest;

@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	/*^block*/id _responseHandler;
	MPModelLibraryKeepLocalChangeRequest* _request;

}

@property (nonatomic,copy) id responseHandler;                                          //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) MPModelLibraryKeepLocalChangeRequest * request;              //@synthesize request=_request - In the implementation block
-(void)execute;
-(void)setRequest:(MPModelLibraryKeepLocalChangeRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(MPModelLibraryKeepLocalChangeRequest *)request;
-(id)responseHandler;
-(void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 keepLocal:(long long)arg3 mediaLibrary:(id)arg4 ;
-(void)_handleKeepLocalUpdateStatus:(long long)arg1 forLibraryIdentifier:(long long)arg2 mediaType:(long long)arg3 completedWithError:(id)arg4 ;
@end

