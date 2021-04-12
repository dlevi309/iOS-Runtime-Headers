/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDDevice : NSObject <NSCopying> {

	unsigned long long _deviceClass;
	unsigned long long _deviceCapabilities;

}

@property (nonatomic,readonly) unsigned long long deviceClass;                     //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceCapabilities;              //@synthesize deviceCapabilities=_deviceCapabilities - In the implementation block
+(id)currentDevice;
+(id)deviceWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)deviceClass;
-(unsigned long long)deviceCapabilities;
-(id)_initWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 ;
@end

