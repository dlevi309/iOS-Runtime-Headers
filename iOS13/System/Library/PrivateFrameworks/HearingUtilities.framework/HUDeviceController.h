/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDeviceUpdatesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUpdateDeviceBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)updateDeviceBlocks;
-(NSMutableDictionary *)deviceUpdatesDescription;
-(NSObject*<OS_dispatch_queue>)deviceUpdatesQueue;
-(id)hearingAidForDeviceID:(id)arg1 ;
-(BOOL)representsLocalDevices;
-(void)setDeviceUpdatesDescription:(NSMutableDictionary *)arg1 ;
-(void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2 ;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3 ;
-(void)registerForPropertyUpdates:(/*^block*/id)arg1 ;
-(void)stopPropertyUpdates;
@end

