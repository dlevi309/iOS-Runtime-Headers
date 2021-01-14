/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBAttributionFooterCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBRichText, _SFPBPunchout, NSData;


@protocol _SFPBAttributionFooterCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,retain) _SFPBRichText * leadingAttribution; 
@property (nonatomic,retain) _SFPBPunchout * leadingAttributionPunchout; 
@property (nonatomic,retain) _SFPBRichText * trailingAttribution; 
@property (nonatomic,retain) _SFPBPunchout * trailingAttributionPunchout; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
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
-(_SFPBRichText *)leadingAttribution;
-(void)setLeadingAttribution:(id)arg1;
-(_SFPBPunchout *)leadingAttributionPunchout;
-(void)setLeadingAttributionPunchout:(id)arg1;
-(_SFPBRichText *)trailingAttribution;
-(void)setTrailingAttribution:(id)arg1;
-(_SFPBPunchout *)trailingAttributionPunchout;
-(void)setTrailingAttributionPunchout:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(NSString *)type;
-(NSArray *)punchoutOptions;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBRichText, _SFPBPunchout, NSData;

@interface _SFPBAttributionFooterCardSection : PBCodable <_SFPBAttributionFooterCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBRichText* _leadingAttribution;
	_SFPBPunchout* _leadingAttributionPunchout;
	_SFPBRichText* _trailingAttribution;
	_SFPBPunchout* _trailingAttributionPunchout;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                  //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                             //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                       //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                         //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                       //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                    //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                       //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) _SFPBRichText * leadingAttribution;                       //@synthesize leadingAttribution=_leadingAttribution - In the implementation block
@property (nonatomic,retain) _SFPBPunchout * leadingAttributionPunchout;               //@synthesize leadingAttributionPunchout=_leadingAttributionPunchout - In the implementation block
@property (nonatomic,retain) _SFPBRichText * trailingAttribution;                      //@synthesize trailingAttribution=_trailingAttribution - In the implementation block
@property (nonatomic,retain) _SFPBPunchout * trailingAttributionPunchout;              //@synthesize trailingAttributionPunchout=_trailingAttributionPunchout - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
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
-(NSData *)jsonData;
-(_SFPBRichText *)leadingAttribution;
-(void)setLeadingAttribution:(_SFPBRichText *)arg1 ;
-(_SFPBPunchout *)leadingAttributionPunchout;
-(void)setLeadingAttributionPunchout:(_SFPBPunchout *)arg1 ;
-(_SFPBRichText *)trailingAttribution;
-(void)setTrailingAttribution:(_SFPBRichText *)arg1 ;
-(_SFPBPunchout *)trailingAttributionPunchout;
-(void)setTrailingAttributionPunchout:(_SFPBPunchout *)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

