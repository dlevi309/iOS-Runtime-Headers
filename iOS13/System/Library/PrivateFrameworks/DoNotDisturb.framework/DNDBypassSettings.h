/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DNDBypassSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _immediateBypassEventSourceType;
	NSString* _immediateBypassCNGroupIdentifier;
	unsigned long long _repeatEventSourceBehaviorEnabledSetting;

}

@property (nonatomic,readonly) unsigned long long immediateBypassEventSourceType;                       //@synthesize immediateBypassEventSourceType=_immediateBypassEventSourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * immediateBypassCNGroupIdentifier;                        //@synthesize immediateBypassCNGroupIdentifier=_immediateBypassCNGroupIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long repeatEventSourceBehaviorEnabledSetting;              //@synthesize repeatEventSourceBehaviorEnabledSetting=_repeatEventSourceBehaviorEnabledSetting - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithSettings:(id)arg1 ;
-(unsigned long long)immediateBypassEventSourceType;
-(NSString *)immediateBypassCNGroupIdentifier;
-(unsigned long long)repeatEventSourceBehaviorEnabledSetting;
-(id)_initWithImmediateBypassEventSourceType:(unsigned long long)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(unsigned long long)arg3 ;
@end

