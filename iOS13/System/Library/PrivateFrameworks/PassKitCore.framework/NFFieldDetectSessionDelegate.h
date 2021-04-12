/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol NFFieldDetectSessionDelegate <NSObject>
@optional
-(void)fieldDetectSession:(id)arg1 didDetectField:(BOOL)arg2;
-(void)fieldDetectSession:(id)arg1 didDetectTechnology:(id)arg2;
-(void)fieldDetectSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
-(void)fieldDetectSessionDidExitField:(id)arg1;
-(void)fieldDetectSessionDidEndUnexpectedly:(id)arg1;

@end

