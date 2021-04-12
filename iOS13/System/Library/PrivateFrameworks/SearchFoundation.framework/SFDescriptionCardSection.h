/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFTitleCardSection.h>
#import <libobjc.A.dylib/SFDescriptionCardSection.h>
@class NSArray, NSString, SFColor, SFText, SFImage, NSNumber, NSURL, NSDictionary, NSData;


@protocol SFDescriptionCardSection <SFTitleCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) SFText * descriptionText; 
@property (nonatomic,copy) NSString * expandText; 
@property (nonatomic,retain) SFImage * image; 
@property (assign,nonatomic) BOOL titleNoWrap; 
@property (nonatomic,copy) NSNumber * titleWeight; 
@property (nonatomic,copy) NSNumber * descriptionSize; 
@property (nonatomic,copy) NSNumber * descriptionWeight; 
@property (assign,nonatomic) BOOL descriptionExpand; 
@property (assign,nonatomic) int imageAlign; 
@property (assign,nonatomic) int textAlign; 
@property (nonatomic,copy) NSString * attributionText; 
@property (nonatomic,copy) NSURL * attributionURL; 
@property (nonatomic,retain) SFImage * attributionGlyph; 
@property (nonatomic,copy) NSArray * richDescriptions; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(SFImage *)image;
-(void)setImage:(id)arg1;
-(NSString *)subtitle;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(SFText *)descriptionText;
-(void)setDescriptionText:(id)arg1;
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
-(NSString *)expandText;
-(void)setExpandText:(id)arg1;
-(BOOL)titleNoWrap;
-(void)setTitleNoWrap:(BOOL)arg1;
-(NSNumber *)titleWeight;
-(void)setTitleWeight:(id)arg1;
-(NSNumber *)descriptionSize;
-(void)setDescriptionSize:(id)arg1;
-(NSNumber *)descriptionWeight;
-(void)setDescriptionWeight:(id)arg1;
-(BOOL)descriptionExpand;
-(void)setDescriptionExpand:(BOOL)arg1;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1;
-(int)textAlign;
-(void)setTextAlign:(int)arg1;
-(NSString *)attributionText;
-(void)setAttributionText:(id)arg1;
-(NSURL *)attributionURL;
-(void)setAttributionURL:(id)arg1;
-(SFImage *)attributionGlyph;
-(void)setAttributionGlyph:(id)arg1;
-(NSArray *)richDescriptions;
-(void)setRichDescriptions:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFText, SFImage, NSNumber, NSURL, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFDescriptionCardSection : SFTitleCardSection <SFDescriptionCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF1 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _titleNoWrap;
	BOOL _descriptionExpand;
	int _separatorStyle;
	int _imageAlign;
	int _textAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	SFText* _descriptionText;
	NSString* _expandText;
	SFImage* _image;
	NSNumber* _titleWeight;
	NSNumber* _descriptionSize;
	NSNumber* _descriptionWeight;
	NSString* _attributionText;
	NSURL* _attributionURL;
	SFImage* _attributionGlyph;
	NSArray* _richDescriptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL isCentered; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,retain) SFText * descriptionText;                               //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * expandText;                                    //@synthesize expandText=_expandText - In the implementation block
@property (nonatomic,retain) SFImage * image;                                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL titleNoWrap;                                       //@synthesize titleNoWrap=_titleNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * titleWeight;                                   //@synthesize titleWeight=_titleWeight - In the implementation block
@property (nonatomic,copy) NSNumber * descriptionSize;                               //@synthesize descriptionSize=_descriptionSize - In the implementation block
@property (nonatomic,copy) NSNumber * descriptionWeight;                             //@synthesize descriptionWeight=_descriptionWeight - In the implementation block
@property (assign,nonatomic) BOOL descriptionExpand;                                 //@synthesize descriptionExpand=_descriptionExpand - In the implementation block
@property (assign,nonatomic) int imageAlign;                                         //@synthesize imageAlign=_imageAlign - In the implementation block
@property (assign,nonatomic) int textAlign;                                          //@synthesize textAlign=_textAlign - In the implementation block
@property (nonatomic,copy) NSString * attributionText;                               //@synthesize attributionText=_attributionText - In the implementation block
@property (nonatomic,copy) NSURL * attributionURL;                                   //@synthesize attributionURL=_attributionURL - In the implementation block
@property (nonatomic,retain) SFImage * attributionGlyph;                             //@synthesize attributionGlyph=_attributionGlyph - In the implementation block
@property (nonatomic,copy) NSArray * richDescriptions;                               //@synthesize richDescriptions=_richDescriptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(SFImage *)image;
-(void)setImage:(SFImage *)arg1 ;
-(NSString *)subtitle;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(SFText *)descriptionText;
-(void)setDescriptionText:(SFText *)arg1 ;
-(NSArray *)punchoutOptions;
-(id)initWithProtobuf:(id)arg1 ;
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
-(NSString *)expandText;
-(void)setExpandText:(NSString *)arg1 ;
-(BOOL)titleNoWrap;
-(void)setTitleNoWrap:(BOOL)arg1 ;
-(NSNumber *)titleWeight;
-(void)setTitleWeight:(NSNumber *)arg1 ;
-(NSNumber *)descriptionSize;
-(void)setDescriptionSize:(NSNumber *)arg1 ;
-(NSNumber *)descriptionWeight;
-(void)setDescriptionWeight:(NSNumber *)arg1 ;
-(BOOL)descriptionExpand;
-(void)setDescriptionExpand:(BOOL)arg1 ;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1 ;
-(int)textAlign;
-(void)setTextAlign:(int)arg1 ;
-(NSString *)attributionText;
-(void)setAttributionText:(NSString *)arg1 ;
-(NSURL *)attributionURL;
-(void)setAttributionURL:(NSURL *)arg1 ;
-(SFImage *)attributionGlyph;
-(void)setAttributionGlyph:(SFImage *)arg1 ;
-(NSArray *)richDescriptions;
-(void)setRichDescriptions:(NSArray *)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasTitleNoWrap;
-(BOOL)hasDescriptionExpand;
-(BOOL)hasImageAlign;
-(BOOL)hasTextAlign;
@end

