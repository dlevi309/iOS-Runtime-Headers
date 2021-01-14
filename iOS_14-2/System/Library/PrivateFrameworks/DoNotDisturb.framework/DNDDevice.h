/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)deviceClass;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)deviceCapabilities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 ;
@end

