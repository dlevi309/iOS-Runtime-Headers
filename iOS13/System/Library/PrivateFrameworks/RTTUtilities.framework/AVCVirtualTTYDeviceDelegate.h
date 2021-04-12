/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/


@protocol AVCVirtualTTYDeviceDelegate <NSObject>
@required
-(void)device:(id)arg1 didReceiveText:(id)arg2;
-(void)device:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
-(void)deviceDidStop:(id)arg1;
-(void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2;

@end

