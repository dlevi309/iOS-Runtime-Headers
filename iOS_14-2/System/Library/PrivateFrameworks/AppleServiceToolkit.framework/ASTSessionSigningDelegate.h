/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@protocol ASTSessionSigningDelegate <ASTSessionDelegate>
@optional
-(void)session:(id)arg1 signPayload:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 signFile:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(void)session:(id)arg1 generateAuthInfoWithNonce:(id)arg2;

@end

