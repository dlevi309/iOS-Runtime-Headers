/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

