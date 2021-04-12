/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLBeaconInternal, NSDate, NSUUID, NSNumber;

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding> {

	CLBeaconInternal* _internal;

}

@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSUUID * proximityUUID; 
@property (nonatomic,copy,readonly) NSNumber * major; 
@property (nonatomic,copy,readonly) NSNumber * minor; 
@property (nonatomic,readonly) long long proximity; 
@property (nonatomic,readonly) double accuracy; 
@property (nonatomic,readonly) long long rssi; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSDate *)timestamp;
-(id)initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6 timestamp:(double)arg7 ;
-(NSNumber *)major;
-(NSNumber *)minor;
-(NSUUID *)proximityUUID;
-(long long)proximity;
-(double)accuracy;
-(long long)rssi;
-(id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6 ;
@end

