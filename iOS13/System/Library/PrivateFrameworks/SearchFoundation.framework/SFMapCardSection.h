/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(SFLatLng *)location;
-(void)setLocation:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(BOOL)interactive;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(SFColor *)pinColor;
-(void)setInteractive:(BOOL)arg1;
-(void)setPinColor:(id)arg1;
-(SFMapRegion *)boundingMapRegion;
-(void)setBoundingMapRegion:(id)arg1;
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
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1;
-(NSString *)footnoteLabel;
-(void)setFootnoteLabel:(id)arg1;
-(NSString *)footnote;
-(void)setFootnote:(id)arg1;
-(int)sizeFormat;
-(void)setSizeFormat:(int)arg1;
-(NSArray *)pins;
-(void)setPins:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFLatLng, SFMapRegion, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFMapCardSection : SFCardSection <SFMapCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF9 _has;
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
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(SFLatLng *)location;
-(void)setLocation:(SFLatLng *)arg1 ;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(BOOL)interactive;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(SFColor *)pinColor;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setPinColor:(SFColor *)arg1 ;
-(SFMapRegion *)boundingMapRegion;
-(void)setBoundingMapRegion:(SFMapRegion *)arg1 ;
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
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1 ;
-(NSString *)footnoteLabel;
-(void)setFootnoteLabel:(NSString *)arg1 ;
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(int)sizeFormat;
-(void)setSizeFormat:(int)arg1 ;
-(NSArray *)pins;
-(void)setPins:(NSArray *)arg1 ;
-(BOOL)hasInteractive;
-(BOOL)hasSizeFormat;
-(BOOL)hasPinBehavior;
@end

