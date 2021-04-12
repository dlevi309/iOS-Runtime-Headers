/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSArray;

@interface HKRegionAvailability : NSObject {

	NSArray* _supportedRegions;
	long long _version;

}

@property (nonatomic,readonly) NSArray * supportedRegions;              //@synthesize supportedRegions=_supportedRegions - In the implementation block
@property (nonatomic,readonly) long long version;                       //@synthesize version=_version - In the implementation block
-(NSArray *)supportedRegions;
-(id)initWithDeserializedAvailability:(id)arg1 ;
-(long long)version;
@end

