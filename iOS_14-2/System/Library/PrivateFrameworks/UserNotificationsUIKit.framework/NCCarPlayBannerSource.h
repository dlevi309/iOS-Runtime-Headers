/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/BNBannerSourceDelegate.h>
#import <libobjc.A.dylib/BNPresentableObserving.h>
#import <libobjc.A.dylib/BNBannerSourceProvidingPrivate.h>

@protocol BNBannerSourceDelegate;
@class BNBannerSource, NSPointerArray, BSTimer, NSString;

@interface NCCarPlayBannerSource : NSObject <BNBannerSourceDelegate, BNPresentableObserving, BNBannerSourceProvidingPrivate> {

	BNBannerSource* _bannerSource;
	NSPointerArray* _postedPresentables;
	id<BNBannerSourceDelegate> delegate;
	BSTimer* _dismissTimer;
	BSTimer* _replaceTimer;

}

@property (setter=_setDismissTimer:,getter=_dismissTimer,nonatomic,retain) BSTimer * dismissTimer;              //@synthesize dismissTimer=_dismissTimer - In the implementation block
@property (setter=_setReplaceTimer:,getter=_replaceTimer,nonatomic,retain) BSTimer * replaceTimer;              //@synthesize replaceTimer=_replaceTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long destination; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier; 
@property (assign,nonatomic,__weak) id<BNBannerSourceDelegate> delegate; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(void)initialize;
-(void)_startReplaceTimer;
-(void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(id<BNBannerSourceDelegate>)delegate;
-(id)layoutDescriptionWithError:(out id*)arg1 ;
-(void)_startDismissTimer;
-(void)_cancelDismissTimer;
-(NSString *)requesterIdentifier;
-(void)setDelegate:(id<BNBannerSourceDelegate>)arg1 ;
-(BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 revokingCurrent:(BOOL)arg3 error:(out id*)arg4 ;
-(id)revokePresentableWithIdentification:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(out id*)arg5 ;
-(BOOL)isValid;
-(void)presentableDidAppearAsBanner:(id)arg1 ;
-(void)_cancelReplaceTimer;
-(void)invalidate;
-(id)revokeAllPresentablesWithReason:(id)arg1 userInfo:(id)arg2 error:(out id*)arg3 ;
-(id)revokePresentableWithRequestIdentifier:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(out id*)arg5 ;
-(id)keyWindowForScreen:(id)arg1 ;
-(long long)destination;
-(BOOL)postPresentable:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id*)arg4 ;
-(id)_dismissTimer;
-(id)_bannerSource;
-(unsigned long long)_postedPresentableCount;
-(BOOL)_setSuspended:(BOOL)arg1 forReason:(id)arg2 revokingCurrent:(BOOL)arg3 ;
-(void)_enqueuePostedPresentable:(id)arg1 ;
-(void)_revokePreviouslyPostedPresentableIfPossible;
-(void)_presentableWithIdentificationDidDisappear:(id)arg1 ;
-(void)_allPresentablesDidDisappear;
-(id)_postedPresentablesWithIdentification:(id)arg1 ;
-(void)_presentableDidDisappear:(id)arg1 ;
-(BOOL)_isPresentableSticky:(id)arg1 ;
-(unsigned long long)_indexOfPostedPresentable:(id)arg1 ;
-(id)_peekPostedPresentable;
-(id)_pullPostedPresentableAtIndex:(unsigned long long)arg1 ;
-(void)_setDismissTimer:(id)arg1 ;
-(id)_replaceTimer;
-(void)_setReplaceTimer:(id)arg1 ;
-(void)bannerSourceDidInvalidate:(id)arg1 ;
@end

