/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSData, NSString, NSNumber;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * appleConnectServiceTicket; 
@property (nonatomic,copy) NSString * appleConnectSessionToken; 
@property (nonatomic,copy) NSString * assistantId; 
@property (nonatomic,copy) NSString * connectionMode; 
@property (nonatomic,copy) NSString * connectionType; 
@property (nonatomic,copy) NSString * dataSharingOptInStatus; 
@property (nonatomic,copy) NSNumber * deviceAuthVersion; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * lastKnownAceHostOfCompanion; 
@property (nonatomic,copy) NSString * linkedAssistantId; 
@property (nonatomic,copy) NSData * linkedSessionValidationData; 
@property (nonatomic,copy) NSString * linkedSpeechId; 
@property (nonatomic,copy) NSString * loggableAssistantId; 
@property (nonatomic,copy) NSString * loggableSharedUserId; 
@property (nonatomic,copy) NSData * sessionValidationData; 
@property (nonatomic,copy) NSString * sharedUserId; 
@property (nonatomic,copy) NSString * speechId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadAssistant;
+(id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)connectionType;
-(id)encodedClassName;
-(void)setConnectionType:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
-(NSString *)appleConnectSessionToken;
-(void)setAppleConnectSessionToken:(NSString *)arg1 ;
-(NSString *)dataSharingOptInStatus;
-(NSString *)connectionMode;
-(NSString *)loggableAssistantId;
-(void)setDataSharingOptInStatus:(NSString *)arg1 ;
-(NSString *)lastKnownAceHostOfCompanion;
-(void)setLastKnownAceHostOfCompanion:(NSString *)arg1 ;
-(NSData *)linkedSessionValidationData;
-(void)setLinkedSessionValidationData:(NSData *)arg1 ;
-(void)setLoggableAssistantId:(NSString *)arg1 ;
-(NSData *)sessionValidationData;
-(void)setSessionValidationData:(NSData *)arg1 ;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
-(NSString *)loggableSharedUserId;
-(void)setLoggableSharedUserId:(NSString *)arg1 ;
-(void)setSpeechId:(NSString *)arg1 ;
-(NSString *)sharedUserId;
-(void)setSharedUserId:(NSString *)arg1 ;
-(NSString *)speechId;
-(NSString *)appleConnectServiceTicket;
-(void)setAppleConnectServiceTicket:(NSString *)arg1 ;
-(NSString *)linkedSpeechId;
-(void)setConnectionMode:(NSString *)arg1 ;
-(NSString *)linkedAssistantId;
-(void)setLinkedAssistantId:(NSString *)arg1 ;
-(void)setLinkedSpeechId:(NSString *)arg1 ;
-(NSNumber *)deviceAuthVersion;
-(void)setDeviceAuthVersion:(NSNumber *)arg1 ;
-(NSString *)language;
@end

