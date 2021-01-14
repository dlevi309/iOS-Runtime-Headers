/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSURL, ICStoreRequestContext;

@interface _MPCMiniSINFEndpointInfo : NSObject {

	NSURL* _endpointURL;
	long long _maximumBatchSize;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,copy,readonly) NSURL * endpointURL;                            //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,readonly) long long maximumBatchSize;                          //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
@property (nonatomic,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
-(NSURL *)endpointURL;
-(ICStoreRequestContext *)requestContext;
-(long long)maximumBatchSize;
-(id)initWithEndpointURL:(id)arg1 maximumBatchSize:(long long)arg2 requestContext:(id)arg3 ;
@end

