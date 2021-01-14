/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSString, NSArray;

@interface SAReminderSmsPayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSArray * recipients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)smsPayload;
+(id)smsPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)recipients;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)groupIdentifier;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

