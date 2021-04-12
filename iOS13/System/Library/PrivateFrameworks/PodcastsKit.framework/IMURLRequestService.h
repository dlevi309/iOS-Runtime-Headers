/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/IMBaseStoreService.h>

@class NSURLRequest;

@interface IMURLRequestService : IMBaseStoreService {

	NSURLRequest* _mutableRequest;

}

@property (nonatomic,retain) id<NSURLSessionDelegate><AMSURLProtocolDelegate> urlSessionDelegate; 
@property (nonatomic,retain) NSURLRequest * mutableRequest;                                                    //@synthesize mutableRequest=_mutableRequest - In the implementation block
-(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)urlSessionDelegate;
-(void)performRequest:(/*^block*/id)arg1 ;
-(void)setUrlSessionDelegate:(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)arg1 ;
-(NSURLRequest *)mutableRequest;
-(void)setMutableRequest:(NSURLRequest *)arg1 ;
@end

