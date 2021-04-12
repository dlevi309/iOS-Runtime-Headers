/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
*/


#import <HID/HID-Structs.h>
@class NSArray;

@interface HIDManager : NSObject {

	IOHIDManagerRef _manager;
	/*^block*/id _elementHandler;
	/*^block*/id _deviceNotificationHandler;
	/*^block*/id _inputReportHandler;

}

@property (readonly) NSArray * devices; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithOptions:(long long)arg1 ;
-(void)open;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)cancel;
-(void)setDispatchQueue:(id)arg1 ;
-(NSArray *)devices;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)activate;
-(void)setDeviceMatching:(id)arg1 ;
-(void)setDeviceNotificationHandler:(/*^block*/id)arg1 ;
-(void)setInputElementMatching:(id)arg1 ;
-(void)setInputElementHandler:(/*^block*/id)arg1 ;
-(void)setInputReportHandler:(/*^block*/id)arg1 ;
@end

