/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCompactRowCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBRichText, _SFPBImage, NSData;


@protocol _SFPBCompactRowCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,retain) _SFPBRichText * title; 
@property (nonatomic,retain) _SFPBRichText * subtitle; 
@property (assign,nonatomic) BOOL isSubtitleDetatched; 
@property (nonatomic,retain) _SFPBImage * image; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(_SFPBRichText *)title;
-(void)setTitle:(id)arg1;
-(_SFPBImage *)image;
-(void)setImage:(id)arg1;
-(_SFPBRichText *)subtitle;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(NSArray *)punchoutOptions;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(id)arg1;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(BOOL)isSubtitleDetatched;
-(void)setIsSubtitleDetatched:(BOOL)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBRichText, _SFPBImage, NSData;

@interface _SFPBCompactRowCardSection : PBCodable <_SFPBCompactRowCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isSubtitleDetatched;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBRichText* _title;
	_SFPBRichText* _subtitle;
	_SFPBImage* _image;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) _SFPBRichText * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _SFPBRichText * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL isSubtitleDetatched;                        //@synthesize isSubtitleDetatched=_isSubtitleDetatched - In the implementation block
@property (nonatomic,retain) _SFPBImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBRichText *)title;
-(void)setTitle:(_SFPBRichText *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBImage *)image;
-(void)setImage:(_SFPBImage *)arg1 ;
-(_SFPBRichText *)subtitle;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(void)setSubtitle:(_SFPBRichText *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSArray *)punchoutOptions;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)isSubtitleDetatched;
-(void)setIsSubtitleDetatched:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
@end

