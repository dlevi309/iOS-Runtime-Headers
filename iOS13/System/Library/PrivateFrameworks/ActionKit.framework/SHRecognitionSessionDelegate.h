/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol SHRecognitionSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 willMatch:(id)arg2;
-(void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2;
-(void)session:(id)arg1 didNotFindMatchforSignature:(id)arg2 needsMinimumSignatureLength:(double)arg3;

@required
-(void)session:(id)arg1 didFindMatch:(id)arg2;
-(void)session:(id)arg1 didFailForSignature:(id)arg2 withError:(id)arg3;

@end

