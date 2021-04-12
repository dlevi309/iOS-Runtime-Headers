/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)placeType;
-(double)areaInSquareMeters;
-(id)initWithName:(id)arg1 placeType:(id)arg2 dominantOrderType:(unsigned long long)arg3 areaInSquareMeters:(double)arg4 ;
-(unsigned long long)dominantOrderType;
@end

