/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@class NSMapTable;

@interface RMSMediaRemoteDeviceController : NSObject {

	NSMapTable* _devices;

}
+(id)sharedController;
-(id)init;
-(void)addDevice:(void*)arg1 ;
-(void)removeDevice:(void*)arg1 ;
-(void)discoverDeviceWithUniqueIdentifier:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_keyWithDevice:(void*)arg1 ;
-(void*)deviceForUniqueIdentifier:(id)arg1 ;
@end

