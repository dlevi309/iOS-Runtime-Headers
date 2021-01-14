/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_initWithInterruptionInvalidationAssertionUUID:(id)arg1 assertionUpdateClientIdentifiers:(id)arg2 wantsStateUpdates:(BOOL)arg3 wantsSettingsUpdates:(BOOL)arg4 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSUUID *)interruptionInvalidationAssertionUUID;
-(BOOL)wantsStateUpdates;
-(BOOL)wantsSettingsUpdates;
-(NSSet *)assertionUpdateClientIdentifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithDetails:(id)arg1 ;
@end

