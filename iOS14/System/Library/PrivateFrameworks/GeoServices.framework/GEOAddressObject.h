/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOAddressObjectProtocol.h>

@class NSString, _GEOAddressObject;

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol> {

	_GEOAddressObject* _pimpl;
	int* _knownAccuracy;

}

@property (nonatomic,readonly) NSString * displayLanguage; 
@property (nonatomic,readonly) BOOL hasKnownAccuracy; 
@property (nonatomic,readonly) int knownAccuracy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setLoggingDebug:(BOOL)arg1 ;
+(id)libraryVersion;
+(BOOL)isMarkingMMStrings;
+(id)addressObjectForPlaceData:(id)arg1 ;
+(id)addressObjectWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 ;
+(void)markMMStrings:(BOOL)arg1 ;
+(BOOL)isLoggingDebug;
-(id)weatherDisplayName;
-(id)addressDictionary;
-(id)phoneticName;
-(id)phoneticAddress;
-(id)venueLabel:(long long)arg1 ;
-(id)initWithContactAddressDictionary:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4 ;
-(id)spokenAddress;
-(id)venueLabel;
-(id)phoneticLocaleIdentifier;
-(BOOL)hasKnownAccuracy;
-(id)venueLevel;
-(id)name;
-(id)titlesForMapRect:(SCD_Struct_GE36)arg1 ;
-(id)fullAddressWithMultiline:(BOOL)arg1 relative:(id)arg2 ;
-(id)venueShortAddress;
-(id)address;
-(id)fullAddressNoCurrentCountryWithMultiline:(BOOL)arg1 ;
-(id)rawBytes;
-(id)cnPostalAddress;
-(id)weatherLocationName;
-(NSString *)displayLanguage;
-(unsigned long long)hash;
-(id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7 ;
-(id)spokenStructuredAddress;
-(id)parkingDisplayName;
-(id)initWithCNPostalAddress:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4 ;
-(id)cityDisplayNameWithFallback:(BOOL)arg1 ;
-(id)spokenName;
-(int)knownAccuracy;
-(id)spokenAddressForLocale:(id)arg1 ;
-(id)shortAddress;
-(id)initWithCurrentCountry;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)fullAddressWithMultiline:(BOOL)arg1 ;
@end

