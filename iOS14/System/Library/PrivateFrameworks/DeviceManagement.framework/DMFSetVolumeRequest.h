/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFSetVolumeRequest : DMFTaskRequest {

	float _volume;

}

@property (assign,nonatomic) float volume;              //@synthesize volume=_volume - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setVolume:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)volume;
@end

