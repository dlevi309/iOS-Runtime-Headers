/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)UUID;
-(NSDate *)timestamp;
-(long long)rssi;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)proximity;
-(NSNumber *)minor;
-(id)initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6 timestamp:(double)arg7 ;
-(NSUUID *)proximityUUID;
-(id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6 ;
-(id)description;
-(double)accuracy;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)major;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

