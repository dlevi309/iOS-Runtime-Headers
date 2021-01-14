/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable <GEOURLSerializable, NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE72* _geoIds;
	NSString* _administrativeAreaCode;
	NSString* _administrativeArea;
	NSMutableArray* _areaOfInterests;
	NSString* _countryCode;
	NSString* _country;
	NSMutableArray* _dependentLocalitys;
	NSString* _fullThoroughfare;
	NSString* _inlandWater;
	NSString* _locality;
	NSString* _ocean;
	NSString* _postCodeExtension;
	NSString* _postCodeFull;
	NSString* _postCode;
	NSString* _premises;
	NSString* _premise;
	NSString* _subAdministrativeArea;
	NSString* _subLocality;
	NSMutableArray* _subPremises;
	NSString* _subThoroughfare;
	NSString* _thoroughfare;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,readonly) BOOL hasAdministrativeArea; 
@property (nonatomic,retain) NSString * administrativeArea; 
@property (nonatomic,readonly) BOOL hasAdministrativeAreaCode; 
@property (nonatomic,retain) NSString * administrativeAreaCode; 
@property (nonatomic,readonly) BOOL hasSubAdministrativeArea; 
@property (nonatomic,retain) NSString * subAdministrativeArea; 
@property (nonatomic,readonly) BOOL hasLocality; 
@property (nonatomic,retain) NSString * locality; 
@property (nonatomic,readonly) BOOL hasPostCode; 
@property (nonatomic,retain) NSString * postCode; 
@property (nonatomic,readonly) BOOL hasSubLocality; 
@property (nonatomic,retain) NSString * subLocality; 
@property (nonatomic,readonly) BOOL hasPremises; 
@property (nonatomic,retain) NSString * premises; 
@property (nonatomic,readonly) BOOL hasThoroughfare; 
@property (nonatomic,retain) NSString * thoroughfare; 
@property (nonatomic,readonly) BOOL hasSubThoroughfare; 
@property (nonatomic,retain) NSString * subThoroughfare; 
@property (nonatomic,readonly) BOOL hasFullThoroughfare; 
@property (nonatomic,retain) NSString * fullThoroughfare; 
@property (nonatomic,readonly) BOOL hasPostCodeExtension; 
@property (nonatomic,retain) NSString * postCodeExtension; 
@property (nonatomic,retain) NSMutableArray * areaOfInterests; 
@property (nonatomic,readonly) BOOL hasInlandWater; 
@property (nonatomic,retain) NSString * inlandWater; 
@property (nonatomic,readonly) BOOL hasOcean; 
@property (nonatomic,retain) NSString * ocean; 
@property (nonatomic,retain) NSMutableArray * dependentLocalitys; 
@property (nonatomic,readonly) BOOL hasPremise; 
@property (nonatomic,retain) NSString * premise; 
@property (nonatomic,retain) NSMutableArray * subPremises; 
@property (nonatomic,readonly) BOOL hasPostCodeFull; 
@property (nonatomic,retain) NSString * postCodeFull; 
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) long long* geoIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)subPremiseType;
+(Class)areaOfInterestType;
+(BOOL)isValid:(id)arg1 ;
+(Class)dependentLocalityType;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasSubLocality;
-(id)dictionaryRepresentation;
-(NSString *)subLocality;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)countryCode;
-(NSString *)ocean;
-(NSMutableArray *)areaOfInterests;
-(NSString *)country;
-(id)addressDictionary;
-(BOOL)hasSubAdministrativeArea;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(NSString *)subAdministrativeArea;
-(long long*)geoIds;
-(id)jsonRepresentation;
-(BOOL)hasCountryCode;
-(NSString *)premise;
-(BOOL)hasOcean;
-(NSString *)postCodeFull;
-(NSString *)postCodeExtension;
-(NSMutableArray *)dependentLocalitys;
-(void)setPremises:(NSString *)arg1 ;
-(void)setOcean:(NSString *)arg1 ;
-(void)setAdministrativeAreaCode:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setPostCodeExtension:(NSString *)arg1 ;
-(void)addAreaOfInterest:(id)arg1 ;
-(void)setInlandWater:(NSString *)arg1 ;
-(void)addDependentLocality:(id)arg1 ;
-(void)setPremise:(NSString *)arg1 ;
-(void)addSubPremise:(id)arg1 ;
-(void)setPostCodeFull:(NSString *)arg1 ;
-(void)clearAreaOfInterests;
-(id)areaOfInterestAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dependentLocalitysCount;
-(void)clearDependentLocalitys;
-(id)dependentLocalityAtIndex:(unsigned long long)arg1 ;
-(void)clearSubPremises;
-(id)subPremiseAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPremises;
-(BOOL)hasThoroughfare;
-(BOOL)hasSubThoroughfare;
-(BOOL)hasPostCodeExtension;
-(void)setAreaOfInterests:(NSMutableArray *)arg1 ;
-(BOOL)hasInlandWater;
-(void)setDependentLocalitys:(NSMutableArray *)arg1 ;
-(BOOL)hasPremise;
-(NSMutableArray *)subPremises;
-(void)setSubPremises:(NSMutableArray *)arg1 ;
-(BOOL)hasPostCodeFull;
-(id)urlRepresentation;
-(BOOL)hasAdministrativeArea;
-(NSString *)subThoroughfare;
-(void)setCountry:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)subPremisesCount;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasCountry;
-(NSString *)locality;
-(NSString *)description;
-(NSString *)postCode;
-(void)addGeoId:(long long)arg1 ;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)premises;
-(unsigned long long)areaOfInterestsCount;
-(NSString *)inlandWater;
-(long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasLocality;
-(void)setSubLocality:(NSString *)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEmpty;
-(void)writeTo:(id)arg1 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(void)setPostCode:(NSString *)arg1 ;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(BOOL)hasPostCode;
-(void)setFullThoroughfare:(NSString *)arg1 ;
-(BOOL)hasAdministrativeAreaCode;
-(NSString *)fullThoroughfare;
-(NSString *)administrativeAreaCode;
-(BOOL)hasFullThoroughfare;
-(id)initWithAddressDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)thoroughfare;
-(id)initWithJSON:(id)arg1 ;
-(id)postalAddress;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

