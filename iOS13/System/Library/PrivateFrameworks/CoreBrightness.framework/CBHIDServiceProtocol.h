/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol CBHIDServiceProtocol <NSObject>
@required
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1;

@end

