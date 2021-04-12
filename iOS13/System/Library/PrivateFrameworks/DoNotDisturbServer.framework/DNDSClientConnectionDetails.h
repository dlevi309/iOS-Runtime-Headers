/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSSet;

@interface DNDSClientConnectionDetails : NSObject <NSCopying, NSMutableCopying> {

	NSUUID* _interruptionInvalidationAssertionUUID;
	NSSet* _assertionUpdateClientIdentifiers;
	BOOL _wantsStateUpdates;
	BOOL _wantsSettingsUpdates;

}

@property (nonatomic,copy,readonly) NSUUID * interruptionInvalidationAssertionUUID;              //@synthesize interruptionInvalidationAssertionUUID=_interruptionInvalidationAssertionUUID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * assertionUpdateClientIdentifiers;                    //@synthesize assertionUpdateClientIdentifiers=_assertionUpdateClientIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL wantsStateUpdates;                                           //@synthesize wantsStateUpdates=_wantsStateUpdates - In the implementation block
@property (nonatomic,readonly) BOOL wantsSettingsUpdates;                                        //@synthesize wantsSettingsUpdates=_wantsSettingsUpdates - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_initWithDetails:(id)arg1 ;
-(NSUUID *)interruptionInvalidationAssertionUUID;
-(NSSet *)assertionUpdateClientIdentifiers;
-(BOOL)wantsStateUpdates;
-(BOOL)wantsSettingsUpdates;
-(id)_initWithInterruptionInvalidationAssertionUUID:(id)arg1 assertionUpdateClientIdentifiers:(id)arg2 wantsStateUpdates:(BOOL)arg3 wantsSettingsUpdates:(BOOL)arg4 ;
@end

