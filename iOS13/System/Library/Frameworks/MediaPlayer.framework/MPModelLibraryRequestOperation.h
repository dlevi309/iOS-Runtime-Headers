/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryRequest, NSOperationQueue;

@interface MPModelLibraryRequestOperation : MPAsyncOperation {

	MPModelLibraryRequest* _request;
	/*^block*/id _responseHandler;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _serialAccessQueue;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialAccessQueue;              //@synthesize serialAccessQueue=_serialAccessQueue - In the implementation block
@property (nonatomic,copy) MPModelLibraryRequest * request;                     //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)execute;
-(void)setRequest:(MPModelLibraryRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(MPModelLibraryRequest *)request;
-(id)responseHandler;
-(id)_itemProperties;
-(id)_libraryView;
-(void)_executeLegacyRequest;
-(void)_executeRequest;
-(void)_sanityCheckRequest;
-(id)_sectionProperties;
-(NSOperationQueue *)serialAccessQueue;
-(void)setSerialAccessQueue:(NSOperationQueue *)arg1 ;
@end

