/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKLocation : NSObject <NSSecureCoding> {

	BOOL _hasAltitude;
	AB _hashComputed;
	AQ _hash;
	NSString* _name;
	NSString* _relevantText;
	double _latitude;
	double _longitude;
	double _altitude;
	double _maxDistance;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * relevantText;                            //@synthesize relevantText=_relevantText - In the implementation block
@property (assign,nonatomic) double latitude;                                  //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                 //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) BOOL hasAltitude;                               //@synthesize hasAltitude=_hasAltitude - In the implementation block
@property (assign,nonatomic) double altitude;                                  //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) double maxDistance;                               //@synthesize maxDistance=_maxDistance - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
+(BOOL)supportsSecureCoding;
-(double)latitude;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(id)init;
-(BOOL)hasAltitude;
-(CLLocationCoordinate2D)coordinate;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setMaxDistance:(double)arg1 ;
-(double)maxDistance;
-(id)CLLocation;
-(BOOL)hasEqualCoordinatesToLocation:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

