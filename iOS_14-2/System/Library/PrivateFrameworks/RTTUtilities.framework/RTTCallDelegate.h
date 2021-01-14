/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/


@protocol RTTCallDelegate <NSObject>
@required
-(void)ttyCall:(id)arg1 didSendRemoteString:(id)arg2 forUtterance:(id)arg3;
-(void)ttyCall:(id)arg1 setVisible:(BOOL)arg2 serviceUpdate:(id)arg3;
-(void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3;

@end

