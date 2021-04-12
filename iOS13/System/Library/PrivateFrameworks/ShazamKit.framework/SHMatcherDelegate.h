/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@protocol SHMatcherDelegate <NSObject>
@required
-(void)matcher:(id)arg1 didFailForSignature:(id)arg2 apiResponse:(id)arg3 withError:(id)arg4;
-(void)matcher:(id)arg1 didFindMatch:(id)arg2 forSignature:(id)arg3 apiResponse:(id)arg4;
-(void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 apiResponse:(id)arg3;

@end

