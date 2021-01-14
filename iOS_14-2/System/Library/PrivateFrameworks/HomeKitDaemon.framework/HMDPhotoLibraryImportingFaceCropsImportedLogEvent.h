/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDPhotoLibraryImportingFaceCropsImportedLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	long long _numberOfImportedFaceCrops;

}

@property (readonly) long long numberOfImportedFaceCrops;              //@synthesize numberOfImportedFaceCrops=_numberOfImportedFaceCrops - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)serializedEvent;
-(long long)numberOfImportedFaceCrops;
-(id)initWithNumberOfImportedFaceCrops:(long long)arg1 ;
@end

