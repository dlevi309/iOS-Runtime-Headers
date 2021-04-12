/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSString, NSArray, AFVoiceInfo;

@interface AFSiriRingtone : NSObject {

	BOOL _languageMismatch;
	NSString* _voiceLanguage;
	NSArray* _contacts;
	NSString* _displayedCallerID;
	long long _callerIDType;
	NSString* _callServiceSpeakableName;
	NSString* _callDestinationID;
	long long _callDestinationIDType;
	AFVoiceInfo* _voiceInfo;

}

@property (nonatomic,retain) NSArray * contacts;                             //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSString * displayedCallerID;                     //@synthesize displayedCallerID=_displayedCallerID - In the implementation block
@property (assign,nonatomic) long long callerIDType;                         //@synthesize callerIDType=_callerIDType - In the implementation block
@property (nonatomic,copy) NSString * callServiceSpeakableName;              //@synthesize callServiceSpeakableName=_callServiceSpeakableName - In the implementation block
@property (nonatomic,copy) NSString * callDestinationID;                     //@synthesize callDestinationID=_callDestinationID - In the implementation block
@property (assign,nonatomic) long long callDestinationIDType;                //@synthesize callDestinationIDType=_callDestinationIDType - In the implementation block
@property (nonatomic,readonly) AFVoiceInfo * voiceInfo;                      //@synthesize voiceInfo=_voiceInfo - In the implementation block
@property (nonatomic,readonly) NSString * textToSpeak; 
-(id)init;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(id)initWithContacts:(id)arg1 ;
-(id)_bestVoiceInfoWithCurrentLocale:(id)arg1 ;
-(id)_generateSpokenTextForContacts:(id)arg1 voiceLanguage:(id)arg2 displayedCallerID:(id)arg3 callerIDType:(long long)arg4 callDestinationID:(id)arg5 callDestinationIDType:(long long)arg6 callServiceSpeakableName:(id)arg7 ;
-(id)_spokenTextForContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3 ;
-(id)_spokenTextForCallerID:(id)arg1 ofType:(long long)arg2 rawCaller:(id)arg3 rawCallerType:(long long)arg4 languageCode:(id)arg5 ;
-(id)_spokenTextForCallDestinationID:(id)arg1 ofType:(long long)arg2 callServiceSpeakableName:(id)arg3 languageCode:(id)arg4 ;
-(id)_phoneticNamesForContact:(id)arg1 languageCode:(id)arg2 ;
-(id)_spokenTextForOneContact:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3 ;
-(id)_spokenTextForTwoContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3 ;
-(id)_spokenTextForThreeContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3 ;
-(id)_escapeCallerIDString:(id)arg1 forType:(long long)arg2 ;
-(id)_escapeCallDestinationIDString:(id)arg1 forType:(long long)arg2 ;
-(void)_phoneticInfoForContact:(id)arg1 languageCode:(id)arg2 firstName:(id*)arg3 middleName:(id*)arg4 lastName:(id*)arg5 nickname:(id*)arg6 ;
-(NSString *)textToSpeak;
-(NSString *)displayedCallerID;
-(void)setDisplayedCallerID:(NSString *)arg1 ;
-(long long)callerIDType;
-(void)setCallerIDType:(long long)arg1 ;
-(NSString *)callServiceSpeakableName;
-(void)setCallServiceSpeakableName:(NSString *)arg1 ;
-(NSString *)callDestinationID;
-(void)setCallDestinationID:(NSString *)arg1 ;
-(long long)callDestinationIDType;
-(void)setCallDestinationIDType:(long long)arg1 ;
-(AFVoiceInfo *)voiceInfo;
@end
