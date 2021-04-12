/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
@class ABVCardValueSetter, ABVCardLexer, NSData, NSString, NSMutableArray, NSMutableDictionary, NSMutableString, ABVCardWatchdogTimer;

@interface ABVCardParser : NSObject {

	ABVCardValueSetter* _valueSetter;
	void* _source;
	ABVCardLexer* _lexer;
	NSData* _data;
	unsigned long long _defaultEncoding;
	BOOL _hasImportErrors;
	BOOL _30vCard;
	NSString* _first;
	NSString* _last;
	NSString* _org;
	NSString* _formattedName;
	NSMutableArray* _emails;
	NSMutableArray* _dates;
	NSMutableArray* _phones;
	NSMutableArray* _addresses;
	NSMutableArray* _aims;
	NSMutableArray* _jabbers;
	NSMutableArray* _msns;
	NSMutableArray* _yahoos;
	NSMutableArray* _icqs;
	NSMutableArray* _untypedIMs;
	NSMutableArray* _instantMessengers;
	NSMutableArray* _socialProfiles;
	NSMutableArray* _relatedNames;
	NSMutableArray* _urls;
	NSMutableDictionary* _activityAlerts;
	NSMutableString* _notes;
	NSMutableString* _otherNotes;
	NSMutableDictionary* _extensions;
	NSString* _uid;
	NSData* _imageData;
	NSString* _imageURI;
	int _cropRectX;
	int _cropRectY;
	int _cropRectWidth;
	int _cropRectHeight;
	NSData* _cropRectChecksum;
	NSMutableArray* _itemParameters;
	NSString* _grouping;
	unsigned long long _encoding;
	BOOL _quotedPrintable;
	BOOL _base64;
	ABVCardWatchdogTimer* _timer;

}

@property (assign,nonatomic) void* source; 
+(CFArrayRef)supportedProperties;
-(BOOL)parseN;
-(BOOL)parseUID;
-(id)init;
-(BOOL)parseTEL;
-(BOOL)parseADR;
-(BOOL)parseBDAY;
-(id)_valueSetter;
-(BOOL)parseIMPP;
-(id)initWithData:(id)arg1 ;
-(void)setSource:(void*)arg1 ;
-(id)sortedPeopleAndProperties:(const _CFArray*)arg1 ;
-(BOOL)_usesArrayForExternalPropKey:(id)arg1 ;
-(BOOL)parseORG;
-(id)phoneLabel;
-(id)initWithData:(id)arg1 watchdogTimer:(id)arg2 ;
-(BOOL)parseEMAIL;
-(void)cleanUpCardState;
-(void)setLocalRecordHasAdditionalProperties:(BOOL)arg1 ;
-(void)_setValueFromExtension:(id)arg1 forKey:(id)arg2 onAddress:(id)arg3 toKey:(id)arg4 ;
-(int)_addIMPPProfiles:(id)arg1 multiValue:(void*)arg2 uniquenessCheckingMultiValue:(void*)arg3 ;
-(BOOL)_setPersonSounds:(void*)arg1 identifier:(int)arg2 fromActivity:(id)arg3 alert:(id)arg4 otherValue:(id)arg5 ;
-(int)_addIMHandles:(id)arg1 toService:(CFStringRef)arg2 multiValue:(void*)arg3 uniquenessCheckingMultiValue:(void*)arg4 ;
-(void)noteLackOfValueForProperty:(unsigned)arg1 ;
-(void)addMultiValues:(id)arg1 toProperty:(unsigned)arg2 valueComparator:(/*^block*/id)arg3 ;
-(id)_genericLabel;
-(id)defaultURLLabel;
-(BOOL)_setStringValueOrNoteIfNull:(id)arg1 forProperty:(unsigned)arg2 ;
-(id)parseSingleValue;
-(id)_socialProfileService;
-(id)_socialProfileUsername;
-(id)_socialProfileUserId;
-(id)_socialProfileDisplayName;
-(BOOL)addIMValueTo:(id)arg1 ;
-(id)_socialProfileTeamIdentifier;
-(id)_socialProfileBundleIdentifiers;
-(id)parseInstantMessengerProfile:(id)arg1 ;
-(BOOL)_setDataValueOrNoteIfNull:(id)arg1 forProperty:(unsigned)arg2 ;
-(id)parseRemainingLine;
-(BOOL)parsePhoto:(id)arg1 ;
-(id)dateFromISO8601String:(id)arg1 ;
-(BOOL)parseVERSION;
-(BOOL)parseABUID;
-(BOOL)parseABExtensionType:(id)arg1 ;
-(BOOL)parseNICKNAME;
-(BOOL)parseABDATE;
-(void)parseABOrder;
-(void)parseABPhoto;
-(void)parseABShowAs;
-(BOOL)parseAlternateBirthday;
-(BOOL)parseIMAGETYPE;
-(BOOL)parseIMAGEHASH;
-(BOOL)parseABMaiden;
-(BOOL)parseSocialProfiles;
-(BOOL)parseABReleatedNames;
-(BOOL)parseActivityAlerts;
-(BOOL)parseGuardianWhitelisted;
-(id)parseValueArray;
-(BOOL)_usesRemainingLineForExternalPropKey:(id)arg1 ;
-(BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2 ;
-(BOOL)importToValueSetter:(id)arg1 ;
-(void)addAddressMultiValues;
-(BOOL)hasImportErrors;
-(BOOL)_setMultiValuesOrNoteIfNull:(id)arg1 forProperty:(unsigned)arg2 valueComparator:(/*^block*/id)arg3 ;
-(void)addSocialProfileMultiValues;
-(void)addInstantMessageMultiValues;
-(void)addActivityAlertMultiValues;
-(CFArrayRef)peopleAndProperties:(const _CFArray*)arg1 ;
-(void)noteLackOfValueForImageData;
-(BOOL)importToPerson:(void*)arg1 foundProperties:(const _CFArray*)arg2 ;
-(void*)copyNextPersonWithLength:(int*)arg1 foundProperties:(const _CFArray*)arg2 ;
-(id)genericLabel;
-(BOOL)_setIntValueOrNoteIfNull:(int)arg1 forProperty:(int)arg2 ;
-(id)defaultADRLabel;
-(id)parseURL;
-(BOOL)parseADD;
-(id)defaultLabel;
-(BOOL)parseItem;
-(void)dealloc;
-(void*)source;
@end

