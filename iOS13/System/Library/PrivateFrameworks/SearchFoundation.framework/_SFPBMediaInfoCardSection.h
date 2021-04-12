/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMediaInfoCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBMediaItem, _SFPBActionItem, _SFPBRichText, NSData;


@protocol _SFPBMediaInfoCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,retain) _SFPBMediaItem * mediaItem; 
@property (nonatomic,copy) NSArray * details; 
@property (nonatomic,retain) _SFPBActionItem * playAction; 
@property (nonatomic,copy) NSArray * offers; 
@property (nonatomic,copy) NSString * watchListIdentifier; 
@property (nonatomic,copy) NSString * watchListButtonLabel; 
@property (nonatomic,copy) NSString * watchListContinuationText; 
@property (nonatomic,copy) NSString * watchListConfirmationText; 
@property (assign,nonatomic) BOOL isMediaContainer; 
@property (nonatomic,retain) _SFPBRichText * specialOfferButtonLabel; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSArray *)details;
-(void)setDetails:(id)arg1;
-(_SFPBColor *)backgroundColor;
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
-(_SFPBMediaItem *)mediaItem;
-(void)setMediaItem:(id)arg1;
-(_SFPBActionItem *)playAction;
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
-(_SFPBRichText *)specialOfferButtonLabel;
-(void)setSpecialOfferButtonLabel:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)addDetails:(id)arg1;
-(void)addOffers:(id)arg1;
-(void)clearDetails;
-(unsigned long long)detailsCount;
-(id)detailsAtIndex:(unsigned long long)arg1;
-(void)clearOffers;
-(unsigned long long)offersCount;
-(id)offersAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBMediaItem, _SFPBActionItem, _SFPBRichText, NSData;

@interface _SFPBMediaInfoCardSection : PBCodable <_SFPBMediaInfoCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isMediaContainer;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBMediaItem* _mediaItem;
	NSArray* _details;
	_SFPBActionItem* _playAction;
	NSArray* _offers;
	NSString* _watchListIdentifier;
	NSString* _watchListButtonLabel;
	NSString* _watchListContinuationText;
	NSString* _watchListConfirmationText;
	_SFPBRichText* _specialOfferButtonLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions;                              //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                         //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                   //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                     //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                   //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                   //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) _SFPBMediaItem * mediaItem;                           //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy) NSArray * details;                                      //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) _SFPBActionItem * playAction;                         //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                       //@synthesize offers=_offers - In the implementation block
@property (nonatomic,copy) NSString * watchListIdentifier;                         //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
@property (nonatomic,copy) NSString * watchListButtonLabel;                        //@synthesize watchListButtonLabel=_watchListButtonLabel - In the implementation block
@property (nonatomic,copy) NSString * watchListContinuationText;                   //@synthesize watchListContinuationText=_watchListContinuationText - In the implementation block
@property (nonatomic,copy) NSString * watchListConfirmationText;                   //@synthesize watchListConfirmationText=_watchListConfirmationText - In the implementation block
@property (assign,nonatomic) BOOL isMediaContainer;                                //@synthesize isMediaContainer=_isMediaContainer - In the implementation block
@property (nonatomic,retain) _SFPBRichText * specialOfferButtonLabel;              //@synthesize specialOfferButtonLabel=_specialOfferButtonLabel - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSArray *)punchoutOptions;
-(id)initWithFacade:(id)arg1 ;
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
-(_SFPBMediaItem *)mediaItem;
-(void)setMediaItem:(_SFPBMediaItem *)arg1 ;
-(_SFPBActionItem *)playAction;
-(void)setPlayAction:(_SFPBActionItem *)arg1 ;
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
-(_SFPBRichText *)specialOfferButtonLabel;
-(void)setSpecialOfferButtonLabel:(_SFPBRichText *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)addDetails:(id)arg1 ;
-(void)addOffers:(id)arg1 ;
-(void)clearDetails;
-(unsigned long long)detailsCount;
-(id)detailsAtIndex:(unsigned long long)arg1 ;
-(void)clearOffers;
-(unsigned long long)offersCount;
-(id)offersAtIndex:(unsigned long long)arg1 ;
@end

