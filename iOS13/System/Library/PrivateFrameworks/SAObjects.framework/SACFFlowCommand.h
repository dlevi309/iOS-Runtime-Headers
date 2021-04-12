/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SACFAbstractClientCommand.h>

@class NSDictionary;

@interface SACFFlowCommand : SACFAbstractClientCommand

@property (nonatomic,copy) NSDictionary * jsDialogScripts; 
+(id)flowCommand;
+(id)flowCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSDictionary *)jsDialogScripts;
-(void)setJsDialogScripts:(NSDictionary *)arg1 ;
@end

