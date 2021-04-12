/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class RMAsset, NSError;

@interface RMResolvedAsset : NSObject {

	RMAsset* _asset;
	NSError* _error;

}

@property (nonatomic,readonly) RMAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithAsset:(id)arg1 error:(id)arg2 ;
-(RMAsset *)asset;
-(NSError *)error;
@end

