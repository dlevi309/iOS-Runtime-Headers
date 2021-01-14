/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class ASCArtworkFetcher, ASCLockupFetcher, ASCAppOfferStateCenter;

@interface ASCPresenterContext : NSObject {

	ASCArtworkFetcher* _artworkFetcher;
	ASCLockupFetcher* _lockupFetcher;
	ASCAppOfferStateCenter* _appOfferStateCenter;

}

@property (nonatomic,readonly) ASCArtworkFetcher * artworkFetcher;                        //@synthesize artworkFetcher=_artworkFetcher - In the implementation block
@property (nonatomic,readonly) ASCLockupFetcher * lockupFetcher;                          //@synthesize lockupFetcher=_lockupFetcher - In the implementation block
@property (nonatomic,readonly) ASCAppOfferStateCenter * appOfferStateCenter;              //@synthesize appOfferStateCenter=_appOfferStateCenter - In the implementation block
+(id)sharedContext;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(ASCLockupFetcher *)lockupFetcher;
-(ASCArtworkFetcher *)artworkFetcher;
-(ASCAppOfferStateCenter *)appOfferStateCenter;
-(id)initWithArtworkFetcher:(id)arg1 lockupFetcher:(id)arg2 appOfferStateCenter:(id)arg3 ;
@end

