/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	/*^block*/id _cancelHandler;

}

@property (readonly) NSArray * services; 
-(NSArray *)services;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(IOHIDEventSystemClientRef)client;
-(void)setResetHandler:(/*^block*/id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setDispatchQueue:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)activate;
-(id)description;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setMatching:(id)arg1 ;
-(id)initWithType:(long long)arg1 andAttributes:(id)arg2 ;
-(void)setEventFilterHandler:(/*^block*/id)arg1 ;
-(void)setServiceNotificationHandler:(/*^block*/id)arg1 ;
-(void)setPropertyChangedHandler:(/*^block*/id)arg1 matching:(id)arg2 ;
@end

