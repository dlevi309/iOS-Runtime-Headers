/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(id)init;
-(NSError *)responseError;
-(NSString *)buyParameters;
-(void)main;
-(unsigned long long)endpointType;
-(id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 ;
-(BOOL)isStreamingRental;
-(id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 shouldUseStreamingRedownload:(BOOL)arg3 ;
-(MPStoreRedownloadProductResponse *)redownloadProductResponse;
-(void)setStreamingRental:(BOOL)arg1 ;
-(void)cancel;
@end

