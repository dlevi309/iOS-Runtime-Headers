/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

