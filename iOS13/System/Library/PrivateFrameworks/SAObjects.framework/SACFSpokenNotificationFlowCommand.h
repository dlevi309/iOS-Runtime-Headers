/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)languageCode;
-(id)groupIdentifier;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userInterfaceIdiom;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setUserInterfaceIdiom:(NSString *)arg1 ;
-(void)setNotificationID:(NSString *)arg1 ;
-(NSString *)notificationID;
-(BOOL)shouldPromptUser;
-(void)setShouldPromptUser:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(SAAppInfo *)appInfo;
-(void)setAppInfo:(SAAppInfo *)arg1 ;
-(NSString *)outputVoiceLanguageCode;
-(void)setOutputVoiceLanguageCode:(NSString *)arg1 ;
@end

