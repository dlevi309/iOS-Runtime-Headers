/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@class FTMessageDelivery;

@interface StickerRefreshDeliveryController : NSObject {

	FTMessageDelivery* _messageDelivery;

}

@property (nonatomic,retain) FTMessageDelivery * messageDelivery;              //@synthesize messageDelivery=_messageDelivery - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)sendFTMessage:(id)arg1 attempts:(unsigned long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_sendFTMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(FTMessageDelivery *)messageDelivery;
-(void)setMessageDelivery:(FTMessageDelivery *)arg1 ;
@end

