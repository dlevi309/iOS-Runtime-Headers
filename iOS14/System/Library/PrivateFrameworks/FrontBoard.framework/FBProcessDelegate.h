/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@protocol FBProcessDelegate <FBProcessWatchdogProviding>
@required
-(void)noteProcessAssertionStateDidChange:(id)arg1;
-(void)noteProcessDidExit:(id)arg1;
-(void)noteProcess:(id)arg1 didUpdateState:(id)arg2;

@end

