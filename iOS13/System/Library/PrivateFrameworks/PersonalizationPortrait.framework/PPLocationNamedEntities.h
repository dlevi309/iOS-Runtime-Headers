/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, CLLocation, NSDate;

@interface PPLocationNamedEntities : NSObject <NSCopying, NSSecureCoding> {

	NSString* _locationName;
	NSString* _streetAddress;
	NSString* _city;
	NSString* _stateOrProvince;
	NSString* _postalCode;
	NSString* _country;
	NSString* _unstructuredLocationString;
	double _score;
	NSString* _documentId;
	NSData* _mapItem;
	CLLocation* _location;
	NSDate* _date;

}

@property (nonatomic,retain) NSString * locationName;                            //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,retain) NSString * streetAddress;                           //@synthesize streetAddress=_streetAddress - In the implementation block
@property (nonatomic,retain) NSString * city;                                    //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSString * stateOrProvince;                         //@synthesize stateOrProvince=_stateOrProvince - In the implementation block
@property (nonatomic,retain) NSString * postalCode;                              //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,retain) NSString * country;                                 //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * unstructuredLocationString;              //@synthesize unstructuredLocationString=_unstructuredLocationString - In the implementation block
@property (assign,nonatomic) double score;                                       //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSString * documentId;                              //@synthesize documentId=_documentId - In the implementation block
@property (nonatomic,retain) NSData * mapItem;                                   //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) CLLocation * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(double)score;
-(CLLocation *)location;
-(NSString *)locationName;
-(NSString *)postalCode;
-(NSString *)city;
-(NSString *)stateOrProvince;
-(NSString *)country;
-(void)setScore:(double)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setLocationName:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setMapItem:(NSData *)arg1 ;
-(NSData *)mapItem;
-(NSString *)streetAddress;
-(void)setStreetAddress:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)setStateOrProvince:(NSString *)arg1 ;
-(NSString *)documentId;
-(NSString *)unstructuredLocationString;
-(void)setUnstructuredLocationString:(NSString *)arg1 ;
-(void)setDocumentId:(NSString *)arg1 ;
@end

