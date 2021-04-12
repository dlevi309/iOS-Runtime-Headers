/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HLPRemoteDataController.h>

@class NSArray, NSURL;

@interface HLPHelpLocaleController : HLPRemoteDataController {

	NSArray* _supportedLanguageCodes;
	NSURL* _helpBookURL;
	NSArray* _preferredLanguagesOverride;
	NSArray* _locales;

}

@property (nonatomic,retain) NSArray * preferredLanguagesOverride;              //@synthesize preferredLanguagesOverride=_preferredLanguagesOverride - In the implementation block
@property (nonatomic,retain) NSArray * locales;                                 //@synthesize locales=_locales - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(id)currentLocale;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
-(void)processFileURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
-(NSArray *)preferredLanguagesOverride;
-(void)setPreferredLanguagesOverride:(NSArray *)arg1 ;
-(id)englishLocale;
-(id)localeWithPreferredLanguages:(id)arg1 ;
@end

