/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class AVAssetResourceLoadingRequest, NSNumber, NSDictionary, NSURL;

@interface TVPResourceLoadingRequest : NSObject {

	AVAssetResourceLoadingRequest* _loadingRequest;

}

@property (nonatomic,readonly) AVAssetResourceLoadingRequest * loadingRequest;              //@synthesize loadingRequest=_loadingRequest - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * avRequestID; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) BOOL isCancelled; 
-(NSDictionary *)dictionaryRepresentation;
-(id)init;
-(void)finishLoadingWithError:(id)arg1 ;
-(NSURL *)URL;
-(BOOL)isCancelled;
-(AVAssetResourceLoadingRequest *)loadingRequest;
-(id)initWithAssetResourceLoadingRequest:(id)arg1 ;
-(void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 renewalDate:(id)arg3 redirect:(id)arg4 ;
-(void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3 ;
-(NSNumber *)avRequestID;
@end

