/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBDescriptionCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBText, _SFPBImage, _SFPBURL, NSData;


@protocol _SFPBDescriptionCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) _SFPBText * descriptionText; 
@property (nonatomic,copy) NSString * expandText; 
@property (nonatomic,retain) _SFPBImage * image; 
@property (assign,nonatomic) BOOL titleNoWrap; 
@property (assign,nonatomic) int titleWeight; 
@property (assign,nonatomic) int descriptionSize; 
@property (assign,nonatomic) int descriptionWeight; 
@property (assign,nonatomic) BOOL descriptionExpand; 
@property (assign,nonatomic) int imageAlign; 
@property (assign,nonatomic) int textAlign; 
@property (nonatomic,copy) NSString * attributionText; 
@property (nonatomic,retain) _SFPBURL * attributionURL; 
@property (nonatomic,retain) _SFPBImage * attributionGlyph; 
@property (nonatomic,copy) NSArray * richDescriptions; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(void)setImage:(id)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setTitleWeight:(int)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(NSString *)expandText;
-(BOOL)titleNoWrap;
-(int)titleWeight;
-(int)descriptionSize;
-(int)descriptionWeight;
-(BOOL)descriptionExpand;
-(int)imageAlign;
-(int)textAlign;
-(NSString *)attributionText;
-(_SFPBURL *)attributionURL;
-(_SFPBImage *)attributionGlyph;
-(NSArray *)richDescriptions;
-(void)setRichDescriptions:(id)arg1;
-(_SFPBText *)descriptionText;
-(void)setDescriptionText:(id)arg1;
-(void)setExpandText:(id)arg1;
-(void)setTitleNoWrap:(BOOL)arg1;
-(void)setDescriptionSize:(int)arg1;
-(void)setDescriptionWeight:(int)arg1;
-(void)setDescriptionExpand:(BOOL)arg1;
-(void)setImageAlign:(int)arg1;
-(void)setTextAlign:(int)arg1;
-(void)setAttributionText:(id)arg1;
-(void)setAttributionURL:(id)arg1;
-(void)setAttributionGlyph:(id)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(NSString *)subtitle;
-(NSData *)jsonData;
-(void)setTitle:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(void)addRichDescriptions:(id)arg1;
-(void)clearRichDescriptions;
-(unsigned long long)richDescriptionsCount;
-(id)richDescriptionsAtIndex:(unsigned long long)arg1;
-(_SFPBImage *)image;
-(id)initWithDictionary:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(NSString *)type;
-(void)setSubtitle:(id)arg1;
-(NSArray *)punchoutOptions;
-(id)initWithJSON:(id)arg1;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBText, _SFPBImage, _SFPBURL, NSData;

@interface _SFPBDescriptionCardSection : PBCodable <_SFPBDescriptionCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _titleNoWrap;
	BOOL _descriptionExpand;
	int _separatorStyle;
	int _titleWeight;
	int _descriptionSize;
	int _descriptionWeight;
	int _imageAlign;
	int _textAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	_SFPBText* _descriptionText;
	NSString* _expandText;
	_SFPBImage* _image;
	NSString* _attributionText;
	_SFPBURL* _attributionURL;
	_SFPBImage* _attributionGlyph;
	NSArray* _richDescriptions;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) _SFPBText * descriptionText;                     //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * expandText;                             //@synthesize expandText=_expandText - In the implementation block
@property (nonatomic,retain) _SFPBImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL titleNoWrap;                                //@synthesize titleNoWrap=_titleNoWrap - In the implementation block
@property (assign,nonatomic) int titleWeight;                                 //@synthesize titleWeight=_titleWeight - In the implementation block
@property (assign,nonatomic) int descriptionSize;                             //@synthesize descriptionSize=_descriptionSize - In the implementation block
@property (assign,nonatomic) int descriptionWeight;                           //@synthesize descriptionWeight=_descriptionWeight - In the implementation block
@property (assign,nonatomic) BOOL descriptionExpand;                          //@synthesize descriptionExpand=_descriptionExpand - In the implementation block
@property (assign,nonatomic) int imageAlign;                                  //@synthesize imageAlign=_imageAlign - In the implementation block
@property (assign,nonatomic) int textAlign;                                   //@synthesize textAlign=_textAlign - In the implementation block
@property (nonatomic,copy) NSString * attributionText;                        //@synthesize attributionText=_attributionText - In the implementation block
@property (nonatomic,retain) _SFPBURL * attributionURL;                       //@synthesize attributionURL=_attributionURL - In the implementation block
@property (nonatomic,retain) _SFPBImage * attributionGlyph;                   //@synthesize attributionGlyph=_attributionGlyph - In the implementation block
@property (nonatomic,copy) NSArray * richDescriptions;                        //@synthesize richDescriptions=_richDescriptions - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)setImage:(_SFPBImage *)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)setTitleWeight:(int)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(NSString *)expandText;
-(BOOL)titleNoWrap;
-(int)titleWeight;
-(int)descriptionSize;
-(int)descriptionWeight;
-(BOOL)descriptionExpand;
-(int)imageAlign;
-(int)textAlign;
-(NSString *)attributionText;
-(_SFPBURL *)attributionURL;
-(_SFPBImage *)attributionGlyph;
-(NSArray *)richDescriptions;
-(void)setRichDescriptions:(NSArray *)arg1 ;
-(_SFPBText *)descriptionText;
-(void)setDescriptionText:(_SFPBText *)arg1 ;
-(void)setExpandText:(NSString *)arg1 ;
-(void)setTitleNoWrap:(BOOL)arg1 ;
-(void)setDescriptionSize:(int)arg1 ;
-(void)setDescriptionWeight:(int)arg1 ;
-(void)setDescriptionExpand:(BOOL)arg1 ;
-(void)setImageAlign:(int)arg1 ;
-(void)setTextAlign:(int)arg1 ;
-(void)setAttributionText:(NSString *)arg1 ;
-(void)setAttributionURL:(_SFPBURL *)arg1 ;
-(void)setAttributionGlyph:(_SFPBImage *)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(NSString *)subtitle;
-(NSData *)jsonData;
-(void)setTitle:(NSString *)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(void)addRichDescriptions:(id)arg1 ;
-(void)clearRichDescriptions;
-(unsigned long long)richDescriptionsCount;
-(id)richDescriptionsAtIndex:(unsigned long long)arg1 ;
-(_SFPBImage *)image;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

