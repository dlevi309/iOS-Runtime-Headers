/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSArray, NSString;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSArray * recipientsTo; 
@property (nonatomic,copy) NSString * subject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emailPayload;
+(id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)subject;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)recipientsTo;
-(void)setRecipientsTo:(NSArray *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
@end

