/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(HKNanoSyncPairedDeviceInfo *)activeDeviceInfo;
-(NSSet *)allDeviceInfos;
-(id)deviceInfoForSourceBundleIdentifier:(id)arg1 ;
-(id)initWithPairedDeviceInfos:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

