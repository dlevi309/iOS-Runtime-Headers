/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

