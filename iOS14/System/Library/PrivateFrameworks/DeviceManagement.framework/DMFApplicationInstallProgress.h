/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DMFApplicationInstallProgress : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _state;
	unsigned long long _phase;
	double _fractionCompleted;

}

@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long phase;              //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) double fractionCompleted;              //@synthesize fractionCompleted=_fractionCompleted - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithState:(unsigned long long)arg1 phase:(unsigned long long)arg2 fractionCompleted:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(double)fractionCompleted;
-(unsigned long long)phase;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

