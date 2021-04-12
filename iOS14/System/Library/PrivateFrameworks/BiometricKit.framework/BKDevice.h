/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BiometricKitDelegateXpcProtocol.h>

@protocol BKDeviceDelegate, OS_dispatch_queue;
@class BiometricKitXPCClient, NSObject, BKDeviceDescriptor, NSString;

@interface BKDevice : NSObject <BiometricKitDelegateXpcProtocol> {

	BiometricKitXPCClient* _xpcClient;
	id<BKDeviceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	BKDeviceDescriptor* _descriptor;

}

@property (nonatomic,retain) BKDeviceDescriptor * descriptor;                   //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic,__weak) id<BKDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceWithDescriptor:(id)arg1 error:(id*)arg2 ;
+(BOOL)deviceAvailableWithError:(id*)arg1 ;
+(BOOL)lockoutState:(long long*)arg1 fromDeviceLockoutState:(long long)arg2 error:(id*)arg3 ;
+(BOOL)extendedLockoutState:(long long*)arg1 fromDeviceLockoutState:(long long)arg2 error:(id*)arg3 ;
+(BOOL)biometryAvailabilityInfo:(long long*)arg1 fromDeviceInfo:(long long)arg2 error:(id*)arg3 ;
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2 ;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2 ;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(id)createEnrollOperationWithError:(id*)arg1 ;
-(BOOL)isDelegate;
-(id)identitiesWithError:(id*)arg1 ;
-(id)maxIdentityCountWithError:(id*)arg1 ;
-(BOOL)updateIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeIdentity:(id)arg1 error:(id*)arg2 ;
-(id<BKDeviceDelegate>)delegate;
-(id)identitiesForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)dispatchQueue;
-(BOOL)bioLockoutState:(long long*)arg1 forUser:(unsigned)arg2 error:(id*)arg3 ;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(BKDeviceDescriptor *)descriptor;
-(void)setDelegate:(id<BKDeviceDelegate>)arg1 ;
-(void)setDescriptor:(BKDeviceDescriptor *)arg1 ;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2 ;
-(BOOL)forceBioLockoutForUser:(unsigned)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(id)createMatchOperationWithError:(id*)arg1 ;
-(id)createPresenceDetectOperationWithError:(id*)arg1 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(BOOL)forceBioLockoutIfLockedForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)lastMatchEventWithError:(id*)arg1 ;
-(id)protectedConfigurationForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)effectiveProtectedConfigurationForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)systemProtectedConfigurationWithError:(id*)arg1 ;
-(BOOL)setProtectedConfiguration:(id)arg1 forUser:(unsigned)arg2 credentialSet:(id)arg3 error:(id*)arg4 ;
-(BOOL)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 error:(id*)arg3 ;
-(BOOL)extendedBioLockoutState:(long long*)arg1 forUser:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)expressModeState:(long long*)arg1 forUser:(unsigned)arg2 error:(id*)arg3 ;
-(id)identitiesDatabaseUUIDForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)identitiesDatabaseHashForUser:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)dropAllUnlockTokensWithError:(id*)arg1 ;
-(BOOL)forceBioLockoutForAllUsersWithError:(id*)arg1 ;
-(id)identityForUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllIdentitiesForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)freeIdentityCountForUser:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)biometryAvailability:(long long*)arg1 forUser:(unsigned)arg2 error:(id*)arg3 ;
@end

