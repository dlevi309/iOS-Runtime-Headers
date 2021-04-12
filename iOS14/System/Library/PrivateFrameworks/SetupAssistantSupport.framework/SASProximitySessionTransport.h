/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/


@interface SASProximitySessionTransport : NSObject {

	/*^block*/id _receivedDataBlock;

}

@property (copy) id receivedDataBlock;              //@synthesize receivedDataBlock=_receivedDataBlock - In the implementation block
-(void)activate;
-(void)invalidate;
-(void)setReceivedDataBlock:(id)arg1 ;
-(void)sendData:(id)arg1 response:(/*^block*/id)arg2 ;
-(id)receivedDataBlock;
@end

