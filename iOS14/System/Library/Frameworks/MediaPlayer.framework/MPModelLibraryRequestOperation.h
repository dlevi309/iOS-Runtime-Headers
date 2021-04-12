/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(NSOperationQueue *)serialAccessQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)_sectionProperties;
-(void)setRequest:(MPModelLibraryRequest *)arg1 ;
-(void)_executeLegacyRequest;
-(id)responseHandler;
-(MPModelLibraryRequest *)request;
-(void)_executeRequest;
-(id)_itemProperties;
-(void)setResponseHandler:(id)arg1 ;
-(id)_libraryView;
-(void)_sanityCheckRequest;
-(void)setSerialAccessQueue:(NSOperationQueue *)arg1 ;
@end

