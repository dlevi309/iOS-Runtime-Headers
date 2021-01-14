/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/


@protocol AVCVirtualTTYDeviceDelegate <NSObject>
@required
-(void)device:(id)arg1 didReceiveText:(id)arg2;
-(void)device:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
-(void)deviceDidStop:(id)arg1;
-(void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2;

@end

