/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol NFFieldDetectSessionDelegate <NSObject>
@optional
-(void)fieldDetectSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
-(void)fieldDetectSession:(id)arg1 didDetectField:(BOOL)arg2;
-(void)fieldDetectSession:(id)arg1 didDetectTechnology:(id)arg2;
-(void)fieldDetectSessionDidEndUnexpectedly:(id)arg1;
-(void)fieldDetectSessionDidExitField:(id)arg1;

@end

