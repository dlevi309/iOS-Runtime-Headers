/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {

	AVAssetResourceLoadingDataRequestInternal* _dataRequest;

}

@property (nonatomic,readonly) long long requestedOffset; 
@property (nonatomic,readonly) long long requestedLength; 
@property (nonatomic,readonly) BOOL requestsAllDataToEndOfResource; 
@property (nonatomic,readonly) long long currentOffset; 
-(id)init;
-(void)dealloc;
-(id)description;
-(long long)currentOffset;
-(void)respondWithData:(id)arg1 ;
-(long long)requestedOffset;
-(BOOL)requestsAllDataToEndOfResource;
-(long long)requestedLength;
-(CFDictionaryRef)_requestInfo;
-(id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 requestsAllDataToEndOfResource:(BOOL)arg4 canSupplyIncrementalDataImmediately:(BOOL)arg5 ;
-(id)_loadingRequest;
@end

