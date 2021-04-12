/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SACFAbstractClientCommand.h>

@class NSDictionary;

@interface SACFFlowCommand : SACFAbstractClientCommand

@property (nonatomic,copy) NSDictionary * jsDialogScripts; 
+(id)flowCommand;
+(id)flowCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDictionary *)jsDialogScripts;
-(void)setJsDialogScripts:(NSDictionary *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

