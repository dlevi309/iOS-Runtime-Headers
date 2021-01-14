/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(void)setRequest:(MPStoreLibraryPersonalizationRequest *)arg1 ;
-(id)responseHandler;
-(MPStoreLibraryPersonalizationRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
-(void)cancel;
@end

