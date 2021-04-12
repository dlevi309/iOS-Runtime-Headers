/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAWaitForCommands : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * commandAceIds; 
+(id)waitForCommands;
+(id)waitForCommandsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)commandAceIds;
-(void)setCommandAceIds:(NSArray *)arg1 ;
@end

