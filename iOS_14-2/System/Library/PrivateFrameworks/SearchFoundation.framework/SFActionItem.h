/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFActionItem.h>
@class NSString, NSArray, SFPunchout, NSData, SFImage, SFLatLng, NSURL, NSDictionary;


@protocol SFActionItem <NSObject>
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * labelForLocalMedia; 
@property (assign,nonatomic) BOOL isOverlay; 
@property (nonatomic,copy) NSArray * storeIdentifiers; 
@property (assign,nonatomic) BOOL requiresLocalMedia; 
@property (nonatomic,copy) NSString * localMediaIdentifier; 
@property (nonatomic,retain) SFPunchout * punchout; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSData * mapsData; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (nonatomic,copy) NSString * provider; 
@property (nonatomic,copy) NSString * offerType; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * labelITunes; 
@property (assign,nonatomic) BOOL isITunes; 
@property (nonatomic,retain) SFImage * icon; 
@property (nonatomic,retain) SFImage * baseIcon; 
@property (nonatomic,retain) SFLatLng * location; 
@property (nonatomic,copy) NSString * messageIdentifier; 
@property (nonatomic,copy) NSURL * messageURL; 
@property (nonatomic,copy) NSString * persistentID; 
@property (assign,nonatomic) int mediaEntityType; 
@property (nonatomic,copy) NSString * universalLibraryID; 
@property (nonatomic,copy) NSString * interactionContentType; 
@property (nonatomic,retain) SFPunchout * customDirectionsPunchout; 
@property (assign,nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute; 
@property (assign,nonatomic) int directionsMode; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setEmail:(id)arg1;
-(double)latitude;
-(NSString *)contactIdentifier;
-(void)setProvider:(id)arg1;
-(void)setPunchout:(id)arg1;
-(void)setIsOverlay:(BOOL)arg1;
-(void)setPersistentID:(id)arg1;
-(void)setLabelForLocalMedia:(id)arg1;
-(void)setRequiresLocalMedia:(BOOL)arg1;
-(void)setLabelITunes:(id)arg1;
-(void)setIsITunes:(BOOL)arg1;
-(NSString *)provider;
-(void)setBaseIcon:(id)arg1;
-(SFLatLng *)location;
-(double)longitude;
-(SFImage *)icon;
-(NSData *)jsonData;
-(NSString *)phoneNumber;
-(void)setLongitude:(double)arg1;
-(NSData *)mapsData;
-(void)setMapsData:(id)arg1;
-(void)setIcon:(id)arg1;
-(void)setLocalMediaIdentifier:(id)arg1;
-(void)setMediaEntityType:(int)arg1;
-(void)setUniversalLibraryID:(id)arg1;
-(void)setInteractionContentType:(id)arg1;
-(void)setCustomDirectionsPunchout:(id)arg1;
-(void)setShouldSearchDirectionsAlongCurrentRoute:(BOOL)arg1;
-(void)setDirectionsMode:(int)arg1;
-(NSString *)labelForLocalMedia;
-(BOOL)requiresLocalMedia;
-(NSString *)localMediaIdentifier;
-(NSString *)labelITunes;
-(int)mediaEntityType;
-(NSString *)universalLibraryID;
-(NSString *)interactionContentType;
-(SFPunchout *)customDirectionsPunchout;
-(int)directionsMode;
-(void)setType:(id)arg1;
-(void)setMessageURL:(id)arg1;
-(void)setLocation:(id)arg1;
-(void)setLatitude:(double)arg1;
-(BOOL)isOverlay;
-(NSURL *)messageURL;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(id)arg1;
-(NSArray *)storeIdentifiers;
-(NSString *)persistentID;
-(void)setPhoneNumber:(id)arg1;
-(void)setStoreIdentifiers:(id)arg1;
-(SFPunchout *)punchout;
-(NSString *)type;
-(void)setContactIdentifier:(id)arg1;
-(void)setOfferType:(id)arg1;
-(BOOL)isITunes;
-(SFImage *)baseIcon;
-(void)setLabel:(id)arg1;
-(BOOL)shouldSearchDirectionsAlongCurrentRoute;
-(NSString *)offerType;
-(NSString *)email;
-(NSString *)label;
-(NSString *)applicationBundleIdentifier;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SFPunchout, NSData, SFImage, SFLatLng, NSURL, NSDictionary;

@interface SFActionItem : NSObject <SFActionItem, NSSecureCoding, NSCopying> {

	SCD_Struct_SF1 _has;
	BOOL _isOverlay;
	BOOL _requiresLocalMedia;
	BOOL _isITunes;
	BOOL _shouldSearchDirectionsAlongCurrentRoute;
	int _mediaEntityType;
	int _directionsMode;
	NSString* _label;
	NSString* _labelForLocalMedia;
	NSArray* _storeIdentifiers;
	NSString* _localMediaIdentifier;
	SFPunchout* _punchout;
	NSString* _applicationBundleIdentifier;
	NSString* _contactIdentifier;
	NSString* _phoneNumber;
	NSString* _email;
	NSData* _mapsData;
	double _latitude;
	double _longitude;
	NSString* _provider;
	NSString* _offerType;
	NSString* _type;
	NSString* _labelITunes;
	SFImage* _icon;
	SFImage* _baseIcon;
	SFLatLng* _location;
	NSString* _messageIdentifier;
	NSURL* _messageURL;
	NSString* _persistentID;
	NSString* _universalLibraryID;
	NSString* _interactionContentType;
	SFPunchout* _customDirectionsPunchout;

}

@property (nonatomic,copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * labelForLocalMedia;                               //@synthesize labelForLocalMedia=_labelForLocalMedia - In the implementation block
@property (assign,nonatomic) BOOL isOverlay;                                            //@synthesize isOverlay=_isOverlay - In the implementation block
@property (nonatomic,copy) NSArray * storeIdentifiers;                                  //@synthesize storeIdentifiers=_storeIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL requiresLocalMedia;                                   //@synthesize requiresLocalMedia=_requiresLocalMedia - In the implementation block
@property (nonatomic,copy) NSString * localMediaIdentifier;                             //@synthesize localMediaIdentifier=_localMediaIdentifier - In the implementation block
@property (nonatomic,retain) SFPunchout * punchout;                                     //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                      //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                      //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * email;                                            //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSData * mapsData;                                           //@synthesize mapsData=_mapsData - In the implementation block
@property (assign,nonatomic) double latitude;                                           //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                          //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSString * provider;                                         //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSString * offerType;                                        //@synthesize offerType=_offerType - In the implementation block
@property (nonatomic,copy) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * labelITunes;                                      //@synthesize labelITunes=_labelITunes - In the implementation block
@property (assign,nonatomic) BOOL isITunes;                                             //@synthesize isITunes=_isITunes - In the implementation block
@property (nonatomic,retain) SFImage * icon;                                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) SFImage * baseIcon;                                        //@synthesize baseIcon=_baseIcon - In the implementation block
@property (nonatomic,retain) SFLatLng * location;                                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * messageIdentifier;                                //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * messageURL;                                          //@synthesize messageURL=_messageURL - In the implementation block
@property (nonatomic,copy) NSString * persistentID;                                     //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) int mediaEntityType;                                       //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (nonatomic,copy) NSString * universalLibraryID;                               //@synthesize universalLibraryID=_universalLibraryID - In the implementation block
@property (nonatomic,copy) NSString * interactionContentType;                           //@synthesize interactionContentType=_interactionContentType - In the implementation block
@property (nonatomic,retain) SFPunchout * customDirectionsPunchout;                     //@synthesize customDirectionsPunchout=_customDirectionsPunchout - In the implementation block
@property (assign,nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute;              //@synthesize shouldSearchDirectionsAlongCurrentRoute=_shouldSearchDirectionsAlongCurrentRoute - In the implementation block
@property (assign,nonatomic) int directionsMode;                                        //@synthesize directionsMode=_directionsMode - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setEmail:(NSString *)arg1 ;
-(double)latitude;
-(NSString *)contactIdentifier;
-(void)setProvider:(NSString *)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(void)setIsOverlay:(BOOL)arg1 ;
-(void)setPersistentID:(NSString *)arg1 ;
-(void)setLabelForLocalMedia:(NSString *)arg1 ;
-(void)setRequiresLocalMedia:(BOOL)arg1 ;
-(void)setLabelITunes:(NSString *)arg1 ;
-(void)setIsITunes:(BOOL)arg1 ;
-(NSString *)provider;
-(void)setBaseIcon:(SFImage *)arg1 ;
-(SFLatLng *)location;
-(double)longitude;
-(SFImage *)icon;
-(NSData *)jsonData;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(NSData *)mapsData;
-(void)setMapsData:(NSData *)arg1 ;
-(void)setIcon:(SFImage *)arg1 ;
-(void)setLocalMediaIdentifier:(NSString *)arg1 ;
-(void)setMediaEntityType:(int)arg1 ;
-(void)setUniversalLibraryID:(NSString *)arg1 ;
-(void)setInteractionContentType:(NSString *)arg1 ;
-(void)setCustomDirectionsPunchout:(SFPunchout *)arg1 ;
-(void)setShouldSearchDirectionsAlongCurrentRoute:(BOOL)arg1 ;
-(void)setDirectionsMode:(int)arg1 ;
-(NSString *)labelForLocalMedia;
-(BOOL)requiresLocalMedia;
-(NSString *)localMediaIdentifier;
-(NSString *)labelITunes;
-(int)mediaEntityType;
-(NSString *)universalLibraryID;
-(NSString *)interactionContentType;
-(SFPunchout *)customDirectionsPunchout;
-(int)directionsMode;
-(void)setType:(NSString *)arg1 ;
-(void)setMessageURL:(NSURL *)arg1 ;
-(void)setLocation:(SFLatLng *)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(BOOL)isOverlay;
-(BOOL)hasIsOverlay;
-(BOOL)hasRequiresLocalMedia;
-(BOOL)hasIsITunes;
-(BOOL)hasMediaEntityType;
-(BOOL)hasShouldSearchDirectionsAlongCurrentRoute;
-(BOOL)hasDirectionsMode;
-(NSURL *)messageURL;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
-(NSArray *)storeIdentifiers;
-(NSString *)persistentID;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setStoreIdentifiers:(NSArray *)arg1 ;
-(SFPunchout *)punchout;
-(NSString *)type;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setOfferType:(NSString *)arg1 ;
-(BOOL)isITunes;
-(SFImage *)baseIcon;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)shouldSearchDirectionsAlongCurrentRoute;
-(NSString *)offerType;
-(NSString *)email;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSString *)applicationBundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

