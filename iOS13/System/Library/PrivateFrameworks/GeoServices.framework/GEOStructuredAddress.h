/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable <GEOURLSerializable, NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE77* _geoIds;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)areaOfInterestType;
+(Class)dependentLocalityType;
+(Class)subPremiseType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)subThoroughfare;
-(NSString *)thoroughfare;
-(NSString *)country;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(id)addressDictionary;
-(NSString *)locality;
-(NSString *)administrativeArea;
-(NSString *)fullThoroughfare;
-(NSString *)inlandWater;
-(NSString *)ocean;
-(id)postalAddress;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(long long*)geoIds;
-(void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(void)setPostCode:(NSString *)arg1 ;
-(void)setFullThoroughfare:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(BOOL)hasAdministrativeAreaCode;
-(NSString *)administrativeAreaCode;
-(BOOL)hasAdministrativeArea;
-(BOOL)hasLocality;
-(BOOL)hasPostCode;
-(NSString *)postCode;
-(BOOL)hasFullThoroughfare;
-(void)setCountry:(NSString *)arg1 ;
-(NSMutableArray *)areaOfInterests;
-(NSString *)premises;
-(NSString *)postCodeExtension;
-(NSMutableArray *)dependentLocalitys;
-(NSString *)premise;
-(NSString *)postCodeFull;
-(void)addAreaOfInterest:(id)arg1 ;
-(void)addDependentLocality:(id)arg1 ;
-(void)addSubPremise:(id)arg1 ;
-(void)setAdministrativeAreaCode:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setPremises:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setPostCodeExtension:(NSString *)arg1 ;
-(unsigned long long)areaOfInterestsCount;
-(void)clearAreaOfInterests;
-(id)areaOfInterestAtIndex:(unsigned long long)arg1 ;
-(void)setInlandWater:(NSString *)arg1 ;
-(void)setOcean:(NSString *)arg1 ;
-(unsigned long long)dependentLocalitysCount;
-(void)clearDependentLocalitys;
-(id)dependentLocalityAtIndex:(unsigned long long)arg1 ;
-(void)setPremise:(NSString *)arg1 ;
-(unsigned long long)subPremisesCount;
-(void)clearSubPremises;
-(id)subPremiseAtIndex:(unsigned long long)arg1 ;
-(void)setPostCodeFull:(NSString *)arg1 ;
-(long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(void)addGeoId:(long long)arg1 ;
-(NSMutableArray *)subPremises;
-(BOOL)hasCountry;
-(BOOL)hasSubAdministrativeArea;
-(BOOL)hasSubLocality;
-(BOOL)hasPremises;
-(BOOL)hasThoroughfare;
-(BOOL)hasSubThoroughfare;
-(BOOL)hasPostCodeExtension;
-(void)setAreaOfInterests:(NSMutableArray *)arg1 ;
-(BOOL)hasInlandWater;
-(BOOL)hasOcean;
-(void)setDependentLocalitys:(NSMutableArray *)arg1 ;
-(BOOL)hasPremise;
-(void)setSubPremises:(NSMutableArray *)arg1 ;
-(BOOL)hasPostCodeFull;
-(id)initWithAddressDictionary:(id)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
@end

