/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DNDSLegacyBehaviorOverride : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _overrideType;
	unsigned long long _mode;
	NSArray* _effectiveIntervals;

}

@property (nonatomic,readonly) unsigned long long overrideType;                //@synthesize overrideType=_overrideType - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * effectiveIntervals;              //@synthesize effectiveIntervals=_effectiveIntervals - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)mode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)overrideType;
-(id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3 ;
-(NSArray *)effectiveIntervals;
@end

