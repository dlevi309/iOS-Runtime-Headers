/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPStoreRedownloadProductResponse, NSError, ICMediaRedownloadRequest, NSString;

@interface MPStoreRedownloadProductOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MPStoreRedownloadProductResponse* _redownloadProductResponse;
	NSError* _responseError;
	BOOL _shouldUseStreamingRedownload;
	ICMediaRedownloadRequest* _redownloadRequest;
	BOOL _streamingRental;
	NSString* _buyParameters;
	unsigned long long _endpointType;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;

}

@property (nonatomic,copy,readonly) NSString * buyParameters;                                             //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,readonly) unsigned long long endpointType;                                           //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,readonly) MPStoreRedownloadProductResponse * redownloadProductResponse; 
@property (nonatomic,copy,readonly) NSError * responseError; 
@property (assign,getter=isStreamingRental,nonatomic) BOOL streamingRental;                               //@synthesize streamingRental=_streamingRental - In the implementation block
@property (nonatomic,copy) NSString * requestingBundleIdentifier;                                         //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestingBundleVersion;                                            //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
-(id)init;
-(void)cancel;
-(void)main;
-(NSError *)responseError;
-(unsigned long long)endpointType;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(NSString *)buyParameters;
-(id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 ;
-(id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 shouldUseStreamingRedownload:(BOOL)arg3 ;
-(MPStoreRedownloadProductResponse *)redownloadProductResponse;
-(BOOL)isStreamingRental;
-(void)setStreamingRental:(BOOL)arg1 ;
@end

