/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SATimerTimerAction.h>

@class SATimerObject, NSString;

@interface SATimerSet : SADomainCommand <SATimerTimerAction>

@property (nonatomic,retain) SATimerObject * timer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)set;
+(id)setWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SATimerObject *)timer;
-(void)setTimer:(SATimerObject *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

