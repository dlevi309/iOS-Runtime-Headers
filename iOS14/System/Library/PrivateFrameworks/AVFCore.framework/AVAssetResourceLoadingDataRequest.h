/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {

	AVAssetResourceLoadingDataRequestInternal* _dataRequest;

}

@property (nonatomic,readonly) long long requestedOffset; 
@property (nonatomic,readonly) long long requestedLength; 
@property (nonatomic,readonly) BOOL requestsAllDataToEndOfResource; 
@property (nonatomic,readonly) long long currentOffset; 
-(id)init;
-(id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 requestsAllDataToEndOfResource:(BOOL)arg4 canSupplyIncrementalDataImmediately:(BOOL)arg5 ;
-(id)description;
-(id)_loadingRequest;
-(void)respondWithData:(id)arg1 ;
-(long long)requestedLength;
-(long long)requestedOffset;
-(BOOL)requestsAllDataToEndOfResource;
-(CFDictionaryRef)_requestInfo;
-(long long)currentOffset;
-(void)dealloc;
@end

