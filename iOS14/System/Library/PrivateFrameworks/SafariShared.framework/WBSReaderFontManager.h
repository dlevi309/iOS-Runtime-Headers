/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)fonts;
-(id)init;
-(NSArray *)possibleFonts;
-(id)fontWithFontFamilyName:(id)arg1 ;
-(NSString *)languageTag;
-(void)_fontDownloadDidFinish:(id)arg1 ;
-(void)updateLanguageTag:(id)arg1 ;
-(id)defaultFontForLanguageTag:(id)arg1 ;
@end

