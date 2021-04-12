/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSDate, NSArray;

@interface WBSDeviceEligibilityInformation : NSObject {

	BOOL _hasWindowsDevices;
	NSDate* _dateOfLatestDAVAccessByIneligibleWindowsDevice;
	NSArray* _devices;

}

@property (nonatomic,readonly) NSDate * dateOfLatestDAVAccessByIneligibleWindowsDevice;              //@synthesize dateOfLatestDAVAccessByIneligibleWindowsDevice=_dateOfLatestDAVAccessByIneligibleWindowsDevice - In the implementation block
@property (nonatomic,readonly) NSArray * devices;                                                    //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) BOOL hasWindowsDevices;                                               //@synthesize hasWindowsDevices=_hasWindowsDevices - In the implementation block
-(id)description;
-(NSArray *)devices;
-(id)initWithDateOfLatestDAVAccessByIneligibleWindowsDevice:(id)arg1 devices:(id)arg2 hasWindowsDevices:(BOOL)arg3 ;
-(id)initWithDeviceListResponseDictionary:(id)arg1 ;
-(SCD_Struct_WB6)potentiallyEligibleDevicesWithEligibleOperatingSystemVersionRanges:(id)arg1 ;
-(NSDate *)dateOfLatestDAVAccessByIneligibleWindowsDevice;
-(BOOL)hasWindowsDevices;
@end

