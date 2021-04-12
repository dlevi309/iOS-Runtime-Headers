/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PKLocation : NSObject <NSSecureCoding> {

	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _maxDistance;
	NSNumber* _altitude;
	NSString* _name;
	NSString* _relevantText;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * relevantText;                            //@synthesize relevantText=_relevantText - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)latitude;
-(double)longitude;
-(double)altitude;
-(void)setLongitude:(id)arg1 ;
-(void)setLatitude:(id)arg1 ;
-(void)setAltitude:(id)arg1 ;
-(BOOL)hasAltitude;
-(double)maxDistance;
-(void)setMaxDistance:(id)arg1 ;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(BOOL)hasEqualCoordinatesToLocation:(id)arg1 ;
-(id)CLLocation;
@end

