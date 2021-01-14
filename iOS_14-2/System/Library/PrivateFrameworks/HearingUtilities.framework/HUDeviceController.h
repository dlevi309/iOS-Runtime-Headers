/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/AXHARemoteUpdateProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray, NSString;

@interface HUDeviceController : NSObject <AXHARemoteUpdateProtocol> {

	NSObject*<OS_dispatch_queue> _deviceUpdatesQueue;
	NSMutableDictionary* _deviceUpdatesDescription;
	NSMutableArray* _updateDeviceBlocks;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> deviceUpdatesQueue;              //@synthesize deviceUpdatesQueue=_deviceUpdatesQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceUpdatesDescription;               //@synthesize deviceUpdatesDescription=_deviceUpdatesDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateDeviceBlocks;                          //@synthesize updateDeviceBlocks=_updateDeviceBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(id)hearingAidForDeviceID:(id)arg1 ;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3 ;
-(BOOL)representsLocalDevices;
-(void)setDeviceUpdatesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUpdateDeviceBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)updateDeviceBlocks;
-(NSMutableDictionary *)deviceUpdatesDescription;
-(NSObject*<OS_dispatch_queue>)deviceUpdatesQueue;
-(void)setDeviceUpdatesDescription:(NSMutableDictionary *)arg1 ;
-(void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2 ;
-(void)registerForPropertyUpdates:(/*^block*/id)arg1 ;
-(void)stopPropertyUpdates;
@end

