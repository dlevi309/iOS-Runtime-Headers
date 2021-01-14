/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/


@protocol OS_os_log;
@class NSDate, NSObject, NSNumber, UARPAccessoryID, UARPAssetID, UARPUpdateFirmwareAnalyticsEventFrameworkParams;

@interface UARPAnalyticsUpdateFirmwareState : NSObject {

	NSDate* _startDate;
	long long _state;
	NSObject*<OS_os_log> _log;
	unsigned long long _stagingDurationSeconds;
	NSDate* _stagingDurationStart;
	unsigned long long _stagingIterations;
	BOOL _stagingUserInitiated;
	NSNumber* _stagingStatus;
	unsigned long long _analyticsApplyDurationSeconds;
	NSDate* _analyticsApplyDurationStart;
	NSNumber* _analyticsApplyUserInitiated;
	NSNumber* _analyticsApplyStatus;
	UARPAccessoryID* _accessoryID;
	UARPAssetID* _assetID;

}

@property (readonly) UARPAccessoryID * accessoryID;                                              //@synthesize accessoryID=_accessoryID - In the implementation block
@property (readonly) UARPAssetID * assetID;                                                      //@synthesize assetID=_assetID - In the implementation block
@property (readonly) unsigned long long age; 
@property (readonly) UARPUpdateFirmwareAnalyticsEventFrameworkParams * eventParams; 
-(UARPAssetID *)assetID;
-(UARPAccessoryID *)accessoryID;
-(id)description;
-(void)setState:(long long)arg1 ;
-(unsigned long long)age;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAccessoryID:(id)arg1 assetID:(id)arg2 ;
-(void)stagingStartedWithUserIntent:(BOOL)arg1 ;
-(void)stagingCompleteWithStatus:(unsigned long long)arg1 ;
-(void)accessoryUnreachable;
-(UARPUpdateFirmwareAnalyticsEventFrameworkParams *)eventParams;
-(void)updateStagingDuration;
-(void)stagingInterrupted;
@end

