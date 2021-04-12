/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSString;

@interface SAReminderPhonePayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSString * phoneCallType; 
@property (nonatomic,copy) NSString * recipient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phonePayload;
+(id)phonePayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRecipient:(NSString *)arg1 ;
-(NSString *)recipient;
-(id)encodedClassName;
-(NSString *)phoneCallType;
-(void)setPhoneCallType:(NSString *)arg1 ;
@end

