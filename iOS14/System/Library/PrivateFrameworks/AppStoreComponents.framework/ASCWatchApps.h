/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class ASCAppOfferStateCenter;

@interface ASCWatchApps : NSObject {

	ASCAppOfferStateCenter* _appOfferStateCenter;

}

@property (nonatomic,readonly) ASCAppOfferStateCenter * appOfferStateCenter;              //@synthesize appOfferStateCenter=_appOfferStateCenter - In the implementation block
+(id)sharedWatchApps;
-(id)reinstallAppWithID:(id)arg1 ;
-(id)reinstallSystemAppWithBundleID:(id)arg1 ;
-(id)initWithAppOfferStateCenter:(id)arg1 ;
-(ASCAppOfferStateCenter *)appOfferStateCenter;
@end

