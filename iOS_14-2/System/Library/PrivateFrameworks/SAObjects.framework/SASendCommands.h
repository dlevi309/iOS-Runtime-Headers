/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASendCommands : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * commands; 
+(id)sendCommands;
+(id)sendCommandsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
@end

