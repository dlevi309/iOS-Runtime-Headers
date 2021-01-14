/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardSecureCandidateLayoutTraits, TIKeyboardSecureCandidateTextTraits, NSString, NSArray, NSDictionary, TIKeyboardSecureCandidateRGBColor;

@interface TIKeyboardSecureCandidateRenderTraits : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isCandidateUI;
	TIKeyboardSecureCandidateLayoutTraits* _layoutTraits;
	TIKeyboardSecureCandidateTextTraits* _headerTextTraits;
	TIKeyboardSecureCandidateTextTraits* _inputTextTraits;
	NSString* _prefixText;
	NSString* _suffixText;
	NSArray* _resultCountToSingleCellWidth;
	NSDictionary* _cellWidthOptions;
	double _singleCellHeight;
	double _singleCellVerticalPadding;
	double _dividerLineWidth;
	long long _maxCellCount;
	long long _sharedCellCount;
	double _screenScale;
	long long _cellRenderingStyle;
	NSString* _fontName;
	double _fontSize;
	TIKeyboardSecureCandidateRGBColor* _textColor;

}

@property (nonatomic,copy) NSString * fontName;                                                   //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                                                     //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateRGBColor * textColor;                       //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateLayoutTraits * layoutTraits;                //@synthesize layoutTraits=_layoutTraits - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateTextTraits * headerTextTraits;              //@synthesize headerTextTraits=_headerTextTraits - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateTextTraits * inputTextTraits;               //@synthesize inputTextTraits=_inputTextTraits - In the implementation block
@property (nonatomic,copy) NSString * prefixText;                                                 //@synthesize prefixText=_prefixText - In the implementation block
@property (nonatomic,copy) NSString * suffixText;                                                 //@synthesize suffixText=_suffixText - In the implementation block
@property (assign,nonatomic) double singleCellWidth; 
@property (nonatomic,copy) NSArray * resultCountToSingleCellWidth;                                //@synthesize resultCountToSingleCellWidth=_resultCountToSingleCellWidth - In the implementation block
@property (nonatomic,copy) NSDictionary * cellWidthOptions;                                       //@synthesize cellWidthOptions=_cellWidthOptions - In the implementation block
@property (assign,nonatomic) double singleCellHeight;                                             //@synthesize singleCellHeight=_singleCellHeight - In the implementation block
@property (assign,nonatomic) double singleCellVerticalPadding;                                    //@synthesize singleCellVerticalPadding=_singleCellVerticalPadding - In the implementation block
@property (assign,nonatomic) double dividerLineWidth;                                             //@synthesize dividerLineWidth=_dividerLineWidth - In the implementation block
@property (assign,nonatomic) long long maxCellCount;                                              //@synthesize maxCellCount=_maxCellCount - In the implementation block
@property (assign,nonatomic) long long sharedCellCount;                                           //@synthesize sharedCellCount=_sharedCellCount - In the implementation block
@property (assign,nonatomic) double screenScale;                                                  //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) long long cellRenderingStyle;                                        //@synthesize cellRenderingStyle=_cellRenderingStyle - In the implementation block
@property (assign,nonatomic) BOOL isCandidateUI;                                                  //@synthesize isCandidateUI=_isCandidateUI - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFontName:(NSString *)arg1 ;
-(double)fontSize;
-(NSString *)fontName;
-(void)setInputTextTraits:(TIKeyboardSecureCandidateTextTraits *)arg1 ;
-(void)setLayoutTraits:(TIKeyboardSecureCandidateLayoutTraits *)arg1 ;
-(TIKeyboardSecureCandidateRGBColor *)textColor;
-(void)setSingleCellWidth:(double)arg1 ;
-(void)setHeaderTextTraits:(TIKeyboardSecureCandidateTextTraits *)arg1 ;
-(id)init;
-(double)singleCellWidth;
-(long long)cellRenderingStyle;
-(void)setSingleCellVerticalPadding:(double)arg1 ;
-(void)setPrefixText:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)resultCountToSingleCellWidth;
-(long long)maxCellCount;
-(double)dividerLineWidth;
-(NSString *)suffixText;
-(void)setTextColor:(TIKeyboardSecureCandidateRGBColor *)arg1 ;
-(void)setSingleCellHeight:(double)arg1 ;
-(id)description;
-(NSString *)prefixText;
-(void)setSharedCellCount:(long long)arg1 ;
-(NSDictionary *)cellWidthOptions;
-(void)setFontSize:(double)arg1 ;
-(void)setSuffixText:(NSString *)arg1 ;
-(void)setResultCountToSingleCellWidth:(NSArray *)arg1 ;
-(void)setMaxCellCount:(long long)arg1 ;
-(long long)sharedCellCount;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsCandidateUI:(BOOL)arg1 ;
-(void)setCellRenderingStyle:(long long)arg1 ;
-(TIKeyboardSecureCandidateTextTraits *)headerTextTraits;
-(void)setDividerLineWidth:(double)arg1 ;
-(void)setCellWidthOptions:(NSDictionary *)arg1 ;
-(void)setScreenScale:(double)arg1 ;
-(double)singleCellHeight;
-(BOOL)isCandidateUI;
-(TIKeyboardSecureCandidateTextTraits *)inputTextTraits;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)screenScale;
-(double)singleCellVerticalPadding;
-(BOOL)isEqual:(id)arg1 ;
-(TIKeyboardSecureCandidateLayoutTraits *)layoutTraits;
@end

