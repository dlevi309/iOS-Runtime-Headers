/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKNanoSyncPairedDeviceInfo, NSSet;

@interface HKNanoSyncPairedDevicesSnapshot : NSObject <NSCopying, NSSecureCoding> {

	HKNanoSyncPairedDeviceInfo* _activeDeviceInfo;
	NSSet* _allDeviceInfos;

}

@property (readonly) HKNanoSyncPairedDeviceInfo * activeDeviceInfo; 
@property (copy,readonly) NSSet * allDeviceInfos; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPairedDeviceInfos:(id)arg1 ;
-(HKNanoSyncPairedDeviceInfo *)activeDeviceInfo;
-(NSSet *)allDeviceInfos;
-(id)deviceInfoForSourceBundleIdentifier:(id)arg1 ;
@end

