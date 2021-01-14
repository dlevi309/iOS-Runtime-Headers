/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMTrimmerDelegate <NSObject>
@optional
-(void)trimmer:(id)arg1 willStartTrimmingWithClipProvider:(id)arg2;
-(BOOL)trimmer:(id)arg1 shouldContinueTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
-(void)trimmer:(id)arg1 didContinueTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
-(void)trimmer:(id)arg1 didEndTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;

@end

