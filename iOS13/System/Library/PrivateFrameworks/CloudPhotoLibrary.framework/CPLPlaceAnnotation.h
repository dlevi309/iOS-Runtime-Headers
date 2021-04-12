/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)placeName;
-(NSNumber *)placeLevel;
-(void)setPlaceLevel:(NSNumber *)arg1 ;
-(void)setPlaceName:(NSString *)arg1 ;
@end

