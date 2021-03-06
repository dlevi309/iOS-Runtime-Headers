/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/QLPreviewCollectionServiceProtocol.h>

@interface QLPreviewCollectionHostContext : NSExtensionContext <QLPreviewCollectionServiceProtocol>
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setNotificationCenter:(id)arg1 ;
-(void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(BOOL)arg3 useInteractiveTransition:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_protocolService;
-(void)getNetworkObserverWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1 ;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_protocolServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1 ;
-(void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1 ;
-(void)setLoadingString:(id)arg1 ;
-(void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4 ;
-(void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_synchronousProtocolServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setAllowInteractiveTransitions:(BOOL)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)keyCommandWasPerformed:(id)arg1 ;
-(void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(void)saveCurrentPreviewEditsSynchronously:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)hostApplicationDidEnterBackground:(BOOL)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(void)invalidateService;
-(void)keyCommandsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tearDownTransition:(BOOL)arg1 ;
@end

