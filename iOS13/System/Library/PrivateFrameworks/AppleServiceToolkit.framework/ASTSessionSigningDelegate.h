/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@protocol ASTSessionSigningDelegate <ASTSessionDelegate>
@optional
-(void)session:(id)arg1 signPayload:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 signFile:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(void)session:(id)arg1 generateAuthInfoWithNonce:(id)arg2;

@end

