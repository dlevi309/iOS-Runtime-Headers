/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSData;

@interface PHAssetPhotosInfoPanelLocationProperties : PHAssetPropertySet {

	NSData* _placeAnnotationData;

}

@property (nonatomic,readonly) NSData * placeAnnotationData;              //@synthesize placeAnnotationData=_placeAnnotationData - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
-(NSData *)placeAnnotationData;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

