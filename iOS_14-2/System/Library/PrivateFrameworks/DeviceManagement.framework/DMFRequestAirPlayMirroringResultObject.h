/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@interface DMFRequestAirPlayMirroringResultObject : CATTaskResultObject {

	unsigned long long _status;

}

@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithStatus:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)status;
@end

