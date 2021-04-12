/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol CBHIDServiceProtocol <NSObject>
@required
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1;

@end

