/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelLibraryDeleteEntityChangeRequest;

@interface MPModelLibraryDeleteEntityChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPModelLibraryDeleteEntityChangeRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibraryDeleteEntityChangeRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setRequest:(MPModelLibraryDeleteEntityChangeRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(MPModelLibraryDeleteEntityChangeRequest *)request;
-(id)responseHandler;
-(void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 mediaLibrary:(id)arg3 ;
-(void)_deleteItems:(id)arg1 withLibrary:(id)arg2 ;
-(BOOL)_isCloudLibraryEnabled;
@end

