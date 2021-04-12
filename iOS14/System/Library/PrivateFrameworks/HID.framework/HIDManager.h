/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
*/


#import <HID/HID-Structs.h>
@class NSArray;

@interface HIDManager : NSObject {

	IOHIDManagerRef _manager;
	/*^block*/id _elementHandler;
	/*^block*/id _deviceNotificationHandler;
	/*^block*/id _inputReportHandler;
	/*^block*/id _cancelHandler;

}

@property (readonly) NSArray * devices; 
-(id)initWithOptions:(long long)arg1 ;
-(NSArray *)devices;
-(void)open;
-(id)init;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(void)activate;
-(id)description;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDeviceMatching:(id)arg1 ;
-(void)setDeviceNotificationHandler:(/*^block*/id)arg1 ;
-(void)setInputElementMatching:(id)arg1 ;
-(void)setInputElementHandler:(/*^block*/id)arg1 ;
-(void)setInputReportHandler:(/*^block*/id)arg1 ;
@end

