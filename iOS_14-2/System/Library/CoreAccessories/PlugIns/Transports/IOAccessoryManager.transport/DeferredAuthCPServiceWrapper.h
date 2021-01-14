/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@class ACCTransportIOAccessoryManager;

@interface DeferredAuthCPServiceWrapper : NSObject {

	unsigned _service;
	ACCTransportIOAccessoryManager* _mgr;

}

@property (assign,nonatomic) unsigned service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) ACCTransportIOAccessoryManager * mgr;              //@synthesize mgr=_mgr - In the implementation block
-(ACCTransportIOAccessoryManager *)mgr;
-(void)setService:(unsigned)arg1 ;
-(void)setMgr:(ACCTransportIOAccessoryManager *)arg1 ;
-(unsigned)service;
-(id)initWithIOService:(unsigned)arg1 withMgr:(id)arg2 ;
@end

