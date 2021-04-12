/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@interface DMFRequestAirPlayMirroringResultObject : CATTaskResultObject {

	unsigned long long _status;

}

@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)status;
-(id)initWithStatus:(unsigned long long)arg1 ;
@end

