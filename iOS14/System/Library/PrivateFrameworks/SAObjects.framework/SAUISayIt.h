/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/AFAceCommandClientFeedbackEnumerating.h>

@class SAUIAudioData, NSString, NSNumber, SAUIListenAfterSpeakingBehavior;

@interface SAUISayIt : SABaseClientBoundCommand <AFAceCommandClientFeedbackEnumerating>

@property (nonatomic,retain) SAUIAudioData * audioData; 
@property (nonatomic,copy) NSString * audioDataUrl; 
@property (assign,nonatomic) BOOL canUseServerTTS; 
@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,retain) SAUIListenAfterSpeakingBehavior * listenAfterSpeakingBehavior; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) BOOL repeatable; 
+(id)sayIt;
+(id)sayItWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(void)_af_enumerateClientFeedbackDetails:(/*^block*/id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)message;
-(id)groupIdentifier;
-(BOOL)repeatable;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)languageCode;
-(id<SAAceSerializable>)context;
-(NSString *)audioDataUrl;
-(void)setAudioDataUrl:(NSString *)arg1 ;
-(BOOL)canUseServerTTS;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(SAUIListenAfterSpeakingBehavior *)listenAfterSpeakingBehavior;
-(void)setListenAfterSpeakingBehavior:(SAUIListenAfterSpeakingBehavior *)arg1 ;
-(void)setRepeatable:(BOOL)arg1 ;
-(SAUIAudioData *)audioData;
-(void)setAudioData:(SAUIAudioData *)arg1 ;
-(void)setGender:(NSString *)arg1 ;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(NSString *)gender;
-(NSNumber *)listenAfterSpeaking;
-(NSString *)dialogIdentifier;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
@end

