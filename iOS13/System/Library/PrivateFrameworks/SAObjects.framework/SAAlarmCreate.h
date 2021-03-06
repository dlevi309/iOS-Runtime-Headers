/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAAlarmAlarmAction.h>

@class SAAlarmObject, NSString;

@interface SAAlarmCreate : SADomainCommand <SAAlarmAlarmAction>

@property (nonatomic,retain) SAAlarmObject * alarmToCreate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)create;
+(id)createWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAAlarmObject *)alarmToCreate;
-(void)setAlarmToCreate:(SAAlarmObject *)arg1 ;
@end

