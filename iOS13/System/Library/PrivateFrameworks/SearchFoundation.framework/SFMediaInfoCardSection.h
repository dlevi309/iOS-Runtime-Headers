/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFMediaInfoCardSection.h>
@class NSArray, NSString, SFColor, SFMediaItem, SFActionItem, SFRichText, NSDictionary, NSData;


@protocol SFMediaInfoCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFMediaItem * mediaItem; 
@property (nonatomic,copy) NSArray * details; 
@property (nonatomic,retain) SFActionItem * playAction; 
@property (nonatomic,copy) NSArray * offers; 
@property (nonatomic,copy) NSString * watchListIdentifier; 
@property (nonatomic,copy) NSString * watchListButtonLabel; 
@property (nonatomic,copy) NSString * watchListContinuationText; 
@property (nonatomic,copy) NSString * watchListConfirmationText; 
@property (assign,nonatomic) BOOL isMediaContainer; 
@property (nonatomic,retain) SFRichText * specialOfferButtonLabel; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)details;
-(void)setDetails:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
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
-(SFMediaItem *)mediaItem;
-(void)setMediaItem:(id)arg1;
-(SFActionItem *)playAction;
-(void)setPlayAction:(id)arg1;
-(NSArray *)offers;
-(void)setOffers:(id)arg1;
-(NSString *)watchListIdentifier;
-(void)setWatchListIdentifier:(id)arg1;
-(NSString *)watchListButtonLabel;
-(void)setWatchListButtonLabel:(id)arg1;
-(NSString *)watchListContinuationText;
-(void)setWatchListContinuationText:(id)arg1;
-(NSString *)watchListConfirmationText;
-(void)setWatchListConfirmationText:(id)arg1;
-(BOOL)isMediaContainer;
-(void)setIsMediaContainer:(BOOL)arg1;
-(SFRichText *)specialOfferButtonLabel;
-(void)setSpecialOfferButtonLabel:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFMediaItem, SFActionItem, SFRichText, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFMediaInfoCardSection : SFCardSection <SFMediaInfoCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isMediaContainer;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFMediaItem* _mediaItem;
	NSArray* _details;
	SFActionItem* _playAction;
	NSArray* _offers;
	NSString* _watchListIdentifier;
	NSString* _watchListButtonLabel;
	NSString* _watchListContinuationText;
	NSString* _watchListConfirmationText;
	SFRichText* _specialOfferButtonLabel;

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
@property (nonatomic,retain) SFMediaItem * mediaItem;                                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy) NSArray * details;                                        //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) SFActionItem * playAction;                              //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                         //@synthesize offers=_offers - In the implementation block
@property (nonatomic,copy) NSString * watchListIdentifier;                           //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
@property (nonatomic,copy) NSString * watchListButtonLabel;                          //@synthesize watchListButtonLabel=_watchListButtonLabel - In the implementation block
@property (nonatomic,copy) NSString * watchListContinuationText;                     //@synthesize watchListContinuationText=_watchListContinuationText - In the implementation block
@property (nonatomic,copy) NSString * watchListConfirmationText;                     //@synthesize watchListConfirmationText=_watchListConfirmationText - In the implementation block
@property (assign,nonatomic) BOOL isMediaContainer;                                  //@synthesize isMediaContainer=_isMediaContainer - In the implementation block
@property (nonatomic,retain) SFRichText * specialOfferButtonLabel;                   //@synthesize specialOfferButtonLabel=_specialOfferButtonLabel - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
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
-(SFMediaItem *)mediaItem;
-(void)setMediaItem:(SFMediaItem *)arg1 ;
-(SFActionItem *)playAction;
-(void)setPlayAction:(SFActionItem *)arg1 ;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(NSString *)watchListIdentifier;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(NSString *)watchListButtonLabel;
-(void)setWatchListButtonLabel:(NSString *)arg1 ;
-(NSString *)watchListContinuationText;
-(void)setWatchListContinuationText:(NSString *)arg1 ;
-(NSString *)watchListConfirmationText;
-(void)setWatchListConfirmationText:(NSString *)arg1 ;
-(BOOL)isMediaContainer;
-(void)setIsMediaContainer:(BOOL)arg1 ;
-(SFRichText *)specialOfferButtonLabel;
-(void)setSpecialOfferButtonLabel:(SFRichText *)arg1 ;
-(BOOL)hasIsMediaContainer;
@end

