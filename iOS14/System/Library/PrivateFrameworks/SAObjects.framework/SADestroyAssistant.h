/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SADestroyAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * assistantId; 
@property (nonatomic,copy) NSString * speechId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)destroyAssistant;
+(id)destroyAssistantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
-(void)setSpeechId:(NSString *)arg1 ;
-(NSString *)speechId;
@end

