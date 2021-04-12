/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol AVCRateControllerDelegate
@optional
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;

@required
-(void)rateController:(void*)arg1 targetBitrateDidChange:(unsigned)arg2 rateChangeCounter:(unsigned)arg3;

@end

