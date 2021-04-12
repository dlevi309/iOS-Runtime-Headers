/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
*/


#import <HID/HID-Structs.h>
@class NSArray;

@interface HIDEventSystemClient : NSObject {

	IOHIDEventSystemClientRef _client;
	/*^block*/id _eventHandler;
	/*^block*/id _resetHandler;
	/*^block*/id _filterHandler;
	/*^block*/id _serviceHandler;
	/*^block*/id _propertyChangedHandler;

}

@property (readonly) NSArray * services; 
-(void)dealloc;
-(id)description;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)cancel;
-(IOHIDEventSystemClientRef)client;
-(id)initWithType:(long long)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)activate;
-(void)setResetHandler:(/*^block*/id)arg1 ;
-(NSArray *)services;
-(id)initWithType:(long long)arg1 andAttributes:(id)arg2 ;
-(void)setMatching:(id)arg1 ;
-(void)setEventFilterHandler:(/*^block*/id)arg1 ;
-(void)setServiceNotificationHandler:(/*^block*/id)arg1 ;
-(void)setPropertyChangedHandler:(/*^block*/id)arg1 matching:(id)arg2 ;
@end

