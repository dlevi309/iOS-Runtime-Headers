/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject <NSSecureCoding> {

	NSString* _name;
	NSNumber* _placeType;
	unsigned long long _dominantOrderType;
	double _areaInSquareMeters;

}

@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * placeType;                         //@synthesize placeType=_placeType - In the implementation block
@property (nonatomic,readonly) unsigned long long dominantOrderType;              //@synthesize dominantOrderType=_dominantOrderType - In the implementation block
@property (nonatomic,readonly) double areaInSquareMeters;                         //@synthesize areaInSquareMeters=_areaInSquareMeters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)placeType;
-(unsigned long long)dominantOrderType;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)areaInSquareMeters;
-(id)initWithName:(id)arg1 placeType:(id)arg2 dominantOrderType:(unsigned long long)arg3 areaInSquareMeters:(double)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end

