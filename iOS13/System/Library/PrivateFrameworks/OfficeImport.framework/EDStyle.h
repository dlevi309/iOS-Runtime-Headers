/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class EDResources, EDProtection, EDContentFormat, EDFont, EDFill, EDAlignmentInfo, EDBorders, NSString;

@interface EDStyle : NSObject <NSCopying, EDImmutableObject> {

	EDResources* mResources;
	unsigned long long mParentIndex;
	unsigned long long mContentFormatId;
	unsigned long long mFontIndex;
	unsigned long long mFillIndex;
	unsigned long long mAlignmentInfoIndex;
	unsigned long long mBordersIndex;
	EDProtection* mProtection;
	unsigned long long mIndex;
	BOOL mContentFormatOverridden;
	BOOL mContentFormatApplied;
	BOOL mFontOverridden;
	BOOL mFontApplied;
	BOOL mFillOverridden;
	BOOL mFillApplied;
	BOOL mAlignmentInfoOverridden;
	BOOL mAlignmentInfoApplied;
	BOOL mBordersOverridden;
	BOOL mBordersApplied;
	BOOL mProtectionOverridden;
	BOOL mProtectionApplied;
	BOOL mDoNotModify;

}

@property (getter=isContentFormatOverridden) BOOL contentFormatOverridden; 
@property (getter=isContentFormatApplied) BOOL contentFormatApplied; 
@property (retain) EDContentFormat * contentFormat; 
@property (getter=isFontOverridden) BOOL fontOverridden; 
@property (getter=isFontApplied) BOOL fontApplied; 
@property (retain) EDFont * font; 
@property (getter=isFillOverridden) BOOL fillOverridden; 
@property (getter=isFillApplied) BOOL fillApplied; 
@property (retain) EDFill * fill; 
@property (getter=isAlignmentInfoOverridden) BOOL alignmentInfoOverridden; 
@property (getter=isAlignmentInfoApplied) BOOL alignmentInfoApplied; 
@property (retain) EDAlignmentInfo * alignmentInfo; 
@property (getter=isBordersOverridden) BOOL bordersOverridden; 
@property (getter=isBordersApplied) BOOL bordersApplied; 
@property (retain) EDBorders * borders; 
@property (getter=isProtectionOverridden) BOOL protectionOverridden; 
@property (getter=isProtectionApplied) BOOL protectionApplied; 
@property (retain) EDProtection * protection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styleWithResources:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setFont:(EDFont *)arg1 ;
-(EDFont *)font;
-(EDFill *)fill;
-(void)setBorders:(EDBorders *)arg1 ;
-(EDBorders *)borders;
-(EDProtection *)protection;
-(void)setProtection:(EDProtection *)arg1 ;
-(unsigned long long)fontIndex;
-(void)setFill:(EDFill *)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(BOOL)isFontOverridden;
-(BOOL)isFillOverridden;
-(BOOL)isAlignmentInfoOverridden;
-(EDAlignmentInfo *)alignmentInfo;
-(BOOL)isContentFormatApplied;
-(unsigned long long)contentFormatId;
-(EDContentFormat *)contentFormat;
-(BOOL)isBordersOverridden;
-(unsigned long long)fillIndex;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)setContentFormat:(EDContentFormat *)arg1 ;
-(void)setParentIndex:(unsigned long long)arg1 ;
-(void)setAlignmentInfo:(EDAlignmentInfo *)arg1 ;
-(void)setFontOverridden:(BOOL)arg1 ;
-(void)setAlignmentInfoOverridden:(BOOL)arg1 ;
-(void)setBordersOverridden:(BOOL)arg1 ;
-(void)setFillOverridden:(BOOL)arg1 ;
-(void)setProtectionOverridden:(BOOL)arg1 ;
-(void)setContentFormatOverridden:(BOOL)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
-(BOOL)isEquivalentToStyle:(id)arg1 ;
-(BOOL)isEqualToStyle:(id)arg1 ;
-(BOOL)isContentFormatOverridden;
-(BOOL)isCenterAcrossAligned;
-(BOOL)isProtectionOverridden;
-(void)setContentFormatApplied:(BOOL)arg1 ;
-(BOOL)isFontApplied;
-(void)setFontApplied:(BOOL)arg1 ;
-(BOOL)isFillApplied;
-(void)setFillApplied:(BOOL)arg1 ;
-(BOOL)isAlignmentInfoApplied;
-(void)setAlignmentInfoApplied:(BOOL)arg1 ;
-(BOOL)isBordersApplied;
-(void)setBordersApplied:(BOOL)arg1 ;
-(BOOL)isProtectionApplied;
-(void)setProtectionApplied:(BOOL)arg1 ;
-(unsigned long long)parentIndex;
-(unsigned long long)bordersIndex;
-(void)setBordersIndex:(unsigned long long)arg1 ;
-(void)setFillIndex:(unsigned long long)arg1 ;
-(unsigned long long)alignmentInfoIndex;
-(void)setAlignmentInfoIndex:(unsigned long long)arg1 ;
@end

