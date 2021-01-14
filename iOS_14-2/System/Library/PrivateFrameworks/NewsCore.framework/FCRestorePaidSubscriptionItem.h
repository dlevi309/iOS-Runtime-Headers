/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCRestorePaidSubscriptionItem : NSObject {

	BOOL _isNewsAppPurchase;
	NSString* _channelID;

}

@property (nonatomic,readonly) NSString * channelID;                //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) BOOL isNewsAppPurchase;              //@synthesize isNewsAppPurchase=_isNewsAppPurchase - In the implementation block
-(NSString *)channelID;
-(BOOL)isNewsAppPurchase;
-(id)initWithChannelID:(id)arg1 isNewsAppPurchase:(BOOL)arg2 ;
@end

