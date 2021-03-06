/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteHID.framework/RemoteHID
*/

#import <RemoteHID/RemoteHID-Structs.h>
#import <HID/HIDUserDevice.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSData, HIDRemoteDeviceServer;

@interface HIDRemoteDevice : HIDUserDevice {

	BOOL _waitForReport;
	int _lastSetReportStatus;
	unsigned _handleReportCount;
	unsigned _handleReportError;
	unsigned _intNotify;
	id _endpoint;
	unsigned long long _deviceID;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSData* _lastGetReport;
	IONotificationPortRef _intPort;
	HIDRemoteDeviceServer* _server;

}

@property (retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (retain) NSData * lastGetReport;                                  //@synthesize lastGetReport=_lastGetReport - In the implementation block
@property (assign) int lastSetReportStatus;                                 //@synthesize lastSetReportStatus=_lastSetReportStatus - In the implementation block
@property (assign) BOOL waitForReport;                                      //@synthesize waitForReport=_waitForReport - In the implementation block
@property (assign) unsigned handleReportCount;                              //@synthesize handleReportCount=_handleReportCount - In the implementation block
@property (assign) unsigned handleReportError;                              //@synthesize handleReportError=_handleReportError - In the implementation block
@property (assign) unsigned intNotify;                                      //@synthesize intNotify=_intNotify - In the implementation block
@property (assign) IONotificationPortRef intPort;                           //@synthesize intPort=_intPort - In the implementation block
@property (__weak) HIDRemoteDeviceServer * server;                          //@synthesize server=_server - In the implementation block
@property (retain) id endpoint;                                             //@synthesize endpoint=_endpoint - In the implementation block
@property (assign) unsigned long long deviceID;                             //@synthesize deviceID=_deviceID - In the implementation block
-(void)setDeviceID:(unsigned long long)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(unsigned long long)deviceID;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setServer:(HIDRemoteDeviceServer *)arg1 ;
-(void)setEndpoint:(id)arg1 ;
-(id)endpoint;
-(id)description;
-(HIDRemoteDeviceServer *)server;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)cancel;
-(IONotificationPortRef)intPort;
-(BOOL)waitForReport;
-(void)setLastSetReportStatus:(int)arg1 ;
-(void)setLastGetReport:(NSData *)arg1 ;
-(unsigned)handleReportCount;
-(unsigned)handleReportError;
-(unsigned)intNotify;
-(int)setReportHandler:(int)arg1 reportID:(unsigned char)arg2 status:(int)arg3 ;
-(int)getReportHandler:(int)arg1 reportID:(unsigned char)arg2 report:(char*)arg3 reportLength:(unsigned long long)arg4 ;
-(NSData *)lastGetReport;
-(int)lastSetReportStatus;
-(void)setWaitForReport:(BOOL)arg1 ;
-(void)setHandleReportCount:(unsigned)arg1 ;
-(void)setHandleReportError:(unsigned)arg1 ;
-(void)setIntNotify:(unsigned)arg1 ;
-(void)setIntPort:(IONotificationPortRef)arg1 ;
@end

