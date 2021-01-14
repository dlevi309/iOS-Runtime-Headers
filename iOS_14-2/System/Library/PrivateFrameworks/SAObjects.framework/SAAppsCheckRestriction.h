/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAppsCheckRestriction : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * executionEnvironment; 
@property (nonatomic,copy) NSString * launchId; 
+(id)checkRestriction;
+(id)checkRestrictionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)launchId;
-(void)setLaunchId:(NSString *)arg1 ;
-(NSString *)executionEnvironment;
-(void)setExecutionEnvironment:(NSString *)arg1 ;
@end

