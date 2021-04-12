/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFSuggestionCardSection.h>
@class NSArray, NSString, SFColor, SFRichText, SFImage, NSDictionary, NSData;


@protocol SFSuggestionCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFRichText * suggestionText; 
@property (assign,nonatomic) BOOL isContact; 
@property (nonatomic,copy) NSString * scopedSearchSectionBundleIdentifier; 
@property (assign,nonatomic) int suggestionType; 
@property (nonatomic,retain) SFRichText * detailText; 
@property (nonatomic,retain) SFImage * thumbnail; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1;
-(BOOL)isContact;
-(int)separatorStyle;
-(SFImage *)thumbnail;
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
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setScopedSearchSectionBundleIdentifier:(id)arg1;
-(SFRichText *)suggestionText;
-(NSString *)scopedSearchSectionBundleIdentifier;
-(void)setDetailText:(id)arg1;
-(void)setSuggestionType:(int)arg1;
-(NSString *)type;
-(SFRichText *)detailText;
-(NSArray *)punchoutOptions;
-(int)suggestionType;
-(void)setThumbnail:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFRichText, SFImage, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFSuggestionCardSection : SFCardSection <SFSuggestionCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF10 _has;
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
	SFColor* _backgroundColor;
	SFRichText* _suggestionText;
	NSString* _scopedSearchSectionBundleIdentifier;
	SFRichText* _detailText;
	SFImage* _thumbnail;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                   //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                              //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                        //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                          //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                        //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                     //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                        //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFRichText * suggestionText;                               //@synthesize suggestionText=_suggestionText - In the implementation block
@property (assign,nonatomic) BOOL isContact;                                            //@synthesize isContact=_isContact - In the implementation block
@property (nonatomic,copy) NSString * scopedSearchSectionBundleIdentifier;              //@synthesize scopedSearchSectionBundleIdentifier=_scopedSearchSectionBundleIdentifier - In the implementation block
@property (assign,nonatomic) int suggestionType;                                        //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,retain) SFRichText * detailText;                                   //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) SFImage * thumbnail;                                       //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1 ;
-(BOOL)isContact;
-(int)separatorStyle;
-(SFImage *)thumbnail;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)setSuggestionText:(SFRichText *)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsContact:(BOOL)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(SFColor *)backgroundColor;
-(void)setScopedSearchSectionBundleIdentifier:(NSString *)arg1 ;
-(SFRichText *)suggestionText;
-(NSString *)scopedSearchSectionBundleIdentifier;
-(void)setDetailText:(SFRichText *)arg1 ;
-(BOOL)hasIsContact;
-(void)setSuggestionType:(int)arg1 ;
-(BOOL)hasSuggestionType;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(SFRichText *)detailText;
-(NSArray *)punchoutOptions;
-(int)suggestionType;
-(void)setThumbnail:(SFImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

