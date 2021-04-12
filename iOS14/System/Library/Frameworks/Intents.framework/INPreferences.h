/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class _INVocabularyConnection, NSString;

@interface INPreferences : NSObject {

	_INVocabularyConnection* _assistantdConnection;
	NSString* _cachedSiriLanguageCode;

}

@property (setter=_setCachedSiriLanguageCode:,copy) NSString * _cachedSiriLanguageCode;              //@synthesize cachedSiriLanguageCode=_cachedSiriLanguageCode - In the implementation block
+(void)requestSiriAuthorization:(/*^block*/id)arg1 ;
+(void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
+(long long)siriAuthorizationStatus;
+(id)siriLanguageCode;
+(id)sharedPreferences;
-(id)init;
-(void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
-(NSString *)_cachedSiriLanguageCode;
-(void)assertThisProcessHasSiriEntitlement;
-(void)_updateWithExtensionContext:(id)arg1 ;
-(BOOL)_weAreRunningAsAnExtension;
-(long long)_siriAuthorizationStatus;
-(void)requestSiriAuthorization:(/*^block*/id)arg1 ;
-(void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCachedSiriLanguageCode:(id)arg1 ;
-(id)_siriLanguageCode;
-(id)_init;
@end

