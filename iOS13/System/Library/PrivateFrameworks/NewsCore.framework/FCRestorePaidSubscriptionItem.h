/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCRestorePaidSubscriptionItem : NSObject {

	BOOL _isNewsAppPurchase;
	NSString* _channelID;

}

@property (nonatomic,readonly) NSString * channelID;                //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) BOOL isNewsAppPurchase;              //@synthesize isNewsAppPurchase=_isNewsAppPurchase - In the implementation block
-(BOOL)isNewsAppPurchase;
-(NSString *)channelID;
-(id)initWithChannelID:(id)arg1 isNewsAppPurchase:(BOOL)arg2 ;
@end

