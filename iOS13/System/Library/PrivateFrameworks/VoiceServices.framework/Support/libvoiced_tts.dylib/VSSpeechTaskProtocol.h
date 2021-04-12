/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@protocol VSSpeechTaskProtocol <NSObject>
@optional
-(void)reportFinish;

@required
-(id)delegate;
-(void)cancel;
-(void)resume;
-(void)start;
-(void)suspend;
-(id)md5hash;

@end

