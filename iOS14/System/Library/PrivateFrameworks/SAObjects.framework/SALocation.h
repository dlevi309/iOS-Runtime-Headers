/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceComparable.h>

@class NSNumber, NSString, NSArray, NSData, SADistance;

@interface SALocation : SADomainObject <SAAceComparable>

@property (nonatomic,copy) NSNumber * accuracy; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSArray * entryPoints; 
@property (nonatomic,copy) NSData * forwardGeoData; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * regionType; 
@property (nonatomic,retain) SADistance * relativeDistance; 
@property (nonatomic,copy) NSString * stateCode; 
@property (nonatomic,copy) NSString * street; 
@property (nonatomic,copy) NSString * subAdministrativeArea; 
@property (nonatomic,copy) NSString * subLocality; 
@property (nonatomic,copy) NSString * subThoroughfare; 
@property (nonatomic,copy) NSString * thoroughfare; 
@property (nonatomic,copy) NSString * timezoneId; 
@property (nonatomic,copy) NSNumber * travelDistance; 
@property (nonatomic,copy) NSNumber * travelTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)location;
+(id)locationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSNumber *)latitude;
-(NSString *)subLocality;
-(NSNumber *)travelTime;
-(void)setTravelTime:(NSNumber *)arg1 ;
-(NSString *)postalCode;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)countryCode;
-(NSString *)street;
-(void)setStreet:(NSString *)arg1 ;
-(NSNumber *)travelDistance;
-(NSArray *)entryPoints;
-(id)groupIdentifier;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(NSString *)subAdministrativeArea;
-(void)setPostalCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(NSNumber *)longitude;
-(NSString *)subThoroughfare;
-(void)setAccuracy:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setEntryPoints:(NSArray *)arg1 ;
-(void)setTravelDistance:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(NSData *)forwardGeoData;
-(void)setForwardGeoData:(NSData *)arg1 ;
-(void)setRegionType:(NSString *)arg1 ;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(SADistance *)relativeDistance;
-(void)setRelativeDistance:(SADistance *)arg1 ;
-(NSString *)stateCode;
-(void)setStateCode:(NSString *)arg1 ;
-(NSString *)regionType;
-(NSNumber *)accuracy;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)thoroughfare;
@end

