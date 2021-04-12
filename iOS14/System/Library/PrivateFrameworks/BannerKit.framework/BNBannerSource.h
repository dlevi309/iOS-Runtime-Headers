/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <libobjc.A.dylib/BNBannerSourceHostToClientInterface.h>
#import <libobjc.A.dylib/BNBannerSceneComponentProviderDelegate.h>
#import <libobjc.A.dylib/BNBannerClientContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/BNBannerSourceProvidingPrivate.h>
#import <libobjc.A.dylib/BNBannerSourceProviding.h>

@protocol OS_dispatch_queue, BNBannerSourceDelegate;
@class NSString, NSObject, BSServiceConnection, NSMutableArray, BNBannerClientContainerViewController;

@interface BNBannerSource : NSObject <BNBannerSourceHostToClientInterface, BNBannerSceneComponentProviderDelegate, BNBannerClientContainerViewControllerDelegate, BNBannerSourceProvidingPrivate, BNBannerSourceProviding> {

	NSString* _machName;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	BSServiceConnection* _connection;
	NSMutableArray* _presentables;
	BNBannerClientContainerViewController* _bannerClientContainerVCDeferringFocus;
	BOOL _valid;
	long long _destination;
	NSString* _requesterIdentifier;
	id<BNBannerSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long destination;                                 //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy,readonly) NSString * requesterIdentifier;                   //@synthesize requesterIdentifier=_requesterIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<BNBannerSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                             //@synthesize valid=_valid - In the implementation block
+(void)initialize;
+(id)bannerSourceForDestination:(long long)arg1 forRequesterIdentifier:(id)arg2 ;
+(void)_invalidateBannerSource:(id)arg1 ;
-(id)initWithDestination:(long long)arg1 andRequesterIdentifier:(id)arg2 ;
-(BOOL)bannerClientContainerViewControllerShouldDeferFocus:(id)arg1 ;
-(id<BNBannerSourceDelegate>)delegate;
-(id)layoutDescriptionWithError:(out id*)arg1 ;
-(NSString *)requesterIdentifier;
-(void)setDelegate:(id<BNBannerSourceDelegate>)arg1 ;
-(BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 revokingCurrent:(BOOL)arg3 error:(out id*)arg4 ;
-(NSString *)description;
-(id)revokePresentableWithIdentification:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(out id*)arg5 ;
-(id)initWithMachName:(id)arg1 andRequesterIdentifier:(id)arg2 ;
-(BOOL)isValid;
-(id)_revokePresentableWithIdentification:(id)arg1 reason:(id)arg2 animated:(id)arg3 userInfo:(id)arg4 error:(out id*)arg5 ;
-(void)sceneWillInvalidateForBannerSceneComponentProvider:(id)arg1 ;
-(BOOL)revokePresentableWithRequestIdentifier:(id)arg1 animated:(BOOL)arg2 reason:(id)arg3 userInfo:(id)arg4 error:(out id*)arg5 ;
-(void)bannerClientContainerViewControllerStoppedDeferringFocus:(id)arg1 ;
-(void)_invalidateConnection;
-(void)invalidate;
-(id)revokeAllPresentablesWithReason:(id)arg1 userInfo:(id)arg2 error:(out id*)arg3 ;
-(id)revokePresentableWithRequestIdentifier:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(out id*)arg5 ;
-(id)_activeConnectionWithError:(out id*)arg1 ;
-(id)keyWindowForScreen:(id)arg1 ;
-(id)_presentableForUniqueIdentifier:(id)arg1 ;
-(long long)destination;
-(BOOL)postPresentable:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id*)arg4 ;
-(void)dealloc;
-(id)containerViewControllerForBannerSceneComponentProvider:(id)arg1 ;
@end

