/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SASmsSms *)sms;
-(id)encodedClassName;
-(BOOL)showAsDraft;
-(void)setShowAsDraft:(BOOL)arg1 ;
-(void)setSms:(SASmsSms *)arg1 ;
@end

