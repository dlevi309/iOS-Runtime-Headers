/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBSuggestionCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBRichText, _SFPBImage, NSData;


@protocol _SFPBSuggestionCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,retain) _SFPBRichText * suggestionText; 
@property (assign,nonatomic) BOOL isContact; 
@property (nonatomic,copy) NSString * scopedSearchSectionBundleIdentifier; 
@property (assign,nonatomic) int suggestionType; 
@property (nonatomic,retain) _SFPBRichText * detailText; 
@property (nonatomic,retain) _SFPBImage * thumbnail; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setSeparatorStyle:(int)arg1;
-(BOOL)isContact;
-(int)separatorStyle;
-(_SFPBImage *)thumbnail;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setSuggestionText:(id)arg1;
-(NSData *)jsonData;
-(void)setIsContact:(BOOL)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(void)setScopedSearchSectionBundleIdentifier:(id)arg1;
-(_SFPBRichText *)suggestionText;
-(NSString *)scopedSearchSectionBundleIdentifier;
-(void)setDetailText:(id)arg1;
-(void)setSuggestionType:(int)arg1;
-(NSString *)type;
-(_SFPBRichText *)detailText;
-(NSArray *)punchoutOptions;
-(int)suggestionType;
-(void)setThumbnail:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBRichText, _SFPBImage, NSData;

@interface _SFPBSuggestionCardSection : PBCodable <_SFPBSuggestionCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isContact;
	int _separatorStyle;
	int _suggestionType;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBRichText* _suggestionText;
	NSString* _scopedSearchSectionBundleIdentifier;
	_SFPBRichText* _detailText;
	_SFPBImage* _thumbnail;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                   //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                              //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                        //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                          //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                        //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                     //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                        //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) _SFPBRichText * suggestionText;                            //@synthesize suggestionText=_suggestionText - In the implementation block
@property (assign,nonatomic) BOOL isContact;                                            //@synthesize isContact=_isContact - In the implementation block
@property (nonatomic,copy) NSString * scopedSearchSectionBundleIdentifier;              //@synthesize scopedSearchSectionBundleIdentifier=_scopedSearchSectionBundleIdentifier - In the implementation block
@property (assign,nonatomic) int suggestionType;                                        //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,retain) _SFPBRichText * detailText;                                //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) _SFPBImage * thumbnail;                                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1 ;
-(BOOL)isContact;
-(int)separatorStyle;
-(_SFPBImage *)thumbnail;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)setSuggestionText:(_SFPBRichText *)arg1 ;
-(NSData *)jsonData;
-(void)setIsContact:(BOOL)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setScopedSearchSectionBundleIdentifier:(NSString *)arg1 ;
-(_SFPBRichText *)suggestionText;
-(NSString *)scopedSearchSectionBundleIdentifier;
-(void)setDetailText:(_SFPBRichText *)arg1 ;
-(void)setSuggestionType:(int)arg1 ;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBRichText *)detailText;
-(NSArray *)punchoutOptions;
-(int)suggestionType;
-(void)setThumbnail:(_SFPBImage *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

