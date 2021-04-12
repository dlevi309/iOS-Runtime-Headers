/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)eventTypeToIgnore;
-(void)setEventTypeToIgnore:(NSString *)arg1 ;
-(void)longPressTimerFired:(id)arg1 ;
@end

