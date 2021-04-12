/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@protocol PFLNetworkHandler;
@interface PFLNetworkResourceManager : NSObject {

	id<PFLNetworkHandler> _networkHandler;

}

@property (nonatomic,readonly) id<PFLNetworkHandler> networkHandler;              //@synthesize networkHandler=_networkHandler - In the implementation block
-(id<PFLNetworkHandler>)networkHandler;
-(id)initWithNetworkHandler:(id)arg1 ;
-(void)fetchConfigurationWithHandler:(/*^block*/id)arg1 ;
-(id)_saveModel:(id)arg1 fromLocation:(id)arg2 ;
-(void)prepareModelResourceForTask:(id)arg1 modelIdentifier:(id)arg2 fromTemporaryLocation:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleResultsForIdentifier:(id)arg1 results:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

