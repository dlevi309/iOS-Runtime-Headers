/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTDeviceIdentifier, NSArray;

@interface CTRemoteDevice : NSObject <NSSecureCoding> {

	CTDeviceIdentifier* _deviceID;
	NSArray* _remoteDisplayPlans;
	NSArray* _remotePlans;

}

@property (nonatomic,retain) CTDeviceIdentifier * deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSArray * remoteDisplayPlans;               //@synthesize remoteDisplayPlans=_remoteDisplayPlans - In the implementation block
@property (nonatomic,retain) NSArray * remotePlans;                      //@synthesize remotePlans=_remotePlans - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)EID;
-(void)setDeviceID:(CTDeviceIdentifier *)arg1 ;
-(unsigned long long)deviceType;
-(id)deviceName;
-(NSArray *)remotePlans;
-(CTDeviceIdentifier *)deviceID;
-(void)setRemotePlans:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)remoteDisplayPlans;
-(void)setRemoteDisplayPlans:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

