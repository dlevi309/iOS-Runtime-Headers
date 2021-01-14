/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/CSRemoteContentModalViewControllerDelegate.h>

@protocol CSRemoteContentSessionHostDelegate, CSRemoteContentSessionPreferencesProvider, SBFAuthenticationStatusProvider;
@class CSRemoteContentModalViewController, SBSRemoteContentDefinition, NSString;

@interface CSRemoteContentSession : NSObject <CSRemoteContentModalViewControllerDelegate> {

	BOOL _activated;
	BOOL _presented;
	CSRemoteContentModalViewController* _containerViewController;
	BOOL _valid;
	id<CSRemoteContentSessionHostDelegate> _hostDelegate;
	id<CSRemoteContentSessionPreferencesProvider> _preferencesProvider;
	SBSRemoteContentDefinition* _definition;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;
	NSString* _sessionID;

}

@property (assign,nonatomic,__weak) id<CSRemoteContentSessionHostDelegate> hostDelegate;                            //@synthesize hostDelegate=_hostDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSRemoteContentSessionPreferencesProvider> preferencesProvider;              //@synthesize preferencesProvider=_preferencesProvider - In the implementation block
@property (nonatomic,copy,readonly) SBSRemoteContentDefinition * definition;                                        //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                    //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                                                           //@synthesize sessionID=_sessionID - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                                           //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(NSString *)sessionID;
-(void)activate;
-(void)_activate;
-(id<CSRemoteContentSessionHostDelegate>)hostDelegate;
-(BOOL)isValid;
-(id)_errorWithCode:(long long)arg1 ;
-(SBSRemoteContentDefinition *)definition;
-(void)_reactivate;
-(void)_invalidateWithError:(id)arg1 ;
-(void)setHostDelegate:(id<CSRemoteContentSessionHostDelegate>)arg1 ;
-(void)_invalidateWithErrorCode:(long long)arg1 ;
-(BOOL)_invalidateForReason:(long long)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)remoteContentModalViewController:(id)arg1 requestsDismissalForType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remoteContentModalViewController:(id)arg1 didUpdateWithPreferences:(id)arg2 ;
-(void)remoteContentModalViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(id)initWithDefinition:(id)arg1 authenticationStatusProvider:(id)arg2 ;
-(id<CSRemoteContentSessionPreferencesProvider>)preferencesProvider;
-(void)setPreferencesProvider:(id<CSRemoteContentSessionPreferencesProvider>)arg1 ;
@end

