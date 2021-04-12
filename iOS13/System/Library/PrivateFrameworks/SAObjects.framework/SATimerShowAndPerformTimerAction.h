/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SATimerShowAndPerformTimerAction : SABaseClientBoundCommand

@property (nonatomic,retain) id<SATimerTimerAction> timerAction; 
+(id)showAndPerformTimerAction;
+(id)showAndPerformTimerActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id<SATimerTimerAction>)timerAction;
-(void)setTimerAction:(id<SATimerTimerAction>)arg1 ;
@end

