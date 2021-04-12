/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
*/


@class FTMessageDelivery;

@interface IMTransferAgentDeliveryController : NSObject {

	FTMessageDelivery* _messageDelivery;

}

@property (nonatomic,retain) FTMessageDelivery * messageDelivery;              //@synthesize messageDelivery=_messageDelivery - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(FTMessageDelivery *)messageDelivery;
-(void)setMessageDelivery:(FTMessageDelivery *)arg1 ;
-(void)sendFTMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

