/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <libobjc.A.dylib/BNPostingPrivate.h>
#import <libobjc.A.dylib/BNConsideringDelegate.h>
#import <libobjc.A.dylib/BNPosting.h>
#import <libobjc.A.dylib/BNSuspendable.h>

@protocol BNConsidering, BNPending, BNPresenting;
@class NSMapTable, BSTimer, NSString;

@interface BNBannerController : NSObject <BNPostingPrivate, BNConsideringDelegate, BNPosting, BNSuspendable> {

	NSMapTable* _presentablesInducingSuspensionToSuspendedRequesterIDs;
	id<BNConsidering> _authority;
	id<BNPending> _pender;
	id<BNPresenting> _presenter;
	BSTimer* _autoDequeueTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setAutoDequeueTimer:,getter=_autoDequeueTimer,nonatomic,retain) BSTimer * autoDequeueTimer;              //@synthesize autoDequeueTimer=_autoDequeueTimer - In the implementation block
@property (nonatomic,readonly) id<BNConsidering> authority;                                                                 //@synthesize authority=_authority - In the implementation block
@property (nonatomic,readonly) id<BNPending> pender;                                                                        //@synthesize pender=_pender - In the implementation block
@property (nonatomic,readonly) id<BNPresenting> presenter;                                                                  //@synthesize presenter=_presenter - In the implementation block
+(void)initialize;
-(BOOL)revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 animated:(BOOL)arg5 userInfo:(id)arg6 error:(out id*)arg7 ;
-(id)_penderQueue;
-(id)revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 animated:(BOOL)arg4 userInfo:(id)arg5 error:(id*)arg6 ;
-(id)_autoDequeueTimer;
-(id)_activeSuspensionReasons;
-(void)_resumeForResponsiblePresentableIfNecessaryWithIdentification:(id)arg1 ;
-(id<BNPresenting>)presenter;
-(BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 revokingCurrent:(BOOL)arg3 error:(out id*)arg4 ;
-(BOOL)revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 userInfo:(id)arg5 error:(out id*)arg6 ;
-(id<BNConsidering>)authority;
-(void)_setAutoDequeueTimer:(id)arg1 ;
-(BOOL)_presentNextPendingPresentableIfPossible:(out id*)arg1 ;
-(BOOL)revokeAllPresentablesWithRequesterIdentifier:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(out id*)arg5 ;
-(void)_cancelAutoDequeueTimer;
-(id<BNPending>)pender;
-(BOOL)_shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3 ;
-(void)bannerAuthority:(id)arg1 mayChangeDecisionForResponsiblePresentable:(id)arg2 ;
-(id)_suspensionReasonForEnqueuedPresentable:(id)arg1 ;
-(BOOL)_isSuspended;
-(void)_startAutoDequeueTimerIfNecessary;
-(BOOL)_presentNextPendingPresentableIfPossible;
-(BOOL)_presentPresentableWithContext:(id)arg1 ;
-(BOOL)postPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id*)arg4 ;
-(id)revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(out id*)arg5 ;
-(id)initWithAuthority:(id)arg1 pender:(id)arg2 presenter:(id)arg3 ;
-(id)_revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 animated:(id)arg4 userInfo:(id)arg5 error:(out id*)arg6 ;
-(void)_resumeForResponsiblePresentableIfNecessary:(id)arg1 ;
-(void)_suspendPenderForRequesterIdentifier:(id)arg1 withResponsiblePresentable:(id)arg2 ;
@end

