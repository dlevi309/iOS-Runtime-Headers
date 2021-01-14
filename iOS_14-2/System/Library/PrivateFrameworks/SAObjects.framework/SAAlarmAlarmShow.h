/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAlarmAlarmAction.h>

@class NSArray, NSString;

@interface SAAlarmAlarmShow : AceObject <SAAlarmAlarmAction>

@property (nonatomic,copy) NSArray * alarmIds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alarmShow;
+(id)alarmShowWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAlarmIds:(NSArray *)arg1 ;
-(NSArray *)alarmIds;
@end

