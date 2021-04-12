/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSURL, NSDictionary, NSDate;

@interface PPConnectionsLocation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _copiedToPasteboard;
	BOOL _shouldAggregate;
	NSString* _name;
	NSString* _originatingBundleID;
	NSString* _fullFormattedAddress;
	NSString* _thoroughfare;
	NSString* _subThoroughfare;
	NSString* _locality;
	NSString* _administrativeArea;
	NSString* _postalCode;
	NSString* _country;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSURL* _originatingWebsiteURL;
	NSURL* _mapItemURL;
	NSString* _label;
	NSString* _value;
	NSString* _shortValue;
	NSString* _documentID;
	NSDictionary* _addressComponents;
	NSString* _source;
	NSString* _trigger;
	NSDate* _createdAt;
	NSNumber* _lifetime;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * originatingBundleID;                //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (nonatomic,copy) NSString * fullFormattedAddress;               //@synthesize fullFormattedAddress=_fullFormattedAddress - In the implementation block
@property (nonatomic,copy) NSString * thoroughfare;                       //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,copy) NSString * subThoroughfare;                    //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,copy) NSString * locality;                           //@synthesize locality=_locality - In the implementation block
@property (nonatomic,copy) NSString * administrativeArea;                 //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSNumber * latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSURL * originatingWebsiteURL;                 //@synthesize originatingWebsiteURL=_originatingWebsiteURL - In the implementation block
@property (nonatomic,copy) NSURL * mapItemURL;                            //@synthesize mapItemURL=_mapItemURL - In the implementation block
@property (assign,nonatomic) BOOL copiedToPasteboard;                     //@synthesize copiedToPasteboard=_copiedToPasteboard - In the implementation block
@property (nonatomic,copy) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * shortValue;                         //@synthesize shortValue=_shortValue - In the implementation block
@property (assign,nonatomic) BOOL shouldAggregate;                        //@synthesize shouldAggregate=_shouldAggregate - In the implementation block
@property (nonatomic,copy) NSString * documentID;                         //@synthesize documentID=_documentID - In the implementation block
@property (nonatomic,copy) NSDictionary * addressComponents;              //@synthesize addressComponents=_addressComponents - In the implementation block
@property (nonatomic,copy) NSString * source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * trigger;                            //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,copy) NSDate * createdAt;                            //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy) NSNumber * lifetime;                           //@synthesize lifetime=_lifetime - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)round:(double)arg1 toNearest:(double)arg2 ;
-(NSString *)shortValue;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSDictionary *)addressComponents;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(NSString *)subThoroughfare;
-(NSString *)thoroughfare;
-(NSString *)postalCode;
-(NSString *)country;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(id)addressDictionary;
-(NSString *)locality;
-(NSString *)administrativeArea;
-(NSString *)trigger;
-(NSString *)documentID;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(void)setTrigger:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(NSDate *)createdAt;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSNumber *)lifetime;
-(void)setLifetime:(NSNumber *)arg1 ;
-(void)setAddressComponents:(NSDictionary *)arg1 ;
-(void)setDocumentID:(NSString *)arg1 ;
-(NSString *)originatingBundleID;
-(void)setOriginatingBundleID:(NSString *)arg1 ;
-(id)quickTypeItem;
-(unsigned char)_pexItemSource;
-(unsigned long long)_roundedPredictionAge;
-(BOOL)isEqualToConnectionsLocation:(id)arg1 ;
-(NSString *)fullFormattedAddress;
-(void)setFullFormattedAddress:(NSString *)arg1 ;
-(NSURL *)originatingWebsiteURL;
-(void)setOriginatingWebsiteURL:(NSURL *)arg1 ;
-(NSURL *)mapItemURL;
-(void)setMapItemURL:(NSURL *)arg1 ;
-(BOOL)copiedToPasteboard;
-(void)setCopiedToPasteboard:(BOOL)arg1 ;
-(void)setShortValue:(NSString *)arg1 ;
-(BOOL)shouldAggregate;
-(void)setShouldAggregate:(BOOL)arg1 ;
@end

