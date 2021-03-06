/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupSendPaymentSnippet : SAUISnippet

@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentResponse; 
+(id)sendPaymentSnippet;
+(id)sendPaymentSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAIntentGroupProtobufMessage *)intent;
-(id)groupIdentifier;
-(void)setIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(id)encodedClassName;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)intentResponse;
@end

