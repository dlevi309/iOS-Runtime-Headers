/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
*/


@protocol AirPlayControllerSync
@required
-(int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id*)arg4;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;
-(id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int*)arg3;
-(int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;

@end

