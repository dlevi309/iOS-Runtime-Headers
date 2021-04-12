/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingSetBool.h>

@class NSString, NSDate;

@interface SASettingSetSpokenNotificationsEnabled : SASettingSetBool

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,copy) NSDate * timeToReEnable; 
+(id)setSpokenNotificationsEnabled;
+(id)setSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDate *)timeToReEnable;
-(void)setTimeToReEnable:(NSDate *)arg1 ;
@end

