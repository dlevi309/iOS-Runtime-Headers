/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFTableRowCardSection.h>
@class NSArray, NSString, SFColor, SFTableAlignmentSchema, NSDictionary, NSData;


@protocol SFTableRowCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSArray * richData; 
@property (nonatomic,copy) NSString * tableIdentifier; 
@property (nonatomic,retain) SFTableAlignmentSchema * alignmentSchema; 
@property (nonatomic,copy) NSArray * data; 
@property (assign,nonatomic) BOOL isSubHeader; 
@property (nonatomic,copy) NSString * tabGroupIdentifier; 
@property (assign,nonatomic) BOOL reducedRowHeight; 
@property (assign,nonatomic) int verticalAlign; 
@property (assign,nonatomic) BOOL alignRowsToHeader; 
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
-(void)setIsSubHeader:(BOOL)arg1;
-(void)setTableIdentifier:(id)arg1;
-(void)setAlignmentSchema:(id)arg1;
-(void)setTabGroupIdentifier:(id)arg1;
-(void)setReducedRowHeight:(BOOL)arg1;
-(void)setVerticalAlign:(int)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setAlignRowsToHeader:(BOOL)arg1;
-(NSData *)jsonData;
-(NSString *)tableIdentifier;
-(SFTableAlignmentSchema *)alignmentSchema;
-(BOOL)isSubHeader;
-(NSString *)tabGroupIdentifier;
-(BOOL)reducedRowHeight;
-(int)verticalAlign;
-(BOOL)alignRowsToHeader;
-(void)setRichData:(id)arg1;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(void)setData:(id)arg1;
-(SFColor *)backgroundColor;
-(NSArray *)data;
-(NSString *)type;
-(NSArray *)richData;
-(NSArray *)punchoutOptions;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFTableAlignmentSchema, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFTableRowCardSection : SFCardSection <SFTableRowCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF1 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isSubHeader;
	BOOL _reducedRowHeight;
	BOOL _alignRowsToHeader;
	int _separatorStyle;
	int _verticalAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSArray* _richData;
	NSString* _tableIdentifier;
	SFTableAlignmentSchema* _alignmentSchema;
	NSArray* _data;
	NSString* _tabGroupIdentifier;

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
@property (nonatomic,copy) NSArray * richData;                                       //@synthesize richData=_richData - In the implementation block
@property (nonatomic,copy) NSString * tableIdentifier;                               //@synthesize tableIdentifier=_tableIdentifier - In the implementation block
@property (nonatomic,retain) SFTableAlignmentSchema * alignmentSchema;               //@synthesize alignmentSchema=_alignmentSchema - In the implementation block
@property (nonatomic,copy) NSArray * data;                                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL isSubHeader;                                       //@synthesize isSubHeader=_isSubHeader - In the implementation block
@property (nonatomic,copy) NSString * tabGroupIdentifier;                            //@synthesize tabGroupIdentifier=_tabGroupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL reducedRowHeight;                                  //@synthesize reducedRowHeight=_reducedRowHeight - In the implementation block
@property (assign,nonatomic) int verticalAlign;                                      //@synthesize verticalAlign=_verticalAlign - In the implementation block
@property (assign,nonatomic) BOOL alignRowsToHeader;                                 //@synthesize alignRowsToHeader=_alignRowsToHeader - In the implementation block
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
-(void)setIsSubHeader:(BOOL)arg1 ;
-(void)setTableIdentifier:(NSString *)arg1 ;
-(void)setAlignmentSchema:(SFTableAlignmentSchema *)arg1 ;
-(void)setTabGroupIdentifier:(NSString *)arg1 ;
-(void)setReducedRowHeight:(BOOL)arg1 ;
-(void)setVerticalAlign:(int)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)setAlignRowsToHeader:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)tableIdentifier;
-(SFTableAlignmentSchema *)alignmentSchema;
-(BOOL)isSubHeader;
-(NSString *)tabGroupIdentifier;
-(BOOL)reducedRowHeight;
-(int)verticalAlign;
-(BOOL)alignRowsToHeader;
-(void)setRichData:(NSArray *)arg1 ;
-(BOOL)hasIsSubHeader;
-(BOOL)hasReducedRowHeight;
-(BOOL)hasVerticalAlign;
-(BOOL)hasAlignRowsToHeader;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(void)setData:(NSArray *)arg1 ;
-(SFColor *)backgroundColor;
-(NSArray *)data;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)richData;
-(id)initWithProtobuf:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

