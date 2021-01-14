/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDetails:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(void)setMediaItem:(id)arg1;
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
-(void)setPlayAction:(id)arg1;
-(void)setWatchListIdentifier:(id)arg1;
-(void)setIsMediaContainer:(BOOL)arg1;
-(void)setWatchListButtonLabel:(id)arg1;
-(void)setWatchListConfirmationText:(id)arg1;
-(void)setWatchListContinuationText:(id)arg1;
-(void)setSpecialOfferButtonLabel:(id)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(NSData *)jsonData;
-(_SFPBActionItem *)playAction;
-(NSString *)watchListIdentifier;
-(NSString *)watchListButtonLabel;
-(NSString *)watchListContinuationText;
-(NSString *)watchListConfirmationText;
-(BOOL)isMediaContainer;
-(_SFPBRichText *)specialOfferButtonLabel;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(void)addDetails:(id)arg1;
-(void)addOffers:(id)arg1;
-(void)clearDetails;
-(unsigned long long)detailsCount;
-(id)detailsAtIndex:(unsigned long long)arg1;
-(void)clearOffers;
-(unsigned long long)offersCount;
-(id)offersAtIndex:(unsigned long long)arg1;
-(id)initWithDictionary:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(void)setOffers:(id)arg1;
-(_SFPBMediaItem *)mediaItem;
-(NSString *)type;
-(NSArray *)details;
-(NSArray *)punchoutOptions;
-(NSArray *)offers;
-(id)initWithJSON:(id)arg1;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setDetails:(NSArray *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)setMediaItem:(_SFPBMediaItem *)arg1 ;
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
-(void)setPlayAction:(_SFPBActionItem *)arg1 ;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(void)setIsMediaContainer:(BOOL)arg1 ;
-(void)setWatchListButtonLabel:(NSString *)arg1 ;
-(void)setWatchListConfirmationText:(NSString *)arg1 ;
-(void)setWatchListContinuationText:(NSString *)arg1 ;
-(void)setSpecialOfferButtonLabel:(_SFPBRichText *)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(NSData *)jsonData;
-(_SFPBActionItem *)playAction;
-(NSString *)watchListIdentifier;
-(NSString *)watchListButtonLabel;
-(NSString *)watchListContinuationText;
-(NSString *)watchListConfirmationText;
-(BOOL)isMediaContainer;
-(_SFPBRichText *)specialOfferButtonLabel;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(void)addDetails:(id)arg1 ;
-(void)addOffers:(id)arg1 ;
-(void)clearDetails;
-(unsigned long long)detailsCount;
-(id)detailsAtIndex:(unsigned long long)arg1 ;
-(void)clearOffers;
-(unsigned long long)offersCount;
-(id)offersAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setOffers:(NSArray *)arg1 ;
-(_SFPBMediaItem *)mediaItem;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSArray *)details;
-(void)writeTo:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(NSArray *)offers;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

