/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingCommand.h>

@interface SASettingSetValue : SASettingCommand

@property (assign,nonatomic) BOOL dryRun; 
@property (assign,nonatomic) BOOL failOnSiriDisconnectWarnings; 
+(id)setValue;
+(id)setValueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)failOnSiriDisconnectWarnings;
-(void)setFailOnSiriDisconnectWarnings:(BOOL)arg1 ;
@end

