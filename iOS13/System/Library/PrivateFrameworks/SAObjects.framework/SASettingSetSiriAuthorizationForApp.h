/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingSetBool.h>

@class NSString;

@interface SASettingSetSiriAuthorizationForApp : SASettingSetBool

@property (nonatomic,copy) NSString * bundleId; 
+(id)setSiriAuthorizationForApp;
+(id)setSiriAuthorizationForAppWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

