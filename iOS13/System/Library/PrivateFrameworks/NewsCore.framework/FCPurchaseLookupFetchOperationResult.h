/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)channelIDsByPurchaseID;
-(void)setChannelIDsByPurchaseID:(NSDictionary *)arg1 ;
-(NSDictionary *)bundleChannelIDsByPurchaseID;
-(void)setBundleChannelIDsByPurchaseID:(NSDictionary *)arg1 ;
@end

