/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTDeviceIdentifier, NSArray;

@interface CTRemoteDevice : NSObject <NSSecureCoding> {

	CTDeviceIdentifier* _deviceID;
	NSArray* _remotePlans;

}

@property (nonatomic,retain) CTDeviceIdentifier * deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSArray * remotePlans;                      //@synthesize remotePlans=_remotePlans - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)deviceType;
-(CTDeviceIdentifier *)deviceID;
-(void)setDeviceID:(CTDeviceIdentifier *)arg1 ;
-(id)deviceName;
-(id)EID;
-(NSArray *)remotePlans;
-(void)setRemotePlans:(NSArray *)arg1 ;
@end

