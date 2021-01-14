/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetCoarseLocationProperties : PHAssetPropertySet {

	double _gpsHorizontalAccuracy;

}

@property (nonatomic,readonly) double gpsHorizontalAccuracy;              //@synthesize gpsHorizontalAccuracy=_gpsHorizontalAccuracy - In the implementation block
+(id)propertySetName;
+(id)propertiesToFetch;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(double)gpsHorizontalAccuracy;
@end

