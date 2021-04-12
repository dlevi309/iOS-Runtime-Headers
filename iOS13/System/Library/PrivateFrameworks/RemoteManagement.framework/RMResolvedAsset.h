/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class RMAsset, NSError;

@interface RMResolvedAsset : NSObject {

	RMAsset* _asset;
	NSError* _error;

}

@property (nonatomic,readonly) RMAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(RMAsset *)asset;
-(id)initWithAsset:(id)arg1 error:(id)arg2 ;
@end

