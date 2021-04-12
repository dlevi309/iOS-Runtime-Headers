/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


@protocol MOVStreamWriterDelegate <NSObject>
@optional
-(void)streamWriterEncounteredAnError:(id)arg1;
-(void)streamWriterDidCancelRecording:(id)arg1;
-(void)streamWriter:(id)arg1 changedStatusTo:(long long)arg2;
-(void)streamWriter:(id)arg1 inputForStream:(id)arg2 changedIsReadyStatusTo:(BOOL)arg3;

@required
-(void)streamWriterDidFinishPreparing;
-(void)streamWriterDidFailWithError:(id)arg1;
-(void)streamWriterDidFinishRecording;

@end

