/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, CNPostalAddress, _BlastDoorLPImage, NSNumber;

@interface _BlastDoorLPMapMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _name;
	NSString* _address;
	CNPostalAddress* _addressComponents;
	NSString* _category;
	_BlastDoorLPImage* _categoryIcon;
	NSString* _searchQuery;
	NSString* _directionsType;
	NSNumber* _transportType;
	NSString* _directionsSourceAddress;
	CNPostalAddress* _directionsSourceAddressComponents;
	NSString* _directionsSourceLocationName;
	NSString* _directionsDestinationAddress;
	CNPostalAddress* _directionsDestinationAddressComponents;
	NSString* _directionsDestinationLocationName;
	NSNumber* _distance;
	_BlastDoorLPImage* _image;
	_BlastDoorLPImage* _darkImage;
	CLLocationCoordinate2D _location;

}

@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D location;                                     //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * address;                                                    //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) CNPostalAddress * addressComponents;                                   //@synthesize addressComponents=_addressComponents - In the implementation block
@property (nonatomic,copy) NSString * category;                                                   //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * categoryIcon;                                    //@synthesize categoryIcon=_categoryIcon - In the implementation block
@property (nonatomic,copy) NSString * searchQuery;                                                //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy) NSString * directionsType;                                             //@synthesize directionsType=_directionsType - In the implementation block
@property (nonatomic,retain) NSNumber * transportType;                                            //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,copy) NSString * directionsSourceAddress;                                    //@synthesize directionsSourceAddress=_directionsSourceAddress - In the implementation block
@property (nonatomic,copy) CNPostalAddress * directionsSourceAddressComponents;                   //@synthesize directionsSourceAddressComponents=_directionsSourceAddressComponents - In the implementation block
@property (nonatomic,copy) NSString * directionsSourceLocationName;                               //@synthesize directionsSourceLocationName=_directionsSourceLocationName - In the implementation block
@property (nonatomic,copy) NSString * directionsDestinationAddress;                               //@synthesize directionsDestinationAddress=_directionsDestinationAddress - In the implementation block
@property (nonatomic,copy) CNPostalAddress * directionsDestinationAddressComponents;              //@synthesize directionsDestinationAddressComponents=_directionsDestinationAddressComponents - In the implementation block
@property (nonatomic,copy) NSString * directionsDestinationLocationName;                          //@synthesize directionsDestinationLocationName=_directionsDestinationLocationName - In the implementation block
@property (nonatomic,retain) NSNumber * distance;                                                 //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * image;                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * darkImage;                                       //@synthesize darkImage=_darkImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)setDistance:(NSNumber *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(void)setImage:(_BlastDoorLPImage *)arg1 ;
-(id)init;
-(NSString *)directionsType;
-(void)setDirectionsType:(NSString *)arg1 ;
-(NSNumber *)distance;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)setCategoryIcon:(_BlastDoorLPImage *)arg1 ;
-(void)setDarkImage:(_BlastDoorLPImage *)arg1 ;
-(void)setDirectionsSourceAddress:(NSString *)arg1 ;
-(void)setDirectionsSourceLocationName:(NSString *)arg1 ;
-(void)setDirectionsSourceAddressComponents:(CNPostalAddress *)arg1 ;
-(CLLocationCoordinate2D)location;
-(void)setDirectionsDestinationAddress:(NSString *)arg1 ;
-(void)setDirectionsDestinationAddressComponents:(CNPostalAddress *)arg1 ;
-(void)setDirectionsDestinationLocationName:(NSString *)arg1 ;
-(_BlastDoorLPImage *)categoryIcon;
-(NSString *)directionsSourceAddress;
-(CNPostalAddress *)directionsSourceAddressComponents;
-(NSString *)directionsSourceLocationName;
-(NSString *)directionsDestinationAddress;
-(CNPostalAddress *)directionsDestinationAddressComponents;
-(NSString *)directionsDestinationLocationName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransportType:(NSNumber *)arg1 ;
-(NSString *)category;
-(NSNumber *)transportType;
-(_BlastDoorLPImage *)image;
-(void)setLocation:(CLLocationCoordinate2D)arg1 ;
-(NSString *)name;
-(NSString *)address;
-(NSString *)searchQuery;
-(void)setAddress:(NSString *)arg1 ;
-(CNPostalAddress *)addressComponents;
-(void)setSearchQuery:(NSString *)arg1 ;
-(void)setAddressComponents:(CNPostalAddress *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_BlastDoorLPImage *)darkImage;
@end

