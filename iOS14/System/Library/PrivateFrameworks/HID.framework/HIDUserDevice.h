/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
*/


#import <HID/HID-Structs.h>
@interface HIDUserDevice : NSObject {

	IOHIDUserDeviceRef _device;
	/*^block*/id _getReportHandler;
	/*^block*/id _setReportHandler;
	unsigned _service;
	/*^block*/id _cancelHandler;

}

@property (readonly) unsigned service; 
-(id)initWithProperties:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setDispatchQueue:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)activate;
-(id)description;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(unsigned)service;
-(void)dealloc;
-(void)setGetReportHandler:(/*^block*/id)arg1 ;
-(void)setSetReportHandler:(/*^block*/id)arg1 ;
-(BOOL)handleReport:(id)arg1 error:(out id*)arg2 ;
-(BOOL)handleReport:(id)arg1 withTimestamp:(unsigned long long)arg2 error:(out id*)arg3 ;
@end

