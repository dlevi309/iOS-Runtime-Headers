/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPAddressCorrections, GEORPAmenityCorrections, NSMutableArray, GEORPCategoryCorrections, NSString;

@interface GEORPPoiCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAddressCorrections* _address;
	GEORPAmenityCorrections* _amenity;
	NSMutableArray* _businessHours;
	GEORPCategoryCorrections* _category;
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
	BOOL _flagHoursIncorrect;
	BOOL _flagNotAtThisAddress;
	struct {
		unsigned has_flagHoursIncorrect : 1;
		unsigned has_flagNotAtThisAddress : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_amenity : 1;
		unsigned read_businessHours : 1;
		unsigned read_category : 1;
		unsigned read_hoursText : 1;
		unsigned read_name : 1;
		unsigned read_originalName : 1;
		unsigned read_originalPhone : 1;
		unsigned read_originalUrl : 1;
		unsigned read_phone : 1;
		unsigned read_url : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_address : 1;
		unsigned wrote_amenity : 1;
		unsigned wrote_businessHours : 1;
		unsigned wrote_category : 1;
		unsigned wrote_hoursText : 1;
		unsigned wrote_name : 1;
		unsigned wrote_originalName : 1;
		unsigned wrote_originalPhone : 1;
		unsigned wrote_originalUrl : 1;
		unsigned wrote_phone : 1;
		unsigned wrote_url : 1;
		unsigned wrote_flagHoursIncorrect : 1;
		unsigned wrote_flagNotAtThisAddress : 1;
	}  _flags;

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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)businessHoursType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(GEORPCategoryCorrections *)category;
-(void)setCategory:(GEORPCategoryCorrections *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)url;
-(GEORPAddressCorrections *)address;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)hasName;
-(BOOL)hasCategory;
-(void)setAddress:(GEORPAddressCorrections *)arg1 ;
-(BOOL)hasAddress;
-(BOOL)hasUrl;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCategory;
-(void)_readName;
-(void)_readAddress;
-(void)_readUrl;
-(NSMutableArray *)businessHours;
-(void)setBusinessHours:(NSMutableArray *)arg1 ;
-(void)_readAmenity;
-(void)_readBusinessHours;
-(void)_addNoFlagsBusinessHours:(id)arg1 ;
-(void)_readOriginalName;
-(GEORPAmenityCorrections *)amenity;
-(NSString *)originalName;
-(void)setAmenity:(GEORPAmenityCorrections *)arg1 ;
-(unsigned long long)businessHoursCount;
-(void)clearBusinessHours;
-(id)businessHoursAtIndex:(unsigned long long)arg1 ;
-(void)addBusinessHours:(id)arg1 ;
-(void)setOriginalName:(NSString *)arg1 ;
-(BOOL)hasAmenity;
-(BOOL)hasOriginalName;
-(void)_readPhone;
-(void)_readOriginalPhone;
-(void)_readOriginalUrl;
-(void)_readHoursText;
-(NSString *)phone;
-(NSString *)originalPhone;
-(NSString *)originalUrl;
-(NSString *)hoursText;
-(void)setPhone:(NSString *)arg1 ;
-(void)setOriginalPhone:(NSString *)arg1 ;
-(void)setOriginalUrl:(NSString *)arg1 ;
-(void)setHoursText:(NSString *)arg1 ;
-(BOOL)hasPhone;
-(BOOL)flagHoursIncorrect;
-(void)setFlagHoursIncorrect:(BOOL)arg1 ;
-(void)setHasFlagHoursIncorrect:(BOOL)arg1 ;
-(BOOL)hasFlagHoursIncorrect;
-(BOOL)flagNotAtThisAddress;
-(void)setFlagNotAtThisAddress:(BOOL)arg1 ;
-(void)setHasFlagNotAtThisAddress:(BOOL)arg1 ;
-(BOOL)hasFlagNotAtThisAddress;
-(BOOL)hasOriginalPhone;
-(BOOL)hasOriginalUrl;
-(BOOL)hasHoursText;
@end

