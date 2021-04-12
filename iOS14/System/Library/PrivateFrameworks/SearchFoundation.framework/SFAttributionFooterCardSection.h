/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFAttributionFooterCardSection.h>
@class NSArray, NSString, SFColor, SFRichText, SFPunchout, NSDictionary, NSData;


@protocol SFAttributionFooterCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFRichText * leadingAttribution; 
@property (nonatomic,retain) SFPunchout * leadingAttributionPunchout; 
@property (nonatomic,retain) SFRichText * trailingAttribution; 
@property (nonatomic,retain) SFPunchout * trailingAttributionPunchout; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
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
-(NSData *)jsonData;
-(SFRichText *)leadingAttribution;
-(void)setLeadingAttribution:(id)arg1;
-(SFPunchout *)leadingAttributionPunchout;
-(void)setLeadingAttributionPunchout:(id)arg1;
-(SFRichText *)trailingAttribution;
-(void)setTrailingAttribution:(id)arg1;
-(SFPunchout *)trailingAttributionPunchout;
-(void)setTrailingAttributionPunchout:(id)arg1;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(SFColor *)backgroundColor;
-(NSString *)type;
-(NSArray *)punchoutOptions;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFRichText, SFPunchout, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFAttributionFooterCardSection : SFCardSection <SFAttributionFooterCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFRichText* _leadingAttribution;
	SFPunchout* _leadingAttributionPunchout;
	SFRichText* _trailingAttribution;
	SFPunchout* _trailingAttributionPunchout;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFRichText * leadingAttribution;                        //@synthesize leadingAttribution=_leadingAttribution - In the implementation block
@property (nonatomic,retain) SFPunchout * leadingAttributionPunchout;                //@synthesize leadingAttributionPunchout=_leadingAttributionPunchout - In the implementation block
@property (nonatomic,retain) SFRichText * trailingAttribution;                       //@synthesize trailingAttribution=_trailingAttribution - In the implementation block
@property (nonatomic,retain) SFPunchout * trailingAttributionPunchout;               //@synthesize trailingAttributionPunchout=_trailingAttributionPunchout - In the implementation block
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
-(int)separatorStyle;
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
-(NSData *)jsonData;
-(SFRichText *)leadingAttribution;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLeadingAttribution:(SFRichText *)arg1 ;
-(SFPunchout *)leadingAttributionPunchout;
-(void)setLeadingAttributionPunchout:(SFPunchout *)arg1 ;
-(SFRichText *)trailingAttribution;
-(void)setTrailingAttribution:(SFRichText *)arg1 ;
-(SFPunchout *)trailingAttributionPunchout;
-(void)setTrailingAttributionPunchout:(SFPunchout *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(SFColor *)backgroundColor;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

