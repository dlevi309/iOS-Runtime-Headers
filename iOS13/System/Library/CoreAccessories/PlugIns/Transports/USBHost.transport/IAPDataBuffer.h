/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
*/


@class AccessoryIAPInterface;

@interface IAPDataBuffer : NSObject {

	char* _dataBufferIn;
	unsigned long long _dataBufferInLen;
	AccessoryIAPInterface* _parentiAPInterface;

}

@property (assign,nonatomic,__weak) AccessoryIAPInterface * parentiAPInterface;              //@synthesize parentiAPInterface=_parentiAPInterface - In the implementation block
-(void)dealloc;
-(id)initWithiAPInterface:(id)arg1 ;
-(AccessoryIAPInterface *)parentiAPInterface;
-(void)setParentiAPInterface:(AccessoryIAPInterface *)arg1 ;
@end

