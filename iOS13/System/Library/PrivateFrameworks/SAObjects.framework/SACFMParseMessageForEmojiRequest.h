/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SACFMParseMessageForEmojiRequest : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSString * messageText; 
+(id)parseMessageForEmojiRequest;
+(id)parseMessageForEmojiRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)groupIdentifier;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

