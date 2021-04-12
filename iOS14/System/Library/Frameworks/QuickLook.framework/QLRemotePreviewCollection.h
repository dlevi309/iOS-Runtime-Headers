/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/QLPreviewCollectionProtocol.h>

@protocol QLPreviewControllerStateProtocolHostOnly;
@class QLPreviewCollectionHostContext;

@interface QLRemotePreviewCollection : _UIRemoteViewController <QLPreviewCollectionProtocol> {

	id<QLPreviewControllerStateProtocolHostOnly> _stateManager;
	BOOL _isAvailable;
	BOOL _allowInteractiveTransitions;
	id _request;
	QLRemotePreviewCollection* _accessoryViewController;
	QLPreviewCollectionHostContext* _hostContext;

}

@property (retain) id request;                                                       //@synthesize request=_request - In the implementation block
@property (retain) QLRemotePreviewCollection * accessoryViewController;              //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (retain) QLPreviewCollectionHostContext * hostContext;                     //@synthesize hostContext=_hostContext - In the implementation block
@property (assign) BOOL isAvailable;                                                 //@synthesize isAvailable=_isAvailable - In the implementation block
@property (assign,nonatomic) BOOL allowInteractiveTransitions;                       //@synthesize allowInteractiveTransitions=_allowInteractiveTransitions - In the implementation block
-(BOOL)isAvailable;
-(QLPreviewCollectionHostContext *)hostContext;
-(void)setRequest:(id)arg1 ;
-(id)accessoryView;
-(void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(BOOL)arg3 useInteractiveTransition:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1 ;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1 ;
-(void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1 ;
-(void)setLoadingString:(id)arg1 ;
-(void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4 ;
-(BOOL)isRemote;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(BOOL)allowInteractiveTransitions;
-(void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)request;
-(void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_resetRemoteConfiguration;
-(void)_presentViewControllerForError:(id)arg1 ;
-(void)setHostContext:(QLPreviewCollectionHostContext *)arg1 ;
-(void)setAllowInteractiveTransitions:(BOOL)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)keyCommandWasPerformed:(id)arg1 ;
-(void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(void)saveCurrentPreviewEditsSynchronously:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setIsAvailable:(BOOL)arg1 ;
-(void)hostApplicationDidEnterBackground:(BOOL)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(void)invalidateService;
-(QLRemotePreviewCollection *)accessoryViewController;
-(void)keyCommandsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tearDownTransition:(BOOL)arg1 ;
-(void)setAccessoryViewController:(QLRemotePreviewCollection *)arg1 ;
@end
