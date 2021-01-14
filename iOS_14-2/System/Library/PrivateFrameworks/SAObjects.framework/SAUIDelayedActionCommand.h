/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAUIDelayedActionCommand : SADomainCommand

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * timerValue; 
+(id)delayedActionCommand;
+(id)delayedActionCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)commands;
-(void)setTimerValue:(NSNumber *)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(NSNumber *)timerValue;
@end

