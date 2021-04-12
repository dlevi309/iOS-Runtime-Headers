/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject {

	AFPreferences* _afPreferences;

}

@property (nonatomic,retain) AFPreferences * afPreferences;              //@synthesize afPreferences=_afPreferences - In the implementation block
+(id)sharedInstance;
-(id)languageCode;
-(BOOL)dictationIsEnabled;
-(id)initSingleton;
-(void)afPreferencesChanged:(id)arg1 ;
-(BOOL)suppressDictationOptIn;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(id)manualEndpointingThreshold;
-(long long)dataSharingOptInStatus;
-(BOOL)suppressDataSharingOptIn;
-(id)dictationSLSEnabledLanguages;
-(AFPreferences *)afPreferences;
-(void)setAfPreferences:(AFPreferences *)arg1 ;
@end

