/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/


@protocol RTTCallDelegate <NSObject>
@required
-(void)ttyCall:(id)arg1 shouldDisplayServiceMessage:(id)arg2;
-(void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3;
-(void)ttyCall:(id)arg1 didSendRemoteString:(id)arg2 forUtterance:(id)arg3;

@end

