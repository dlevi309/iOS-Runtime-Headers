/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSData;

@interface PHAssetPhotosInfoPanelLocationProperties : PHAssetPropertySet {

	NSData* _placeAnnotationData;

}

@property (nonatomic,readonly) NSData * placeAnnotationData;              //@synthesize placeAnnotationData=_placeAnnotationData - In the implementation block
+(id)keyPathFromPrimaryObject;
+(id)propertySetName;
+(id)propertiesToFetch;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSData *)placeAnnotationData;
@end

