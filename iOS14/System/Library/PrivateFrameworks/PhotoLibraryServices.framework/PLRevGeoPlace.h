/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PLRevGeoPlace : NSObject <NSSecureCoding> {

	NSDictionary* _placeInfosForOrderType;

}

@property (nonatomic,readonly) NSDictionary * placeInfosForOrderType;              //@synthesize placeInfosForOrderType=_placeInfosForOrderType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned long long*)arg3 outPreviousOrderType:(unsigned long long*)arg4 ;
+(unsigned long long)_dominantOrderTypeForPlaceType:(id)arg1 lastOrderType:(unsigned long long)arg2 ;
+(id)placeWithMapItem:(id)arg1 placeAnnotation:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPlaceInfosForOrderType:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)bestPlaceInfoForOrderType:(unsigned long long)arg1 ;
-(NSDictionary *)placeInfosForOrderType;
@end

