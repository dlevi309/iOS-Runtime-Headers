/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/HID.feature/HID
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <HID/HID-Structs.h>
@class NSString, NSMutableData, NSObject;

@interface ACCFeaturePluginHIDDescriptor : NSObject {

	BOOL _isShuttingDown;
	unsigned char _getReportID;
	int _getReportType;
	int _getReportResult;
	NSString* _hidDeviceUUIDStr;
	NSMutableData* _getReportBuffer;
	IOHIDUserDeviceRef _deviceRef;
	NSObject*<OS_dispatch_queue> _hidCallbackQueue;
	NSObject*<OS_dispatch_semaphore> _getReportSemaphore;
	/*^block*/id _sendOutReport;
	/*^block*/id _sendGetReport;
	/*^block*/id _sendComponentUpdate;
	IOHIDEventSystemClientRef _hidEventSystemClientRef;

}

@property (assign,nonatomic) BOOL isShuttingDown;                                              //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (assign,nonatomic) unsigned char getReportID;                                        //@synthesize getReportID=_getReportID - In the implementation block
@property (assign,nonatomic) int getReportType;                                                //@synthesize getReportType=_getReportType - In the implementation block
@property (nonatomic,retain) NSMutableData * getReportBuffer;                                  //@synthesize getReportBuffer=_getReportBuffer - In the implementation block
@property (assign,nonatomic) int getReportResult;                                              //@synthesize getReportResult=_getReportResult - In the implementation block
@property (assign,nonatomic) IOHIDUserDeviceRef deviceRef;                                     //@synthesize deviceRef=_deviceRef - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> hidCallbackQueue;                    //@synthesize hidCallbackQueue=_hidCallbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> getReportSemaphore;              //@synthesize getReportSemaphore=_getReportSemaphore - In the implementation block
@property (nonatomic,copy) id sendOutReport;                                                   //@synthesize sendOutReport=_sendOutReport - In the implementation block
@property (nonatomic,copy) id sendGetReport;                                                   //@synthesize sendGetReport=_sendGetReport - In the implementation block
@property (nonatomic,copy) id sendComponentUpdate;                                             //@synthesize sendComponentUpdate=_sendComponentUpdate - In the implementation block
@property (assign) IOHIDEventSystemClientRef hidEventSystemClientRef;                          //@synthesize hidEventSystemClientRef=_hidEventSystemClientRef - In the implementation block
@property (nonatomic,readonly) NSString * hidDeviceUUIDStr;                                    //@synthesize hidDeviceUUIDStr=_hidDeviceUUIDStr - In the implementation block
-(IOHIDUserDeviceRef)deviceRef;
-(BOOL)isShuttingDown;
-(void)dealloc;
-(void)removeDescriptor;
-(id)initWithDecriptorInfo:(id)arg1 sendOutReport:(/*^block*/id)arg2 sendGetReport:(/*^block*/id)arg3 sendComponentUpdate:(/*^block*/id)arg4 ;
-(NSString *)hidDeviceUUIDStr;
-(BOOL)handleInReport:(id)arg1 ;
-(BOOL)handleGetReportResponse:(unsigned char)arg1 reportID:(unsigned char)arg2 report:(id)arg3 ;
-(void)startHIDEventSystemListener:(id)arg1 ;
-(void)setIsShuttingDown:(BOOL)arg1 ;
-(BOOL)handleHIDComponentUpdate:(BOOL)arg1 ;
-(id)sendOutReport;
-(void)setGetReportResult:(int)arg1 ;
-(void)setGetReportType:(int)arg1 ;
-(void)setGetReportID:(unsigned char)arg1 ;
-(void)setGetReportBuffer:(NSMutableData *)arg1 ;
-(id)sendGetReport;
-(NSObject*<OS_dispatch_semaphore>)getReportSemaphore;
-(int)getReportResult;
-(NSMutableData *)getReportBuffer;
-(int)getReportType;
-(unsigned char)getReportID;
-(id)sendComponentUpdate;
-(BOOL)handleOutReport:(id)arg1 ;
-(BOOL)handleGetReport:(int)arg1 reportID:(unsigned char)arg2 report:(id)arg3 ;
-(void)setDeviceRef:(IOHIDUserDeviceRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)hidCallbackQueue;
-(void)setHidCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setGetReportSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setSendOutReport:(id)arg1 ;
-(void)setSendGetReport:(id)arg1 ;
-(void)setSendComponentUpdate:(id)arg1 ;
-(IOHIDEventSystemClientRef)hidEventSystemClientRef;
-(void)setHidEventSystemClientRef:(IOHIDEventSystemClientRef)arg1 ;
@end

