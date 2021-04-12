/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)setWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)set;
-(SATimerObject *)timer;
-(id)groupIdentifier;
-(void)setTimer:(SATimerObject *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

