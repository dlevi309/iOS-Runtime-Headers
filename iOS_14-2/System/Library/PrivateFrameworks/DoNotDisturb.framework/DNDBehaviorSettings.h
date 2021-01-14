/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DNDBehaviorSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _interruptionBehaviorSetting;

}

@property (nonatomic,readonly) unsigned long long interruptionBehavior; 
@property (nonatomic,readonly) unsigned long long interruptionBehaviorSetting;              //@synthesize interruptionBehaviorSetting=_interruptionBehaviorSetting - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithSettings:(id)arg1 ;
-(unsigned long long)interruptionBehaviorSetting;
-(id)_initWithInterruptionBehaviorSetting:(unsigned long long)arg1 ;
-(unsigned long long)interruptionBehavior;
@end

