/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class EDResources, NSString, EDColorReference;

@interface EDFont : NSObject <NSCopying, EDImmutableObject> {

	EDResources* mResources;
	NSString* mName;
	EDColorReference* mColorReference;
	int mUnderline;
	int mScript;
	double mHeightInTwips;
	int mCharSet;
	int mFamily;
	unsigned mWeight;
	BOOL mBold;
	BOOL mItalic;
	BOOL mShadow;
	BOOL mStrike;
	BOOL mOutline;
	BOOL mUnderlineOverridden;
	BOOL mStrikeOverridden;
	BOOL mBoldOverridden;
	BOOL mWeightOverridden;
	BOOL mItalicOverridden;
	BOOL mHeightOverridden;
	BOOL mNameOverridden;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fontWithResources:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(id)arg1 ;
-(int)family;
-(void)setFamily:(int)arg1 ;
-(double)height;
-(id)color;
-(void)setHeight:(double)arg1 ;
-(void)setColor:(id)arg1 ;
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)weight;
-(void)setOutline:(BOOL)arg1 ;
-(void)setShadow:(BOOL)arg1 ;
-(BOOL)isBold;
-(int)script;
-(void)setScript:(int)arg1 ;
-(void)setBold:(BOOL)arg1 ;
-(void)setUnderline:(int)arg1 ;
-(int)underline;
-(id)initWithResources:(id)arg1 ;
-(BOOL)isBoldOverridden;
-(BOOL)isItalicOverridden;
-(BOOL)isUnderlineOverridden;
-(BOOL)isHeightOverridden;
-(BOOL)isItalic;
-(BOOL)isStrikeOverridden;
-(BOOL)isStrike;
-(void)setItalic:(BOOL)arg1 ;
-(int)charSet;
-(void)setStrike:(BOOL)arg1 ;
-(BOOL)isOutline;
-(void)setCharSet:(int)arg1 ;
-(void)setColorReference:(id)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
-(BOOL)isEqualToFont:(id)arg1 ;
-(BOOL)isNameOverridden;
-(BOOL)isShadow;
-(BOOL)isWeightOverridden;
-(id)colorReference;
@end

