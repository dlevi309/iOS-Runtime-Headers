/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@class ACCTransportIOAccessoryManager;

@interface DeferredEAServiceWrapper : NSObject {

	unsigned _service;
	ACCTransportIOAccessoryManager* _mgr;

}

@property (assign,nonatomic) unsigned service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) ACCTransportIOAccessoryManager * mgr;              //@synthesize mgr=_mgr - In the implementation block
-(unsigned)service;
-(void)setService:(unsigned)arg1 ;
-(void)setMgr:(ACCTransportIOAccessoryManager *)arg1 ;
-(id)initWithIOService:(unsigned)arg1 withMgr:(id)arg2 ;
-(ACCTransportIOAccessoryManager *)mgr;
@end

