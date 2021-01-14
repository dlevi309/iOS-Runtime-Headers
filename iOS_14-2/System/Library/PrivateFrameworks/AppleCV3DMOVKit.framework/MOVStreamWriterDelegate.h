/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


@protocol MOVStreamWriterDelegate <MOVStreamWriterDelegateDeprecationNominates>
@optional
-(void)streamWriterEncounteredAnError:(id)arg1;
-(void)streamWriterReachedFinishingTimeout:(id)arg1;
-(void)streamWriter:(id)arg1 changedStatusTo:(long long)arg2;
-(void)streamWriter:(id)arg1 inputForStream:(id)arg2 changedIsReadyStatusTo:(BOOL)arg3;
-(BOOL)streamWriter:(id)arg1 encodedBuffer:(opaqueCMSampleBufferRef)arg2 pts:(SCD_Struct_Ti7)arg3 metadata:(id)arg4 forStream:(id)arg5;
-(void)streamWriter:(id)arg1 writingSessionDidStartAtTime:(SCD_Struct_Ti7)arg2 stream:(id)arg3 mediaType:(long long)arg4;

@end

