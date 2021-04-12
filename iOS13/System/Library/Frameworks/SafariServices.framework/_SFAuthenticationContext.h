/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/LAUIDelegate.h>

@protocol _SFAuthenticationClient, _SFAuthenticationContextDelegate;
@class LAContext, NSHashTable, NSMutableOrderedSet, NSMapTable, NSData;

@interface _SFAuthenticationContext : NSObject <LAUIDelegate> {

	LAContext* _context;
	id<_SFAuthenticationClient> _currentClientBeingAuthenticated;
	NSHashTable* _clients;
	NSMutableOrderedSet* _clientsAwaitingAuthentication;
	NSMapTable* _clientsAwaitingAuthenticationToCompletionBlocks;
	double _authenticationGracePeriod;
	double _lastAuthenticatedSessionStartTime;
	double _lastAuthenticatedSessionEndTime;
	double _lastApplicationBackgroundTime;
	BOOL _successfullyAuthenticated;
	BOOL _authenticationInvalidated;
	BOOL _ongoingAuthenticationCanceled;
	int _notificationToken;
	BOOL _matchFound;
	BOOL _fingerDetectRequired;
	unsigned long long _numberOfBiometricAuthenticationFailures;
	id<_SFAuthenticationContextDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL needsAuthentication; 
@property (nonatomic,readonly) NSData * externalizedContext; 
@property (assign,nonatomic,__weak) id<_SFAuthenticationContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<_SFAuthenticationContextDelegate>)delegate;
-(void)setDelegate:(id<_SFAuthenticationContextDelegate>)arg1 ;
-(NSData *)externalizedContext;
-(id)_authenticationContext;
-(void)invalidateClient:(id)arg1 ;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(BOOL)needsAuthentication;
-(void)authenticateForClient:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidateAuthentication;
-(BOOL)_monotonicTimeIsWithinAuthenticationGracePeriod:(double)arg1 ;
-(BOOL)_hasAuthenticationCapability:(id*)arg1 ;
-(void)_processNextClientAwaitingAuthenticationUserInitiated:(BOOL)arg1 ;
-(BOOL)_contextRequiresSessionBasedAuthentication;
-(void)_evaluatePolicyForClient:(id)arg1 userInitiated:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)_contextShouldAllowPasscodeFallback;
-(BOOL)_contextShouldAllowMultipleBiometricFailures;
-(void)_cancelOngoingAuthentication;
-(BOOL)_canInvalidateAuthentication;
-(void)_cancelOngoingAndPendingAuthentications;
-(void)_handleTouchIDEventWithParameters:(id)arg1 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)preemptOngoingAuthenticationWithPasccodeAuthentication;
@end

