/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

