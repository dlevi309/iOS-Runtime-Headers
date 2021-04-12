/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
@class NSString;

@interface TUCarPlayHardwareControlsBroadcaster : NSObject {

	IOHIDEventSystemClientRef _hidEventSystemClientRef;
	NSString* _eventTypeToIgnore;

}

@property (retain) NSString * eventTypeToIgnore;              //@synthesize eventTypeToIgnore=_eventTypeToIgnore - In the implementation block
-(id)init;
-(NSString *)eventTypeToIgnore;
-(void)setEventTypeToIgnore:(NSString *)arg1 ;
-(void)longPressTimerFired:(id)arg1 ;
-(void)dealloc;
@end

