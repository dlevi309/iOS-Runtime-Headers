/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDOfficeArt, NSMutableString;

@interface WDListLevel : NSObject {

	WDDocument* mDocument;
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDOfficeArt* mImage;
	long long mStartNumber;
	int mNumberFormat;
	BOOL mRestartNumbering;
	long long mRestartLevel;
	BOOL mLegal;
	int mSuffix;
	NSMutableString* mText;
	BOOL mLegacy;
	long long mLegacySpace;
	long long mLegacyIndent;
	int mJustification;

}
-(void)setLegacy:(BOOL)arg1 ;
-(void)setImage:(id)arg1 ;
-(BOOL)legacy;
-(int)suffix;
-(void)setText:(id)arg1 ;
-(BOOL)legal;
-(id)image;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(id)text;
-(void)setSuffix:(int)arg1 ;
-(int)numberFormat;
-(void)setNumberFormat:(int)arg1 ;
-(id)paragraphProperties;
-(id)characterProperties;
-(int)justification;
-(long long)startNumber;
-(BOOL)restartLevelOverridden;
-(long long)restartLevel;
-(void)setRestartNumbering:(BOOL)arg1 ;
-(BOOL)restartNumbering;
-(void)setStartNumber:(long long)arg1 ;
-(void)setJustification:(int)arg1 ;
-(BOOL)startNumberOverridden;
-(BOOL)numberFormatOverridden;
-(BOOL)imageBullet;
-(BOOL)imageBulletOverridden;
-(BOOL)restartNumberingOverridden;
-(BOOL)legalOverridden;
-(BOOL)suffixOverridden;
-(BOOL)textOverridden;
-(long long)legacySpace;
-(long long)legacyIndent;
-(BOOL)justificationOverridden;
-(void)setLegal:(BOOL)arg1 ;
-(void)setRestartLevel:(long long)arg1 ;
-(void)setLegacySpace:(long long)arg1 ;
-(void)setLegacyIndent:(long long)arg1 ;
@end

