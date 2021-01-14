/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>

@class NSString, CNPostalAddress, LPImage, NSNumber;

@interface LPMapMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility> {

	NSString* _name;
	NSString* _address;
	CNPostalAddress* _addressComponents;
	NSString* _category;
	LPImage* _categoryIcon;
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
	LPImage* _image;
	LPImage* _darkImage;
	CLLocationCoordinate2D _location;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D location;                                     //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * address;                                                    //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) CNPostalAddress * addressComponents;                                   //@synthesize addressComponents=_addressComponents - In the implementation block
@property (nonatomic,copy) NSString * category;                                                   //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) LPImage * categoryIcon;                                              //@synthesize categoryIcon=_categoryIcon - In the implementation block
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
@property (nonatomic,retain) LPImage * image;                                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * darkImage;                                                 //@synthesize darkImage=_darkImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(long long)_style;
-(id)_address;
-(void)setDistance:(NSNumber *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)setImage:(LPImage *)arg1 ;
-(id)init;
-(NSString *)directionsType;
-(void)setDirectionsType:(NSString *)arg1 ;
-(NSNumber *)distance;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(void)setCategoryIcon:(LPImage *)arg1 ;
-(void)setDarkImage:(LPImage *)arg1 ;
-(void)setDirectionsSourceAddress:(NSString *)arg1 ;
-(void)setDirectionsSourceLocationName:(NSString *)arg1 ;
-(void)setDirectionsSourceAddressComponents:(CNPostalAddress *)arg1 ;
-(CLLocationCoordinate2D)location;
-(void)setDirectionsDestinationAddress:(NSString *)arg1 ;
-(void)setDirectionsDestinationAddressComponents:(CNPostalAddress *)arg1 ;
-(void)setDirectionsDestinationLocationName:(NSString *)arg1 ;
-(LPImage *)categoryIcon;
-(NSString *)directionsSourceAddress;
-(CNPostalAddress *)directionsSourceAddressComponents;
-(NSString *)directionsSourceLocationName;
-(NSString *)directionsDestinationAddress;
-(CNPostalAddress *)directionsDestinationAddressComponents;
-(NSString *)directionsDestinationLocationName;
-(id)_directionsSourceAddress;
-(id)_directionsDestinationAddress;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransportType:(NSNumber *)arg1 ;
-(NSString *)category;
-(NSNumber *)transportType;
-(LPImage *)image;
-(void)setLocation:(CLLocationCoordinate2D)arg1 ;
-(NSString *)name;
-(id)_name;
-(NSString *)address;
-(NSString *)searchQuery;
-(void)setAddress:(NSString *)arg1 ;
-(CNPostalAddress *)addressComponents;
-(id)_deduplicatedAddress;
-(BOOL)_isDirections;
-(id)_singleLineVerboseDescription;
-(id)_iconForTransport;
-(id)_resolvedImage;
-(id)_singleLineShortDescription;
-(id)_topLineForTransformer:(id)arg1 ;
-(id)_bottomLineForTwoUpForTransformer:(id)arg1 ;
-(void)setSearchQuery:(NSString *)arg1 ;
-(void)setAddressComponents:(CNPostalAddress *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(LPImage *)darkImage;
@end

