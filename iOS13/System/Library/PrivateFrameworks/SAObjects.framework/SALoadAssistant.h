/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSData, NSString;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * assistantId; 
@property (nonatomic,copy) NSString * connectionMode; 
@property (nonatomic,copy) NSString * connectionType; 
@property (nonatomic,copy) NSString * dataSharingOptInStatus; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)loadAssistant;
+(id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)connectionType;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)dataSharingOptInStatus;
-(NSString *)connectionMode;
-(void)setConnectionMode:(NSString *)arg1 ;
-(void)setConnectionType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)sharedUserId;
-(void)setSharedUserId:(NSString *)arg1 ;
-(NSString *)loggableSharedUserId;
-(void)setLoggableSharedUserId:(NSString *)arg1 ;
-(NSString *)speechId;
-(void)setSpeechId:(NSString *)arg1 ;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
-(NSString *)linkedAssistantId;
-(void)setLinkedAssistantId:(NSString *)arg1 ;
-(NSString *)linkedSpeechId;
-(void)setLinkedSpeechId:(NSString *)arg1 ;
-(void)setDataSharingOptInStatus:(NSString *)arg1 ;
-(NSString *)lastKnownAceHostOfCompanion;
-(void)setLastKnownAceHostOfCompanion:(NSString *)arg1 ;
-(NSData *)linkedSessionValidationData;
-(void)setLinkedSessionValidationData:(NSData *)arg1 ;
-(NSString *)loggableAssistantId;
-(void)setLoggableAssistantId:(NSString *)arg1 ;
-(NSData *)sessionValidationData;
-(void)setSessionValidationData:(NSData *)arg1 ;
@end

