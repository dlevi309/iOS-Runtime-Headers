/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSClientConnectionDetails.h>

@class NSUUID, NSSet;

@interface DNDSMutableClientConnectionDetails : DNDSClientConnectionDetails

@property (nonatomic,copy) NSUUID * interruptionInvalidationAssertionUUID; 
@property (nonatomic,copy) NSSet * assertionUpdateClientIdentifiers; 
@property (assign,nonatomic) BOOL wantsStateUpdates; 
@property (assign,nonatomic) BOOL wantsSettingsUpdates; 
-(void)setWantsSettingsUpdates:(BOOL)arg1 ;
-(void)setWantsStateUpdates:(BOOL)arg1 ;
-(void)setInterruptionInvalidationAssertionUUID:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAssertionUpdateClientIdentifiers:(NSSet *)arg1 ;
@end

