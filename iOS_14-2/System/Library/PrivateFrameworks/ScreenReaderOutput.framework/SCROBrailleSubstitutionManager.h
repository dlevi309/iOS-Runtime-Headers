/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@class NSMutableDictionary, NSLinguisticTagger;

@interface SCROBrailleSubstitutionManager : NSObject {

	NSMutableDictionary* _lookup;
	NSLinguisticTagger* _lingusticTagger;

}
+(id)sharedInstance;
-(id)init;
-(id)brailleSubstitutionForType:(long long)arg1 withLanguage:(id)arg2 ;
-(void)_loadLanguageSubstitutions:(id)arg1 intoDictionary:(id)arg2 ;
-(void)_ensureLanguageDataPresent:(id)arg1 ;
-(id)stringWithBrailleSubstitutions:(id)arg1 withLanguage:(id)arg2 ;
@end

