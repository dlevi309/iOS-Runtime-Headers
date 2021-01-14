/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSString;

@interface SAReminderAssistantPayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSString * utterance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assistantPayload;
+(id)assistantPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)utterance;
-(id)encodedClassName;
-(void)setUtterance:(NSString *)arg1 ;
@end

