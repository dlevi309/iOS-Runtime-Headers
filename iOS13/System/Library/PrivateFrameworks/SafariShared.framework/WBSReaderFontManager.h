/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSArray, NSString;

@interface WBSReaderFontManager : NSObject {

	NSArray* _validatedFonts;
	NSString* _languageTag;

}

@property (readonly) NSArray * fonts; 
@property (readonly) NSArray * possibleFonts; 
@property (copy,readonly) NSString * languageTag;              //@synthesize languageTag=_languageTag - In the implementation block
-(id)init;
-(NSArray *)fonts;
-(NSString *)languageTag;
-(void)updateLanguageTag:(id)arg1 ;
-(NSArray *)possibleFonts;
-(void)_fontDownloadDidFinish:(id)arg1 ;
-(id)fontWithFontFamilyName:(id)arg1 ;
-(id)defaultFontForLanguageTag:(id)arg1 ;
@end

