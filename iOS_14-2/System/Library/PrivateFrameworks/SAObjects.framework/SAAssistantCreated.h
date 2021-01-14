/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAssistantCreated : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * assistantId; 
@property (nonatomic,copy) NSString * speechId; 
+(id)assistantCreated;
+(id)assistantCreatedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
-(void)setSpeechId:(NSString *)arg1 ;
-(NSString *)speechId;
@end

