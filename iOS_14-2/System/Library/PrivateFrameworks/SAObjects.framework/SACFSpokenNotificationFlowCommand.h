/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SACFAbstractClientCommand.h>

@class SAAppInfo, NSString;

@interface SACFSpokenNotificationFlowCommand : SACFAbstractClientCommand

@property (nonatomic,retain) SAAppInfo * appInfo; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * notificationID; 
@property (nonatomic,copy) NSString * outputVoiceLanguageCode; 
@property (assign,nonatomic) BOOL shouldPromptUser; 
@property (nonatomic,copy) NSString * userAgent; 
@property (nonatomic,copy) NSString * userInterfaceIdiom; 
+(id)spokenNotificationFlowCommand;
+(id)spokenNotificationFlowCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)userInterfaceIdiom;
-(void)setUserInterfaceIdiom:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setNotificationID:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)outputVoiceLanguageCode;
-(void)setOutputVoiceLanguageCode:(NSString *)arg1 ;
-(NSString *)languageCode;
-(void)setAppInfo:(SAAppInfo *)arg1 ;
-(SAAppInfo *)appInfo;
-(NSString *)notificationID;
-(BOOL)mutatingCommand;
-(NSString *)userAgent;
-(BOOL)shouldPromptUser;
-(void)setShouldPromptUser:(BOOL)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
@end

