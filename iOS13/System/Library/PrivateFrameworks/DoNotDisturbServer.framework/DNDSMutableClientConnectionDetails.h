/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInterruptionInvalidationAssertionUUID:(NSUUID *)arg1 ;
-(void)setAssertionUpdateClientIdentifiers:(NSSet *)arg1 ;
-(void)setWantsStateUpdates:(BOOL)arg1 ;
-(void)setWantsSettingsUpdates:(BOOL)arg1 ;
@end

