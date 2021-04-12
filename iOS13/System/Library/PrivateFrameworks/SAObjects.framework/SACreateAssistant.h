/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSData, NSString;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * connectionMode; 
@property (nonatomic,copy) NSString * connectionType; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * linkedAssistantId; 
@property (nonatomic,copy) NSString * linkedSpeechId; 
@property (nonatomic,copy) NSData * linkedValidationData; 
@property (nonatomic,copy) NSString * speechId; 
@property (nonatomic,copy) NSData * validationData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)createAssistant;
+(id)createAssistantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)connectionType;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)connectionMode;
-(void)setConnectionMode:(NSString *)arg1 ;
-(void)setConnectionType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)speechId;
-(void)setSpeechId:(NSString *)arg1 ;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
-(NSString *)linkedAssistantId;
-(void)setLinkedAssistantId:(NSString *)arg1 ;
-(NSString *)linkedSpeechId;
-(void)setLinkedSpeechId:(NSString *)arg1 ;
-(NSData *)linkedValidationData;
-(void)setLinkedValidationData:(NSData *)arg1 ;
-(NSData *)validationData;
-(void)setValidationData:(NSData *)arg1 ;
@end

