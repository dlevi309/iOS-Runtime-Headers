/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <BaseBoard/BSEventQueue.h>

@interface FBWorkspaceEventQueue : BSEventQueue
+(id)sharedInstance;
-(void)_noteWillExecuteEvent:(id)arg1 ;
-(void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2 ;
-(void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2 ;
-(void)_noteQueueDidLock;
-(void)_noteQueueDidUnlock;
-(void)executeOrPrependEvent:(id)arg1 ;
-(void)executeOrAppendEvent:(id)arg1 ;
-(void)executeOrPrependEvents:(id)arg1 ;
@end

