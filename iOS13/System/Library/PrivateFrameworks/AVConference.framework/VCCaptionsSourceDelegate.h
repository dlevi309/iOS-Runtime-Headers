/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCCaptionsSourceDelegate <NSObject>
@required
-(void)streamToken:(long long)arg1 didEnableCaptions:(BOOL)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didDisableCaptions:(BOOL)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2;

@end

