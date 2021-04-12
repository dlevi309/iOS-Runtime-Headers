/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIAudioData, NSString, NSNumber;

@interface SAUISayIt : SABaseClientBoundCommand

@property (nonatomic,retain) SAUIAudioData * audioData; 
@property (nonatomic,copy) NSString * audioDataUrl; 
@property (assign,nonatomic) BOOL canUseServerTTS; 
@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) BOOL repeatable; 
+(id)sayIt;
+(id)sayItWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)_af_extractDialogInfo:(/*^block*/id)arg1 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(NSString *)languageCode;
-(id<SAAceSerializable>)context;
-(id)groupIdentifier;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)repeatable;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(NSString *)dialogIdentifier;
-(BOOL)requiresResponse;
-(SAUIAudioData *)audioData;
-(void)setAudioData:(SAUIAudioData *)arg1 ;
-(NSString *)audioDataUrl;
-(void)setAudioDataUrl:(NSString *)arg1 ;
-(BOOL)canUseServerTTS;
-(NSNumber *)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(void)setRepeatable:(BOOL)arg1 ;
@end

