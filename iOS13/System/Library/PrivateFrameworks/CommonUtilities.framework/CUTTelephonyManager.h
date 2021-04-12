/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


#import <CommonUtilities/CommonUtilities-Structs.h>
@class NSRecursiveLock, NSMutableSet;

@interface CUTTelephonyManager : NSObject {

	BOOL _registered;
	NSRecursiveLock* _lock;
	NSMutableSet* _disableFastDormancyTokens;
	void* _suspendDormancyAssertion;
	CTServerConnectionRef _serverConnection;

}

@property (assign,nonatomic) CTServerConnectionRef _serverConnection;               //@synthesize serverConnection=_serverConnection - In the implementation block
@property (assign,nonatomic) void* _suspendDormancyAssertion;                       //@synthesize suspendDormancyAssertion=_suspendDormancyAssertion - In the implementation block
@property (assign,nonatomic) BOOL registered;                                       //@synthesize registered=_registered - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * disableFastDormancyTokens;              //@synthesize disableFastDormancyTokens=_disableFastDormancyTokens - In the implementation block
@property (nonatomic,readonly) BOOL disableFastDormancy; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSRecursiveLock *)lock;
-(CTServerConnectionRef)_serverConnection;
-(BOOL)registered;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)_adjustFastDormancyTokens;
-(BOOL)disableFastDormancy;
-(void)_setFastDormancySuspended:(BOOL)arg1 ;
-(void)__adjustFastDormancyTokens;
-(void)addFastDormancyDisableToken:(id)arg1 ;
-(void)removeFastDormancyDisableToken:(id)arg1 ;
-(NSMutableSet *)disableFastDormancyTokens;
-(void)setDisableFastDormancyTokens:(NSMutableSet *)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(void*)_suspendDormancyAssertion;
-(void)set_suspendDormancyAssertion:(void*)arg1 ;
-(void)set_serverConnection:(CTServerConnectionRef)arg1 ;
@end

