/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@protocol ASTConnectionManagerDelegate <NSObject>
@required
-(void)connectionManagerRequestPaused:(id)arg1;
-(void)connectionManagerRequestResumed:(id)arg1;
-(void)connectionManager:(id)arg1 pausedSendingResultForTest:(id)arg2 reason:(long long)arg3;
-(void)connectionManager:(id)arg1 resumedSendingResultForTest:(id)arg2;

@end

