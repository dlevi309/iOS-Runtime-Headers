/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isCancelled;
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)URL;
-(void)finishLoadingWithError:(id)arg1 ;
-(AVAssetResourceLoadingRequest *)loadingRequest;
-(id)initWithAssetResourceLoadingRequest:(id)arg1 ;
-(void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 renewalDate:(id)arg3 redirect:(id)arg4 ;
-(void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3 ;
-(NSNumber *)avRequestID;
@end

