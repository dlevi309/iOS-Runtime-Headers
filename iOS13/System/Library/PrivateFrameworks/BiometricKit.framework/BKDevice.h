/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<BKDeviceDelegate>)delegate;
-(void)setDelegate:(id<BKDeviceDelegate>)arg1 ;
-(id)dispatchQueue;
-(BKDeviceDescriptor *)descriptor;
-(void)setDescriptor:(BKDeviceDescriptor *)arg1 ;
-(BOOL)bioLockoutState:(long long*)arg1 forUser:(unsigned)arg2 error:(id*)arg3 ;
-(id)identitiesWithError:(id*)arg1 ;
-(id)maxIdentityCountWithError:(id*)arg1 ;
-(BOOL)updateIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)isDelegate;
-(id)identitiesForUser:(unsigned)arg1 error:(id*)arg2 ;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2 ;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2 ;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2 ;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2 ;
-(id)createEnrollOperationWithError:(id*)arg1 ;
-(id)createMatchOperationWithError:(id*)arg1 ;
-(id)createPresenceDetectOperationWithError:(id*)arg1 ;
-(id)protectedConfigurationForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)effectiveProtectedConfigurationForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)systemProtectedConfigurationWithError:(id*)arg1 ;
-(BOOL)setProtectedConfiguration:(id)arg1 forUser:(unsigned)arg2 credentialSet:(id)arg3 error:(id*)arg4 ;
-(BOOL)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 error:(id*)arg3 ;
-(BOOL)extendedBioLockoutState:(long long*)arg1 forUser:(unsigned)arg2 error:(id*)arg3 ;
-(id)identitiesDatabaseUUIDForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)identitiesDatabaseHashForUser:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)dropAllUnlockTokensWithError:(id*)arg1 ;
-(BOOL)forceBioLockoutForAllUsersWithError:(id*)arg1 ;
-(BOOL)forceBioLockoutForUser:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)forceBioLockoutIfLockedForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)identityForUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllIdentitiesForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)freeIdentityCountForUser:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)biometryAvailability:(long long*)arg1 forUser:(unsigned)arg2 error:(id*)arg3 ;
-(id)lastMatchEventWithError:(id*)arg1 ;
@end

