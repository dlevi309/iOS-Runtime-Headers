/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMTrimmerDelegate <NSObject>
@optional
-(void)trimmer:(id)arg1 willStartTrimmingWithClipProvider:(id)arg2;
-(BOOL)trimmer:(id)arg1 shouldContinueTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
-(void)trimmer:(id)arg1 didContinueTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
-(void)trimmer:(id)arg1 didEndTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;

@end

