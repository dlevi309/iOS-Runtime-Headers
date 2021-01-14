/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
*/


@class FTMessageDelivery;

@interface IMTransferAgentDeliveryController : NSObject {

	FTMessageDelivery* _messageDelivery;

}

@property (nonatomic,retain) FTMessageDelivery * messageDelivery;              //@synthesize messageDelivery=_messageDelivery - In the implementation block
+(id)sharedInstance;
-(id)init;
-(FTMessageDelivery *)messageDelivery;
-(void)setMessageDelivery:(FTMessageDelivery *)arg1 ;
-(void)dealloc;
-(void)sendFTMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

