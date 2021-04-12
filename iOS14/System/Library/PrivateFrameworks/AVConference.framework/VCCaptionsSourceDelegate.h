/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCCaptionsSourceDelegate <NSObject>
@required
-(void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(long long)arg1 didEnableCaptions:(BOOL)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(long long)arg1 didDisableCaptions:(BOOL)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2;

@end

