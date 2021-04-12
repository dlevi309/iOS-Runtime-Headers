/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFRemoveScriptCommand : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * scriptIdentifiers; 
+(id)removeScriptCommand;
+(id)removeScriptCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)scriptIdentifiers;
-(void)setScriptIdentifiers:(NSArray *)arg1 ;
@end

