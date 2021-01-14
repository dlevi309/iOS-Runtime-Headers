/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

