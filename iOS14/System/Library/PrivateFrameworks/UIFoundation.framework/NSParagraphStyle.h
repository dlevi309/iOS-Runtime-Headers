/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	double _lineSpacing;
	double _paragraphSpacing;
	double _headIndent;
	double _tailIndent;
	double _firstLineHeadIndent;
	double _minimumLineHeight;
	double _maximumLineHeight;
	NSArray* _tabStops;
	struct {
		unsigned alignment : 4;
		unsigned lineBreakMode : 4;
		unsigned tabStopsIsMutable : 1;
		unsigned isNaturalDirection : 1;
		unsigned rightToLeftDirection : 1;
		unsigned fixedMultiple : 2;
		unsigned tightensForTruncation : 1;
		unsigned refCount : 18;
	}  _flags;
	double _defaultTabInterval;
	id _extraData;

}

@property (nonatomic,readonly) double lineSpacing; 
@property (nonatomic,readonly) double paragraphSpacing; 
@property (nonatomic,readonly) long long alignment; 
@property (nonatomic,readonly) double headIndent; 
@property (nonatomic,readonly) double tailIndent; 
@property (nonatomic,readonly) double firstLineHeadIndent; 
@property (nonatomic,readonly) double minimumLineHeight; 
@property (nonatomic,readonly) double maximumLineHeight; 
@property (nonatomic,readonly) long long lineBreakMode; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@property (nonatomic,readonly) double lineHeightMultiple; 
@property (nonatomic,readonly) double paragraphSpacingBefore; 
@property (nonatomic,readonly) float hyphenationFactor; 
@property (nonatomic,copy,readonly) NSArray * tabStops; 
@property (nonatomic,readonly) double defaultTabInterval; 
@property (nonatomic,readonly) BOOL allowsDefaultTighteningForTruncation; 
@property (nonatomic,readonly) unsigned long long lineBreakStrategy; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(long long)_defaultWritingDirection;
+(float)_defaultHyphenationFactor;
+(long long)defaultWritingDirectionForLanguage:(id)arg1 ;
+(id)defaultParagraphStyle;
-(long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1 ;
-(long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1 ;
-(long long)_ui_resolvedWritingDirection;
-(long long)_ui_resolvedTextAlignment;
-(unsigned long long)lineBreakStrategy;
-(long long)lineBreakMode;
-(BOOL)_isSuitableForFastStringDrawingWithAlignment:(long long*)arg1 mirrorsTextAlignment:(BOOL)arg2 lineBreakMode:(long long*)arg3 tighteningFactorForTruncation:(double*)arg4 ;
-(float)hyphenationFactor;
-(double)headIndent;
-(void)_allocExtraData;
-(double)tailIndent;
-(long long)headerLevel;
-(id)_initWithParagraphStyle:(id)arg1 ;
-(void)_deallocExtraData;
-(BOOL)allowsHangingPunctuation;
-(BOOL)usesOpticalAlignment;
-(double)defaultTabInterval;
-(double)lineHeightMultiple;
-(double)paragraphSpacing;
-(double)paragraphSpacingBefore;
-(unsigned long long)_lineBoundsOptions;
-(long long)compositionLanguage;
-(id)init;
-(long long)alignment;
-(double)firstLineHeadIndent;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)tabStops;
-(double)lineSpacing;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)usesDefaultHyphenation;
-(id)description;
-(double)minimumLineHeight;
-(long long)baseWritingDirection;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)textBlocks;
-(id)textLists;
-(BOOL)allowsDefaultTighteningForTruncation;
-(float)tighteningFactorForTruncation;
-(double)maximumLineHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

