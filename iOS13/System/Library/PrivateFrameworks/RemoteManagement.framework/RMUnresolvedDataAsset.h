/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <libobjc.A.dylib/RMUnresolvedAsset.h>

@class NSString, RMAsset, NSDictionary;

@interface RMUnresolvedDataAsset : NSObject <RMUnresolvedAsset> {

	RMAsset* _asset;
	NSDictionary* _queryParameters;

}

@property (nonatomic,retain) RMAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
-(NSString *)identifier;
-(RMAsset *)asset;
-(void)setAsset:(RMAsset *)arg1 ;
-(NSDictionary *)queryParameters;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)resolveWithAssetResolver:(id)arg1 statusUpdater:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAsset:(id)arg1 queryParameters:(id)arg2 ;
@end

