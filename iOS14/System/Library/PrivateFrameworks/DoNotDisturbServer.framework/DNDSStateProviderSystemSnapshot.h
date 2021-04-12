/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSDictionary;

@interface DNDSStateProviderSystemSnapshot : NSObject <NSCopying, NSMutableCopying> {

	NSArray* _assertions;
	NSArray* _activeAssertionUUIDs;
	NSDictionary* _activeDateIntervalByAssertionUUID;
	unsigned long long _interruptionBehaviorSetting;
	unsigned long long _lostModeState;

}

@property (nonatomic,copy,readonly) NSArray * assertions;                                          //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeAssertionUUIDs;                                //@synthesize activeAssertionUUIDs=_activeAssertionUUIDs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * activeDateIntervalByAssertionUUID;              //@synthesize activeDateIntervalByAssertionUUID=_activeDateIntervalByAssertionUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long interruptionBehaviorSetting;                     //@synthesize interruptionBehaviorSetting=_interruptionBehaviorSetting - In the implementation block
@property (nonatomic,readonly) unsigned long long lostModeState;                                   //@synthesize lostModeState=_lostModeState - In the implementation block
-(NSArray *)assertions;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)lostModeState;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)interruptionBehaviorSetting;
-(NSArray *)activeAssertionUUIDs;
-(NSDictionary *)activeDateIntervalByAssertionUUID;
-(id)_initWithSnapshot:(id)arg1 ;
-(id)_initWithAssertions:(id)arg1 activeAssertionUUIDs:(id)arg2 activeDateIntervalByAssertionUUID:(id)arg3 interruptionBehaviorSetting:(unsigned long long)arg4 lostModeState:(unsigned long long)arg5 ;
@end

