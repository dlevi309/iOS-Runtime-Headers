/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>

@class BSServiceConnectionListener, BKHIDEventDeliveryObserverService, NSString;

@interface BKHIDEventDeliveryObserverServiceListener : NSObject <BSServiceConnectionListenerDelegate> {

	BSServiceConnectionListener* _connectionListener;
	BKHIDEventDeliveryObserverService* _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(id)initWithService:(id)arg1 ;
@end

