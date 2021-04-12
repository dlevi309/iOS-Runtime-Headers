/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/


@interface SASProximitySessionTransport : NSObject {

	/*^block*/id _receivedDataBlock;

}

@property (copy) id receivedDataBlock;              //@synthesize receivedDataBlock=_receivedDataBlock - In the implementation block
-(void)invalidate;
-(void)activate;
-(void)setReceivedDataBlock:(id)arg1 ;
-(void)sendData:(id)arg1 response:(/*^block*/id)arg2 ;
-(id)receivedDataBlock;
@end

