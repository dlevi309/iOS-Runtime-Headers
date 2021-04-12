/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject {

	AFPreferences* _afPreferences;

}

@property (nonatomic,retain) AFPreferences * afPreferences;              //@synthesize afPreferences=_afPreferences - In the implementation block
+(id)sharedInstance;
-(BOOL)suppressDataSharingOptIn;
-(BOOL)dictationIsEnabled;
-(void)setAfPreferences:(AFPreferences *)arg1 ;
-(BOOL)suppressDictationOptIn;
-(id)languageCode;
-(void)afPreferencesChanged:(id)arg1 ;
-(long long)dataSharingOptInStatus;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(id)dictationSLSEnabledLanguages;
-(BOOL)isSmartLanguageSelectionEnabled;
-(id)manualEndpointingThreshold;
-(AFPreferences *)afPreferences;
-(id)initSingleton;
@end

