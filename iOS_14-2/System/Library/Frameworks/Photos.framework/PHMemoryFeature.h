/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PHMemoryFeature : NSObject <NSSecureCoding> {

	id _subtypeSpecificAttribute;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)personUniversalIdentifierForPersonLocalIdentifier:(id)arg1 photoLibrary:(id)arg2 ;
+(id)personLocalIdentifierForPersonUniversalIdentifier:(id)arg1 photoLibrary:(id)arg2 ;
+(id)peopleMemoryFeatureWithPersonLocalIdentifier:(id)arg1 ;
+(id)timeMemoryFeatureWithDate:(id)arg1 ;
+(id)timeMemoryFeatureWithHolidayForName:(id)arg1 ;
+(id)locationMemoryFeatureWithLocation:(id)arg1 ;
+(id)locationMemoryFeatureWithAreaForName:(id)arg1 ;
+(id)memoryFeatureWithData:(id)arg1 photoLibrary:(id)arg2 ;
+(id)stringForType:(unsigned long long)arg1 ;
-(id)location;
-(id)encodedDataWithPhotoLibrary:(id)arg1 ;
-(id)personLocalIdentifier;
-(id)holidayName;
-(BOOL)collidesWithFeature:(id)arg1 ;
-(BOOL)collidesWithDate:(id)arg1 ;
-(BOOL)collidesWithHolidayWithName:(id)arg1 ;
-(BOOL)collidesWithLocationAtCoordinates:(CLLocationCoordinate2D)arg1 ;
-(BOOL)collidesWithAreaWithName:(id)arg1 ;
-(BOOL)collidesWithPersonWithLocalIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)areaName;
-(id)date;
-(BOOL)isEqual:(id)arg1 ;
@end

