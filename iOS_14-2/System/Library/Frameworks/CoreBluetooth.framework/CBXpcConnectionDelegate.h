/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@protocol CBXpcConnectionDelegate <NSObject>
@required
-(void)xpcConnectionDidReset;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2;
-(void)xpcConnectionIsInvalid;

@end

