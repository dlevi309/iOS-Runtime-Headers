/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appIds; 
@property (nonatomic,copy) NSString * executionEnvironment; 
+(id)getRestrictedApps;
+(id)getRestrictedAppsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)appIds;
-(BOOL)mutatingCommand;
-(void)setAppIds:(NSArray *)arg1 ;
-(NSString *)executionEnvironment;
-(void)setExecutionEnvironment:(NSString *)arg1 ;
@end

