/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCContentContext;
@class FCFetchedValueManager;

@interface FCVanityURLRedirectService : NSObject {

	FCFetchedValueManager* _vanityURLMappingManager;
	id<FCContentContext> _contentContext;

}

@property (nonatomic,readonly) id<FCContentContext> contentContext;                          //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) FCFetchedValueManager * vanityURLMappingManager;              //@synthesize vanityURLMappingManager=_vanityURLMappingManager - In the implementation block
-(void)updateUnderlyingMappingWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id<FCContentContext>)contentContext;
-(id)initWithContentContext:(id)arg1 ;
-(id)destinationURLForURL:(id)arg1 ;
-(id)_destinationURLForURL:(id)arg1 ;
-(FCFetchedValueManager *)vanityURLMappingManager;
-(BOOL)hasRedirectForURL:(id)arg1 ;
-(void)resolveURL:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)acquireHoldTokenOnUnderlyingAssets;
@end

