/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SUCorePower : NSObject {

	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSMutableDictionary* _activePowerAssertions;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> assertionQueue;              //@synthesize assertionQueue=_assertionQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activePowerAssertions;                       //@synthesize activePowerAssertions=_activePowerAssertions - In the implementation block
+(id)sharedPowerManager;
+(void)_enablePowerAssertion:(id)arg1 forAppendedDomain:(id)arg2 ;
+(void)_disablePowerAssertion:(id)arg1 forAppendedDomain:(id)arg2 ;
+(void)setPowerAssertion:(BOOL)arg1 forIdentifierDomain:(id)arg2 ;
+(int)getPowerAssertionCountForIdentifierDomain:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(NSMutableDictionary *)activePowerAssertions;
-(void)setActivePowerAssertions:(NSMutableDictionary *)arg1 ;
@end

