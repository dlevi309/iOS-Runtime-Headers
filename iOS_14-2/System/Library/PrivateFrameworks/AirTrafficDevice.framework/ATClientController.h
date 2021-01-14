/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


#import <AirTrafficDevice/AirTrafficDevice-Structs.h>
@class NSDictionary;

@interface ATClientController : NSObject {

	NSDictionary* _clientMap;
	CFDictionaryRef _queueMap;

}
+(id)sharedInstance;
+(id)controllerForDataclasses:(id)arg1 ;
-(id)allClients;
-(void)resetQueues;
-(id)queueForClient:(id)arg1 ;
-(id)clientForDataclass:(id)arg1 ;
-(BOOL)_loadClientsForDataclasses:(id)arg1 ;
-(void)waitToDrain;
-(void)dealloc;
@end

