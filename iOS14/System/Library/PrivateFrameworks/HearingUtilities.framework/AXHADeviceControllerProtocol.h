/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol AXHADeviceControllerProtocol <NSObject>
@required
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3;
-(void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2;
-(void)registerForPropertyUpdates:(/*^block*/id)arg1;
-(void)stopPropertyUpdates;

@end

