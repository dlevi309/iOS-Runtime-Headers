/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@class FTMessageDelivery;

@interface StickerRefreshDeliveryController : NSObject {

	FTMessageDelivery* _messageDelivery;

}

@property (nonatomic,retain) FTMessageDelivery * messageDelivery;              //@synthesize messageDelivery=_messageDelivery - In the implementation block
+(id)sharedInstance;
-(id)init;
-(FTMessageDelivery *)messageDelivery;
-(void)setMessageDelivery:(FTMessageDelivery *)arg1 ;
-(void)dealloc;
-(void)sendFTMessage:(id)arg1 attempts:(unsigned long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_sendFTMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

