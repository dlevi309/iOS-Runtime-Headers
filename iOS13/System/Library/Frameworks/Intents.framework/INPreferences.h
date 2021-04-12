/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class _INVocabularyConnection, NSString;

@interface INPreferences : NSObject {

	_INVocabularyConnection* _assistantdConnection;
	NSString* _cachedSiriLanguageCode;

}

@property (setter=_setCachedSiriLanguageCode:,copy) NSString * _cachedSiriLanguageCode;              //@synthesize cachedSiriLanguageCode=_cachedSiriLanguageCode - In the implementation block
+(id)sharedPreferences;
+(void)requestSiriAuthorization:(/*^block*/id)arg1 ;
+(void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
+(long long)siriAuthorizationStatus;
+(id)siriLanguageCode;
-(id)init;
-(id)_init;
-(NSString *)_cachedSiriLanguageCode;
-(void)assertThisProcessHasSiriEntitlement;
-(void)_updateWithExtensionContext:(id)arg1 ;
-(BOOL)_weAreRunningAsAnExtension;
-(void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
-(long long)_siriAuthorizationStatus;
-(void)requestSiriAuthorization:(/*^block*/id)arg1 ;
-(id)_siriLanguageCode;
-(void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCachedSiriLanguageCode:(id)arg1 ;
@end

