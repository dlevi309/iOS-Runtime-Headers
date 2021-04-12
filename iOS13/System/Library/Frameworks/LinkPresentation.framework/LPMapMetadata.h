/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)address;
-(CNPostalAddress *)addressComponents;
-(long long)_style;
-(CLLocationCoordinate2D)location;
-(LPImage *)image;
-(void)setImage:(LPImage *)arg1 ;
-(NSNumber *)transportType;
-(id)_address;
-(void)setLocation:(CLLocationCoordinate2D)arg1 ;
-(void)setDistance:(NSNumber *)arg1 ;
-(NSNumber *)distance;
-(void)setAddress:(NSString *)arg1 ;
-(void)setTransportType:(NSNumber *)arg1 ;
-(NSString *)searchQuery;
-(NSString *)directionsType;
-(void)setDirectionsType:(NSString *)arg1 ;
-(void)setSearchQuery:(NSString *)arg1 ;
-(void)setAddressComponents:(CNPostalAddress *)arg1 ;
-(void)setCategoryIcon:(LPImage *)arg1 ;
-(void)setDarkImage:(LPImage *)arg1 ;
-(void)setDirectionsSourceAddress:(NSString *)arg1 ;
-(void)setDirectionsSourceLocationName:(NSString *)arg1 ;
-(void)setDirectionsSourceAddressComponents:(CNPostalAddress *)arg1 ;
-(void)setDirectionsDestinationAddress:(NSString *)arg1 ;
-(void)setDirectionsDestinationAddressComponents:(CNPostalAddress *)arg1 ;
-(void)setDirectionsDestinationLocationName:(NSString *)arg1 ;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(LPImage *)categoryIcon;
-(NSString *)directionsSourceAddress;
-(CNPostalAddress *)directionsSourceAddressComponents;
-(NSString *)directionsSourceLocationName;
-(NSString *)directionsDestinationAddress;
-(CNPostalAddress *)directionsDestinationAddressComponents;
-(NSString *)directionsDestinationLocationName;
-(LPImage *)darkImage;
-(id)_directionsSourceAddress;
-(id)_directionsDestinationAddress;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(id)_deduplicatedAddress;
-(BOOL)_isDirections;
-(id)_singleLineVerboseDescription;
-(id)_iconForTransport;
-(id)_resolvedImage;
-(id)_singleLineShortDescription;
-(id)_topLineForTransformer:(id)arg1 ;
-(id)_bottomLineForTwoUpForTransformer:(id)arg1 ;
@end

