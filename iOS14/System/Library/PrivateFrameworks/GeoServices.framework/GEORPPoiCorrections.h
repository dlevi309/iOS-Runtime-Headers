/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPAddressCorrections, GEORPAmenityCorrections, NSMutableArray, GEORPCategoryCorrections, GEORPPlaceContainmentCorrections, NSString;

@interface GEORPPoiCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAddressCorrections* _address;
	GEORPAmenityCorrections* _amenity;
	NSMutableArray* _businessHours;
	GEORPCategoryCorrections* _category;
	GEORPPlaceContainmentCorrections* _containmentCorrections;
	NSString* _hoursText;
	NSString* _name;
	NSString* _originalName;
	NSString* _originalPhone;
	NSString* _originalUrl;
	NSString* _phone;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _flagBadCuratedCollectionDescription;
	BOOL _flagBrokenCuratedCollectionUrl;
	BOOL _flagHoursIncorrect;
	BOOL _flagNotAtThisAddress;
	SCD_Struct_GE78 _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasPhone; 
@property (nonatomic,retain) NSString * phone; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEORPAddressCorrections * address; 
@property (nonatomic,retain) NSMutableArray * businessHours; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) GEORPCategoryCorrections * category; 
@property (nonatomic,readonly) BOOL hasAmenity; 
@property (nonatomic,retain) GEORPAmenityCorrections * amenity; 
@property (assign,nonatomic) BOOL hasFlagHoursIncorrect; 
@property (assign,nonatomic) BOOL flagHoursIncorrect; 
@property (assign,nonatomic) BOOL hasFlagNotAtThisAddress; 
@property (assign,nonatomic) BOOL flagNotAtThisAddress; 
@property (nonatomic,readonly) BOOL hasOriginalName; 
@property (nonatomic,retain) NSString * originalName; 
@property (nonatomic,readonly) BOOL hasOriginalPhone; 
@property (nonatomic,retain) NSString * originalPhone; 
@property (nonatomic,readonly) BOOL hasOriginalUrl; 
@property (nonatomic,retain) NSString * originalUrl; 
@property (nonatomic,readonly) BOOL hasHoursText; 
@property (nonatomic,retain) NSString * hoursText; 
@property (nonatomic,readonly) BOOL hasContainmentCorrections; 
@property (nonatomic,retain) GEORPPlaceContainmentCorrections * containmentCorrections; 
@property (assign,nonatomic) BOOL hasFlagBrokenCuratedCollectionUrl; 
@property (assign,nonatomic) BOOL flagBrokenCuratedCollectionUrl; 
@property (assign,nonatomic) BOOL hasFlagBadCuratedCollectionDescription; 
@property (assign,nonatomic) BOOL flagBadCuratedCollectionDescription; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)businessHoursType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setCategory:(GEORPCategoryCorrections *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasAddress;
-(NSString *)originalName;
-(NSString *)originalUrl;
-(void)setOriginalName:(NSString *)arg1 ;
-(void)setOriginalUrl:(NSString *)arg1 ;
-(BOOL)hasOriginalName;
-(BOOL)hasOriginalUrl;
-(GEORPAmenityCorrections *)amenity;
-(void)mergeFrom:(id)arg1 ;
-(GEORPCategoryCorrections *)category;
-(NSString *)phone;
-(id)initWithData:(id)arg1 ;
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAmenity:(GEORPAmenityCorrections *)arg1 ;
-(NSString *)originalPhone;
-(GEORPPlaceContainmentCorrections *)containmentCorrections;
-(void)addBusinessHours:(id)arg1 ;
-(void)setFlagHoursIncorrect:(BOOL)arg1 ;
-(void)setFlagNotAtThisAddress:(BOOL)arg1 ;
-(void)setOriginalPhone:(NSString *)arg1 ;
-(void)setHoursText:(NSString *)arg1 ;
-(void)setContainmentCorrections:(GEORPPlaceContainmentCorrections *)arg1 ;
-(void)setFlagBrokenCuratedCollectionUrl:(BOOL)arg1 ;
-(unsigned long long)businessHoursCount;
-(void)setFlagBadCuratedCollectionDescription:(BOOL)arg1 ;
-(void)clearBusinessHours;
-(id)businessHoursAtIndex:(unsigned long long)arg1 ;
-(BOOL)flagHoursIncorrect;
-(void)setHasFlagHoursIncorrect:(BOOL)arg1 ;
-(BOOL)hasFlagHoursIncorrect;
-(BOOL)flagNotAtThisAddress;
-(void)setHasFlagNotAtThisAddress:(BOOL)arg1 ;
-(BOOL)hasFlagNotAtThisAddress;
-(BOOL)hasHoursText;
-(BOOL)hasOriginalPhone;
-(BOOL)hasContainmentCorrections;
-(BOOL)flagBrokenCuratedCollectionUrl;
-(void)setHasFlagBrokenCuratedCollectionUrl:(BOOL)arg1 ;
-(BOOL)hasFlagBrokenCuratedCollectionUrl;
-(BOOL)flagBadCuratedCollectionDescription;
-(void)setHasFlagBadCuratedCollectionDescription:(BOOL)arg1 ;
-(BOOL)hasFlagBadCuratedCollectionDescription;
-(NSString *)name;
-(id)description;
-(void)setBusinessHours:(NSMutableArray *)arg1 ;
-(GEORPAddressCorrections *)address;
-(BOOL)hasCategory;
-(BOOL)hasUrl;
-(void)setAddress:(GEORPAddressCorrections *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setPhone:(NSString *)arg1 ;
-(BOOL)hasPhone;
-(unsigned long long)hash;
-(NSString *)hoursText;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)businessHours;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAmenity;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

