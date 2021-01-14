/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSLocale, NSString;

@interface PKTextInputLanguageSpec : NSObject {

	long long __currentLanguage;
	NSLocale* __locale;

}

@property (nonatomic,readonly) long long _currentLanguage;                         //@synthesize _currentLanguage=__currentLanguage - In the implementation block
@property (nonatomic,readonly) NSLocale * _locale;                                 //@synthesize _locale=__locale - In the implementation block
@property (nonatomic,readonly) long long uncommittedTokenColumnCount; 
@property (nonatomic,readonly) double strokeFadeOutDuration; 
@property (nonatomic,readonly) double standardCommitDelay; 
@property (nonatomic,readonly) double singleCharacterCommitDelay; 
@property (nonatomic,readonly) NSString * debugLocaleDescription; 
-(NSLocale *)_locale;
-(id)initWithLocale:(id)arg1 ;
-(long long)_currentLanguage;
-(double)singleCharacterCommitDelay;
-(void)configureLocaleForRecognitionManager:(id)arg1 ;
-(long long)uncommittedTokenColumnCount;
-(double)strokeFadeOutDuration;
-(double)standardCommitDelay;
-(NSString *)debugLocaleDescription;
@end

