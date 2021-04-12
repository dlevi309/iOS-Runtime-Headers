/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol SHSessionDelegate <NSObject>
@optional
-(BOOL)session:(id)arg1 shouldAttemptToMatch:(id)arg2;
-(void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 didFindMatch:(id)arg2;
-(void)finishedSession:(id)arg1;

@end

