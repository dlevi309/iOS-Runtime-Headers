/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

@class BKHIDEventDeliveryManager, BKHIDEventSenderCache, BKHIDClientConnectionManager;


@protocol BKHIDSystemInterfacing <BKIOHIDServiceMatcherDataProviding>
@property (readonly) BKHIDEventDeliveryManager * deliveryManager; 
@property (readonly) BKHIDEventSenderCache * senderCache; 
@property (readonly) BKHIDClientConnectionManager * clientConnectionManager; 
@required
-(void)injectGSEvent:(GSEventRef)arg1;
-(id)systemPropertyForKey:(id)arg1;
-(BKHIDClientConnectionManager *)clientConnectionManager;
-(BKHIDEventDeliveryManager *)deliveryManager;
-(void)setSystemProperty:(id)arg1 forKey:(id)arg2;
-(void)injectHIDEvent:(IOHIDEventRef)arg1;
-(BKHIDEventSenderCache *)senderCache;
-(IOHIDEventRef)systemEventOfType:(unsigned)arg1 matchingEvent:(IOHIDEventRef)arg2 options:(unsigned)arg3;

@end

