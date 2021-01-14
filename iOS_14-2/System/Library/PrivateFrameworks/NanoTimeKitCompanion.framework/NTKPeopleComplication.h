/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplication.h>

@class NSString;

@interface NTKPeopleComplication : NTKComplication {

	NSString* _storeBackedContactID;
	NSString* _contactID;
	NSString* _shortName;
	NSString* _fullName;
	NSString* _abbreviation;

}

@property (nonatomic,readonly) NSString * contactID;                                       //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,readonly) NSString * storeBackedContactID;                            //@synthesize storeBackedContactID=_storeBackedContactID - In the implementation block
@property (nonatomic,readonly) NSString * shortName;                                       //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,readonly) NSString * fullName;                                        //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSString * abbreviation;                                    //@synthesize abbreviation=_abbreviation - In the implementation block
@property (getter=isFavoritedPerson,nonatomic,readonly) BOOL favoritedPerson; 
+(BOOL)supportsSecureCoding;
+(id)_allComplicationConfigurationsWithType:(unsigned long long)arg1 ;
+(BOOL)_complicationPickerShouldShowMoreButtonForList:(id)arg1 ;
+(id)complicationForContact:(id)arg1 forFavoriteList:(BOOL)arg2 ;
+(id)allValidFavoriteContacts;
+(id)localizedNameForContact:(id)arg1 ;
-(NSString *)abbreviation;
-(NSString *)contactID;
-(NSString *)fullName;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortName;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)ntk_sectionIdentifier;
-(id)ntk_contactIdentifier;
-(unsigned long long)ntk_itemType;
-(BOOL)isFavoritedPerson;
-(id)_generateUniqueIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg1 ;
-(id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(id)localizedKeylineLabelText;
-(id)localizedDetailText;
-(BOOL)appearsInDailySnapshotForFamily:(long long)arg1 ;
-(id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2 ;
-(BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(id)localizedRichDetailText;
-(id)localizedRichKeylineLabelText;
-(NSString *)storeBackedContactID;
-(void)_registerWithSwitch:(BOOL)arg1 ;
-(void)_contactsCacheDidChange;
-(void)_refreshContactInfoNotifyOfChange;
-(void)_updateStateWithContact:(id)arg1 foundAsPrimaryId:(BOOL)arg2 ;
-(id)_complicationTypeString;
@end

