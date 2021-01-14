/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDPhotoLibraryImportingPhotoLibraryRenamedPersonsLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	long long _numberOfRenamedPersons;

}

@property (readonly) long long numberOfRenamedPersons;              //@synthesize numberOfRenamedPersons=_numberOfRenamedPersons - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)serializedEvent;
-(long long)numberOfRenamedPersons;
-(id)initWithNumberOfRenamedPersons:(long long)arg1 ;
@end

