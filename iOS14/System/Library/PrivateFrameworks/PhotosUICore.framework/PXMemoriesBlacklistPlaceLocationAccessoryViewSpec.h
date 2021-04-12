/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXMemoriesBlacklistAccessoryViewSpec.h>

@class CLLocation;

@interface PXMemoriesBlacklistPlaceLocationAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec {

	CLLocation* _location;
	double _regionRadius;

}

@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double regionRadius;                //@synthesize regionRadius=_regionRadius - In the implementation block
+(id)specWithLocation:(id)arg1 regionRadius:(double)arg2 ;
-(CLLocation *)location;
-(id)initWithLocation:(id)arg1 regionRadius:(double)arg2 ;
-(double)regionRadius;
@end

