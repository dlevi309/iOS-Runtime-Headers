/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSURLProtocolClient;
@class NSURLRequest, NSCachedURLResponse;

@interface NSURLProtocolInternal : NSObject {

	id<NSURLProtocolClient> client;
	NSURLRequest* request;
	NSCachedURLResponse* cachedResponse;

}
-(void)dealloc;
@end

