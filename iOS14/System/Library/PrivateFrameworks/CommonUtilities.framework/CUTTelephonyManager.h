/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRegistered:(BOOL)arg1 ;
-(void)_adjustFastDormancyTokens;
-(BOOL)registered;
-(void)addFastDormancyDisableToken:(id)arg1 ;
-(CTServerConnectionRef)_serverConnection;
-(void)_setFastDormancySuspended:(BOOL)arg1 ;
-(id)init;
-(void)set_suspendDormancyAssertion:(void*)arg1 ;
-(void)set_serverConnection:(CTServerConnectionRef)arg1 ;
-(NSRecursiveLock *)lock;
-(NSMutableSet *)disableFastDormancyTokens;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)removeFastDormancyDisableToken:(id)arg1 ;
-(void)__adjustFastDormancyTokens;
-(BOOL)disableFastDormancy;
-(void*)_suspendDormancyAssertion;
-(void)setDisableFastDormancyTokens:(NSMutableSet *)arg1 ;
-(void)dealloc;
@end

