/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, ENAdvertisementDatabase;

@interface ENAdvertisementDatabaseQuerySession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned _tekCount;
	unsigned char _attenuationThreshold;
	unsigned _storedAdvertisementCount;
	ENAdvertisementDatabase* _database;

}

@property (nonatomic,readonly) unsigned char attenuationThreshold;              //@synthesize attenuationThreshold=_attenuationThreshold - In the implementation block
@property (nonatomic,readonly) ENAdvertisementDatabase * database;              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) unsigned storedAdvertisementCount;               //@synthesize storedAdvertisementCount=_storedAdvertisementCount - In the implementation block
-(void)invalidate;
-(ENAdvertisementDatabase *)database;
-(void)dealloc;
-(id)initWithDatabase:(id)arg1 attenuationThreshold:(unsigned char)arg2 advertisementCount:(unsigned)arg3 queue:(id)arg4 ;
-(BOOL)enumerateAdvertisementsMatchingKeys:(id)arg1 attenuationThreshold:(unsigned char)arg2 timestampTolerance:(double)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(unsigned char)attenuationThreshold;
-(unsigned)storedAdvertisementCount;
@end

