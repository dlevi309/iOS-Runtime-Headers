/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDPhotoLibraryImportingPersonsImportedLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	long long _totalNumberOfImportedPersons;
	long long _numberOfNamedImportedPersons;

}

@property (readonly) long long totalNumberOfImportedPersons;              //@synthesize totalNumberOfImportedPersons=_totalNumberOfImportedPersons - In the implementation block
@property (readonly) long long numberOfNamedImportedPersons;              //@synthesize numberOfNamedImportedPersons=_numberOfNamedImportedPersons - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)serializedEvent;
-(long long)totalNumberOfImportedPersons;
-(long long)numberOfNamedImportedPersons;
-(id)initWithTotalNumberOfImportedPersons:(long long)arg1 numberOfNamedImportedPersons:(long long)arg2 ;
@end

