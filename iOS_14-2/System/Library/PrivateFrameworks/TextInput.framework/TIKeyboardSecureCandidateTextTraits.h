/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TIKeyboardSecureCandidateRGBColor;

@interface TIKeyboardSecureCandidateTextTraits : NSObject <NSCopying, NSSecureCoding> {

	NSString* _fontName;
	double _maxFontSize;
	double _minFontSize;
	TIKeyboardSecureCandidateRGBColor* _textColor;
	double _yCoordinate;
	double _baselineOffset;

}

@property (nonatomic,copy) NSString * fontName;                                          //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double maxFontSize;                                         //@synthesize maxFontSize=_maxFontSize - In the implementation block
@property (assign,nonatomic) double minFontSize;                                         //@synthesize minFontSize=_minFontSize - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateRGBColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double yCoordinate;                                         //@synthesize yCoordinate=_yCoordinate - In the implementation block
@property (assign,nonatomic) double baselineOffset;                                      //@synthesize baselineOffset=_baselineOffset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)traitsWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6 ;
-(void)setFontName:(NSString *)arg1 ;
-(double)minFontSize;
-(void)setMinFontSize:(double)arg1 ;
-(NSString *)fontName;
-(void)setBaselineOffset:(double)arg1 ;
-(TIKeyboardSecureCandidateRGBColor *)textColor;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 ;
-(void)setTextColor:(TIKeyboardSecureCandidateRGBColor *)arg1 ;
-(id)description;
-(double)yCoordinate;
-(id)initWithFontName:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3 ;
-(double)baselineOffset;
-(void)setMaxFontSize:(double)arg1 ;
-(id)initWithFontName:(id)arg1 maxFontSize:(double)arg2 minFontSize:(double)arg3 textColor:(id)arg4 yCoordinate:(double)arg5 baselineOffset:(double)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setYCoordinate:(double)arg1 ;
-(double)maxFontSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

