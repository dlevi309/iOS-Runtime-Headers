/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingGetBool.h>

@class NSString;

@interface SASettingGetSpokenNotificationsEnabled : SASettingGetBool

@property (nonatomic,copy) NSString * appBundleId; 
+(id)getSpokenNotificationsEnabled;
+(id)getSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

