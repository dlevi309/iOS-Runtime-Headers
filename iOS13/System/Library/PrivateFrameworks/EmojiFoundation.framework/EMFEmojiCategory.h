/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


@class NSString;

@interface EMFEmojiCategory : NSObject {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * shortLocalizedName; 
+(BOOL)_isNoneVariantEmoji:(id)arg1 ;
+(BOOL)_isDingbatsVariantEmoji:(id)arg1 ;
+(BOOL)_isSkinToneEmoji:(id)arg1 ;
+(BOOL)_isCoupleMultiSkinToneEmoji:(id)arg1 ;
+(BOOL)_isGenderEmoji:(id)arg1 ;
+(BOOL)_isProfessionEmoji:(id)arg1 ;
+(id)_emojiSetForIdentifier:(id)arg1 ;
+(id)categoryWithIdentifier:(id)arg1 ;
+(id)localizedSkinToneEmojiDescription;
+(BOOL)_isComposedCoupleMultiSkinToneEmoji:(id)arg1 ;
+(id)PrepopulatedEmoji;
+(id)PeopleEmoji;
+(id)NatureEmoji;
+(id)FoodAndDrinkEmoji;
+(id)ActivityEmoji;
+(id)TravelAndPlacesEmoji;
+(id)ObjectsEmoji;
+(id)SymbolsEmoji;
+(id)computeEmojiFlagsSortedByLanguage;
+(id)extraFlagsForCountryCode:(id)arg1 ;
+(id)flagEmojiCountryCodesCommon;
+(id)stringToRegionalIndicatorString:(id)arg1 ;
+(id)insertionFlagsForCountryCodes:(id)arg1 inSortedCountryCodes:(id)arg2 ;
+(void)insertToSortedCountries:(id)arg1 withAdditionalFlags:(id)arg2 ;
+(id)FlagsEmoji;
+(id)_baseLocalizationKeyForIdentifier:(id)arg1 ;
+(id)DingbatsVariantEmoji;
+(id)NoneVariantEmoji;
+(id)SkinToneEmoji;
+(id)GenderEmoji;
+(id)ProfessionEmoji;
+(id)CoupleMultiSkinToneEmoji;
+(id)MultiPersonFamilySkinToneEmoji;
+(id)NewlyAddedEmoji;
+(id)categoryIdentifierList;
+(id)localizedRecentsDescription;
+(BOOL)_isFlagEmoji:(id)arg1 ;
+(BOOL)_isMultiPersonFamilySkinToneEmoji:(id)arg1 ;
+(BOOL)_isNewlyAddedEmoji:(id)arg1 ;
+(id)ProfessionWithoutSkinToneEmoji;
+(id)CelebrationEmoji;
-(void)dealloc;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)shortLocalizedName;
-(id)emojiTokensForLocaleData:(id)arg1 ;
@end

