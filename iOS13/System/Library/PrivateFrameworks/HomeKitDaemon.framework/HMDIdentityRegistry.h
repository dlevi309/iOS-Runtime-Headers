/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@class NSMutableArray, NSRecursiveLock, NSArray, NSString;

@interface HMDIdentityRegistry : HMFObject <HMFLogging, HMFDumpState> {

	NSMutableArray* _registeredIdentities;
	NSRecursiveLock* _lock;

}

@property (nonatomic,readonly) NSRecursiveLock * lock;              //@synthesize lock=_lock - In the implementation block
@property (readonly) NSArray * registeredIdentities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRegistry;
+(id)logCategory;
-(id)init;
-(NSRecursiveLock *)lock;
-(void)reset;
-(id)identityForIdentifier:(id)arg1 ;
-(id)attributeDescriptions;
-(id)dumpState;
-(void)registerIdentity:(id)arg1 device:(id)arg2 object:(id)arg3 ;
-(void)registerIdentity:(id)arg1 account:(id)arg2 object:(id)arg3 ;
-(NSArray *)registeredIdentities;
-(id)identitiesForDevice:(id)arg1 ;
-(id)identitiesForAccount:(id)arg1 ;
-(id)accountsForIdentity:(id)arg1 ;
-(void)deregisterIdentity:(id)arg1 object:(id)arg2 ;
@end

