/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface CPLPlaceAnnotation : NSObject <NSSecureCoding, NSCopying> {

	NSNumber* _placeLevel;
	NSString* _placeName;

}

@property (nonatomic,copy) NSNumber * placeLevel;              //@synthesize placeLevel=_placeLevel - In the implementation block
@property (nonatomic,copy) NSString * placeName;               //@synthesize placeName=_placeName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)placeLevel;
-(void)setPlaceLevel:(NSNumber *)arg1 ;
-(void)setPlaceName:(NSString *)arg1 ;
-(NSString *)placeName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

