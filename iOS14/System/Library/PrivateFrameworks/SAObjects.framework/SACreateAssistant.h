/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSData, NSString;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * appleConnectServiceTicket; 
@property (nonatomic,copy) NSString * appleConnectSessionToken; 
@property (nonatomic,copy) NSString * connectionMode; 
@property (nonatomic,copy) NSString * connectionType; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * linkedAssistantId; 
@property (nonatomic,copy) NSString * linkedSpeechId; 
@property (nonatomic,copy) NSData * linkedValidationData; 
@property (nonatomic,copy) NSString * speechId; 
@property (nonatomic,copy) NSData * validationData; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createAssistant;
+(id)createAssistantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)connectionType;
-(id)encodedClassName;
-(void)setConnectionType:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)appleConnectSessionToken;
-(void)setAppleConnectSessionToken:(NSString *)arg1 ;
-(NSString *)connectionMode;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
-(void)setSpeechId:(NSString *)arg1 ;
-(NSString *)speechId;
-(NSString *)appleConnectServiceTicket;
-(void)setAppleConnectServiceTicket:(NSString *)arg1 ;
-(NSString *)linkedSpeechId;
-(void)setConnectionMode:(NSString *)arg1 ;
-(NSString *)linkedAssistantId;
-(void)setLinkedAssistantId:(NSString *)arg1 ;
-(void)setLinkedSpeechId:(NSString *)arg1 ;
-(NSData *)linkedValidationData;
-(void)setLinkedValidationData:(NSData *)arg1 ;
-(NSData *)validationData;
-(void)setValidationData:(NSData *)arg1 ;
-(NSString *)language;
@end

