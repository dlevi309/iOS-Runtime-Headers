/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString;


@protocol GEOAddressObjectProtocol <NSObject>
@property (nonatomic,readonly) NSString * displayLanguage; 
@property (nonatomic,readonly) BOOL hasKnownAccuracy; 
@property (nonatomic,readonly) int knownAccuracy; 
@required
+(id)libraryVersion;
-(id)weatherDisplayName;
-(id)addressDictionary;
-(id)phoneticName;
-(id)phoneticAddress;
-(id)venueLabel:(long long)arg1;
-(id)initWithContactAddressDictionary:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
-(id)spokenAddress;
-(id)venueLabel;
-(id)phoneticLocaleIdentifier;
-(BOOL)hasKnownAccuracy;
-(id)venueLevel;
-(id)name;
-(id)titlesForMapRect:(SCD_Struct_GE36)arg1;
-(id)fullAddressWithMultiline:(BOOL)arg1 relative:(id)arg2;
-(id)venueShortAddress;
-(id)address;
-(id)fullAddressNoCurrentCountryWithMultiline:(BOOL)arg1;
-(id)cnPostalAddress;
-(id)weatherLocationName;
-(NSString *)displayLanguage;
-(id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;
-(id)spokenStructuredAddress;
-(id)parkingDisplayName;
-(id)initWithCNPostalAddress:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
-(id)cityDisplayNameWithFallback:(BOOL)arg1;
-(id)spokenName;
-(int)knownAccuracy;
-(id)spokenAddressForLocale:(id)arg1;
-(id)shortAddress;
-(id)initWithCurrentCountry;
-(id)fullAddressWithMultiline:(BOOL)arg1;

@end

