/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFFetchScriptResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * flowScripts; 
+(id)fetchScriptResponse;
+(id)fetchScriptResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)flowScripts;
-(void)setFlowScripts:(NSArray *)arg1 ;
@end

