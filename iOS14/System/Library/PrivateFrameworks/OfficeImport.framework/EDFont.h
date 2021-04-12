/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeight:(double)arg1 ;
-(BOOL)isBold;
-(int)script;
-(void)setUnderline:(int)arg1 ;
-(void)setWeight:(unsigned)arg1 ;
-(id)color;
-(double)height;
-(unsigned)weight;
-(int)family;
-(id)name;
-(NSString *)description;
-(void)setScript:(int)arg1 ;
-(void)setColor:(id)arg1 ;
-(unsigned long long)hash;
-(void)setOutline:(BOOL)arg1 ;
-(void)setShadow:(BOOL)arg1 ;
-(void)setBold:(BOOL)arg1 ;
-(void)setName:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)charSet;
-(BOOL)isEqual:(id)arg1 ;
-(int)underline;
-(void)setFamily:(int)arg1 ;
-(BOOL)isBoldOverridden;
-(BOOL)isItalicOverridden;
-(BOOL)isUnderlineOverridden;
-(BOOL)isHeightOverridden;
-(BOOL)isItalic;
-(BOOL)isStrikeOverridden;
-(BOOL)isStrike;
-(void)setItalic:(BOOL)arg1 ;
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

