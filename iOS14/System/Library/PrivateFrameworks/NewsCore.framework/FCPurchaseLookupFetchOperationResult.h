/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary;

@interface FCPurchaseLookupFetchOperationResult : NSObject {

	NSDictionary* _channelIDsByPurchaseID;
	NSDictionary* _bundleChannelIDsByPurchaseID;

}

@property (nonatomic,copy) NSDictionary * channelIDsByPurchaseID;                    //@synthesize channelIDsByPurchaseID=_channelIDsByPurchaseID - In the implementation block
@property (nonatomic,copy) NSDictionary * bundleChannelIDsByPurchaseID;              //@synthesize bundleChannelIDsByPurchaseID=_bundleChannelIDsByPurchaseID - In the implementation block
-(id)initWithChannelIDsByPurchaseID:(id)arg1 bundleChannelIDsByPurchaseID:(id)arg2 ;
-(void)setChannelIDsByPurchaseID:(NSDictionary *)arg1 ;
-(NSDictionary *)bundleChannelIDsByPurchaseID;
-(void)setBundleChannelIDsByPurchaseID:(NSDictionary *)arg1 ;
-(NSDictionary *)channelIDsByPurchaseID;
@end

