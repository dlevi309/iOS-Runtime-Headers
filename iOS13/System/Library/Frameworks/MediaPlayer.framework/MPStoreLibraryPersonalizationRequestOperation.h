/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPStoreLibraryPersonalizationRequest;

@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPStoreLibraryPersonalizationRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPStoreLibraryPersonalizationRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                          //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2 ;
-(void)cancel;
-(void)execute;
-(void)setRequest:(MPStoreLibraryPersonalizationRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(MPStoreLibraryPersonalizationRequest *)request;
-(id)responseHandler;
@end

