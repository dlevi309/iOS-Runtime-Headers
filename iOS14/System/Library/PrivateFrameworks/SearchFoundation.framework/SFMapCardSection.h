/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFMapCardSection.h>
@class NSArray, NSString, SFColor, SFLatLng, SFMapRegion, NSDictionary, NSData;


@protocol SFMapCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFLatLng * location; 
@property (nonatomic,retain) SFColor * pinColor; 
@property (nonatomic,copy) NSString * footnoteLabel; 
@property (nonatomic,copy) NSString * footnote; 
@property (assign,nonatomic) BOOL interactive; 
@property (assign,nonatomic) int sizeFormat; 
@property (nonatomic,retain) SFMapRegion * boundingMapRegion; 
@property (assign,nonatomic) int pinBehavior; 
@property (nonatomic,copy) NSArray * pins; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(NSArray *)pins;
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
-(SFLatLng *)location;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setPinColor:(id)arg1;
-(NSData *)jsonData;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1;
-(BOOL)interactive;
-(void)setFootnoteLabel:(id)arg1;
-(int)sizeFormat;
-(void)setSizeFormat:(int)arg1;
-(SFMapRegion *)boundingMapRegion;
-(SFColor *)pinColor;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(void)setBoundingMapRegion:(id)arg1;
-(SFColor *)backgroundColor;
-(NSString *)footnoteLabel;
-(void)setFootnote:(id)arg1;
-(void)setLocation:(id)arg1;
-(void)setInteractive:(BOOL)arg1;
-(NSString *)type;
-(NSString *)footnote;
-(void)setPins:(id)arg1;
-(NSArray *)punchoutOptions;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFLatLng, SFMapRegion, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFMapCardSection : SFCardSection <SFMapCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF8 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _interactive;
	int _separatorStyle;
	int _sizeFormat;
	int _pinBehavior;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFLatLng* _location;
	SFColor* _pinColor;
	NSString* _footnoteLabel;
	NSString* _footnote;
	SFMapRegion* _boundingMapRegion;
	NSArray* _pins;

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
@property (nonatomic,retain) SFLatLng * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) SFColor * pinColor;                                     //@synthesize pinColor=_pinColor - In the implementation block
@property (nonatomic,copy) NSString * footnoteLabel;                                 //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                      //@synthesize footnote=_footnote - In the implementation block
@property (assign,nonatomic) BOOL interactive;                                       //@synthesize interactive=_interactive - In the implementation block
@property (assign,nonatomic) int sizeFormat;                                         //@synthesize sizeFormat=_sizeFormat - In the implementation block
@property (nonatomic,retain) SFMapRegion * boundingMapRegion;                        //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (assign,nonatomic) int pinBehavior;                                        //@synthesize pinBehavior=_pinBehavior - In the implementation block
@property (nonatomic,copy) NSArray * pins;                                           //@synthesize pins=_pins - In the implementation block
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
-(NSArray *)pins;
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
-(SFLatLng *)location;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)setPinColor:(SFColor *)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1 ;
-(BOOL)interactive;
-(void)setFootnoteLabel:(NSString *)arg1 ;
-(int)sizeFormat;
-(void)setSizeFormat:(int)arg1 ;
-(SFMapRegion *)boundingMapRegion;
-(SFColor *)pinColor;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(void)setBoundingMapRegion:(SFMapRegion *)arg1 ;
-(SFColor *)backgroundColor;
-(NSString *)footnoteLabel;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setLocation:(SFLatLng *)arg1 ;
-(BOOL)hasInteractive;
-(BOOL)hasSizeFormat;
-(BOOL)hasPinBehavior;
-(void)setInteractive:(BOOL)arg1 ;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)footnote;
-(void)setPins:(NSArray *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

