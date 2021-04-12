/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@protocol CDPProtectedCloudStorageProxy;
#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
@class CDPContext;

@interface CDPDPCSController : NSObject {

	id<CDPProtectedCloudStorageProxy> _pcsProxy;
	CDPContext* _context;

}

@property (nonatomic,retain) id<CDPProtectedCloudStorageProxy> pcsProxy;              //@synthesize pcsProxy=_pcsProxy - In the implementation block
@property (nonatomic,retain) CDPContext * context;                                    //@synthesize context=_context - In the implementation block
-(id)init;
-(CDPContext *)context;
-(void)setContext:(CDPContext *)arg1 ;
-(id)_contextSetupDictionary;
-(void)checkiCDPStatusNetwork:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_reauthenticateAndCheckiCDPStatusWithNetwork:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_checkiCDPStatusNetwork:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(PCSIdentitySetDataRef)_getOrSetupIdentitySetRef:(id*)arg1 ;
-(void)_enableCDPWithCompletion:(/*^block*/id)arg1 ;
-(void)_disableCDPWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 pcsProxy:(id)arg2 ;
-(void)recoverKeysWithCompletion:(/*^block*/id)arg1 ;
-(void)recoverAndSynchronizeKeysWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isCloudProtectionEnabledLocally:(id*)arg1 ;
-(BOOL)isCompanionInKeychainCircle:(id*)arg1 ;
-(void)enableCDPWithCompletion:(/*^block*/id)arg1 ;
-(void)disableCDPWithCompletion:(/*^block*/id)arg1 ;
-(id<CDPProtectedCloudStorageProxy>)pcsProxy;
-(void)setPcsProxy:(id<CDPProtectedCloudStorageProxy>)arg1 ;
@end

