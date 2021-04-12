/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol AXHADeviceControllerProtocol <NSObject>
@required
-(void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3;
-(void)registerForPropertyUpdates:(/*^block*/id)arg1;
-(void)stopPropertyUpdates;

@end

