/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
*/


@protocol AirPlayControllerSync
@required
-(int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id*)arg4;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;
-(id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int*)arg3;
-(int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;

@end

