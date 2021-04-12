/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
*/


#import <HID/HID-Structs.h>
@interface HIDUserDevice : NSObject {

	IOHIDUserDeviceRef _device;
	/*^block*/id _getReportHandler;
	/*^block*/id _setReportHandler;
	unsigned _service;

}

@property (readonly) unsigned service; 
-(void)dealloc;
-(id)description;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)cancel;
-(id)initWithProperties:(id)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(unsigned)service;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)activate;
-(void)setGetReportHandler:(/*^block*/id)arg1 ;
-(void)setSetReportHandler:(/*^block*/id)arg1 ;
-(BOOL)handleReport:(id)arg1 error:(out id*)arg2 ;
-(BOOL)handleReport:(id)arg1 withTimestamp:(unsigned long long)arg2 error:(out id*)arg3 ;
@end

