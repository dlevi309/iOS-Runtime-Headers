/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CLRegion.h>

@class CLBeaconIdentityConstraint, NSUUID, NSNumber;

@interface CLBeaconRegion : CLRegion

@property (nonatomic,copy,readonly) CLBeaconIdentityConstraint * beaconIdentityConstraint; 
@property (nonatomic,copy,readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSUUID * proximityUUID; 
@property (nonatomic,copy,readonly) NSNumber * major; 
@property (nonatomic,copy,readonly) NSNumber * minor; 
@property (assign,nonatomic) BOOL notifyEntryStateOnDisplay; 
+(BOOL)supportsSecureCoding;
+(id)any;
-(NSUUID *)UUID;
-(id)init;
-(id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4 ;
-(NSNumber *)minor;
-(char)_measuredPowerForDevice;
-(NSUUID *)proximityUUID;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(CLBeaconIdentityConstraint *)beaconIdentityConstraint;
-(id)initWithBeaconIdentityConstraint:(id)arg1 identifier:(id)arg2 ;
-(id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)initWithUUID:(id)arg1 identifier:(id)arg2 ;
-(NSNumber *)major;
-(id)peripheralDataWithMeasuredPower:(id)arg1 ;
-(BOOL)notifyEntryStateOnDisplay;
-(id)initWithProximityUUID:(id)arg1 identifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setGutsWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 notifyOnDisplay:(BOOL)arg4 ;
-(void)setNotifyEntryStateOnDisplay:(BOOL)arg1 ;
@end

