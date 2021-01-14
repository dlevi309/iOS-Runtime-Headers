/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SASmsSms;

@interface SAUIShowSmsMessage : SAUISnippet

@property (assign,nonatomic) BOOL showAsDraft; 
@property (nonatomic,retain) SASmsSms * sms; 
+(id)showSmsMessage;
+(id)showSmsMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setSms:(SASmsSms *)arg1 ;
-(BOOL)showAsDraft;
-(void)setShowAsDraft:(BOOL)arg1 ;
-(SASmsSms *)sms;
@end

