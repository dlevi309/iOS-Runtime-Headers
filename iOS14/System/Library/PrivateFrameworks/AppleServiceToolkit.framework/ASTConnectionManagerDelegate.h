/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@protocol ASTConnectionManagerDelegate <NSObject>
@required
-(void)connectionManagerRequestPaused:(id)arg1;
-(void)connectionManagerRequestResumed:(id)arg1;
-(void)connectionManager:(id)arg1 pausedSendingResultForTest:(id)arg2 reason:(long long)arg3;
-(void)connectionManager:(id)arg1 resumedSendingResultForTest:(id)arg2;

@end

