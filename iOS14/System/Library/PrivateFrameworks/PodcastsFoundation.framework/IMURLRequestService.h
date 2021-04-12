/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/IMBaseStoreService.h>

@class NSURLRequest;

@interface IMURLRequestService : IMBaseStoreService {

	NSURLRequest* _mutableRequest;

}

@property (nonatomic,retain) id<NSURLSessionDelegate><AMSURLProtocolDelegate> urlSessionDelegate; 
@property (nonatomic,retain) NSURLRequest * mutableRequest;                                                    //@synthesize mutableRequest=_mutableRequest - In the implementation block
-(void)performRequest:(/*^block*/id)arg1 ;
-(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)urlSessionDelegate;
-(void)setUrlSessionDelegate:(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)arg1 ;
-(NSURLRequest *)mutableRequest;
-(void)setMutableRequest:(NSURLRequest *)arg1 ;
@end

