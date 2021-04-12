/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADCharacterProperties.h>

@class OADBulletSize, OADBulletColor, OADBulletFont, OADBulletProperties, OADTextSpacing, NSArray;

@interface OADParagraphProperties : OADCharacterProperties {

	int mLevel;
	OADBulletSize* mBulletSize;
	OADBulletColor* mBulletColor;
	OADBulletFont* mBulletFont;
	OADBulletProperties* mBulletProperties;
	OADTextSpacing* mLineSpacing;
	OADTextSpacing* mBeforeSpacing;
	OADTextSpacing* mAfterSpacing;
	NSArray* mTabStops;
	float mLeftMargin;
	float mRightMargin;
	float mIndent;
	float mDefaultTab;
	int mBulletCharSet;
	unsigned char mAlign;
	unsigned char mWrap;
	unsigned char mFontAlign;
	unsigned mIsLatinLineBreak : 1;
	unsigned mIsHangingPunctuation : 1;
	unsigned mHasLevel : 1;
	unsigned mHasLeftMargin : 1;
	unsigned mHasRightMargin : 1;
	unsigned mHasIndent : 1;
	unsigned mHasDefaultTab : 1;
	unsigned mHasBulletCharSet : 1;
	unsigned mHasAlign : 1;
	unsigned mHasWrap : 1;
	unsigned mHasFontAlign : 1;
	unsigned mHasIsLatinLineBreak : 1;
	unsigned mHasIsHangingPunctuation : 1;

}
+(id)defaultProperties;
-(void)setTabStops:(id)arg1 ;
-(unsigned char)wrap;
-(id)init;
-(unsigned char)align;
-(void)setLeftMargin:(float)arg1 ;
-(void)setIndent:(float)arg1 ;
-(float)indent;
-(id)tabStops;
-(id)lineSpacing;
-(float)leftMargin;
-(id)description;
-(int)level;
-(BOOL)hasLevel;
-(void)setLineSpacing:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasLineSpacing;
-(void)setWrap:(unsigned char)arg1 ;
-(void)setLevel:(int)arg1 ;
-(void)setRightMargin:(float)arg1 ;
-(float)rightMargin;
-(BOOL)hasWrap;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAlign:(unsigned char)arg1 ;
-(void)setBulletProperties:(id)arg1 ;
-(id)bulletProperties;
-(id)bulletSize;
-(double)nonOveridenLeftMargin;
-(BOOL)hasBulletSize;
-(BOOL)hasBulletFont;
-(id)bulletFont;
-(BOOL)hasBulletColor;
-(id)bulletColor;
-(BOOL)hasBulletProperties;
-(BOOL)hasAlign;
-(BOOL)hasLeftMargin;
-(BOOL)hasIndent;
-(BOOL)hasBeforeSpacing;
-(id)beforeSpacing;
-(BOOL)hasAfterSpacing;
-(id)afterSpacing;
-(void)setDefaultTab:(float)arg1 ;
-(void)setIsLatinLineBreak:(BOOL)arg1 ;
-(void)setIsHangingPunctuation:(BOOL)arg1 ;
-(void)setBeforeSpacing:(id)arg1 ;
-(void)setAfterSpacing:(id)arg1 ;
-(void)setBulletColor:(id)arg1 ;
-(void)setBulletSize:(id)arg1 ;
-(void)setBulletFont:(id)arg1 ;
-(void)setBulletCharSet:(int)arg1 ;
-(void)setFontAlign:(unsigned char)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(void)overrideWithProperties:(id)arg1 ;
-(BOOL)hasTabStops;
-(BOOL)hasRightMargin;
-(BOOL)hasDefaultTab;
-(BOOL)hasFontAlign;
-(BOOL)hasIsLatinLineBreak;
-(BOOL)hasIsHangingPunctuation;
-(BOOL)hasBulletCharSet;
-(float)defaultTab;
-(unsigned char)fontAlign;
-(BOOL)isLatinLineBreak;
-(BOOL)isHangingPunctuation;
-(int)bulletCharSet;
@end

