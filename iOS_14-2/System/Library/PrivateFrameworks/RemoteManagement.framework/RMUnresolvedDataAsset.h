/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAsset:(RMAsset *)arg1 ;
-(RMAsset *)asset;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)queryParameters;
-(NSString *)identifier;
-(void)resolveWithAssetResolver:(id)arg1 statusUpdater:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAsset:(id)arg1 queryParameters:(id)arg2 ;
@end

