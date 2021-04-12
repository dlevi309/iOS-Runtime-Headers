/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)countryCode;
-(id)groupIdentifier;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(NSString *)subThoroughfare;
-(NSString *)thoroughfare;
-(NSString *)postalCode;
-(NSString *)city;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(NSNumber *)accuracy;
-(NSString *)street;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSArray *)entryPoints;
-(void)setEntryPoints:(NSArray *)arg1 ;
-(NSNumber *)travelTime;
-(void)setTravelTime:(NSNumber *)arg1 ;
-(NSNumber *)travelDistance;
-(void)setTravelDistance:(NSNumber *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)regionType;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setStreet:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(SADistance *)relativeDistance;
-(void)setRelativeDistance:(SADistance *)arg1 ;
-(void)setAccuracy:(NSNumber *)arg1 ;
-(NSData *)forwardGeoData;
-(void)setForwardGeoData:(NSData *)arg1 ;
-(void)setRegionType:(NSString *)arg1 ;
-(NSString *)stateCode;
-(void)setStateCode:(NSString *)arg1 ;
@end

