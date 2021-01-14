/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SACFMParseMessageForEmojiRequest : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSString * messageText; 
+(id)parseMessageForEmojiRequest;
+(id)parseMessageForEmojiRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)locale;
-(id)groupIdentifier;
-(void)setLocale:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
@end

