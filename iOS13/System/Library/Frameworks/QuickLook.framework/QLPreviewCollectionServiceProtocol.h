/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLPreviewCollectionServiceProtocol <QLPreviewCollectionProtocol>
@required
-(void)setAllowInteractiveTransitions:(BOOL)arg1;
-(void)invalidateService;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(/*^block*/id)arg1;
-(void)getNetworkObserverWithCompletionBlock:(/*^block*/id)arg1;
-(void)setNotificationCenter:(id)arg1;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(/*^block*/id)arg1;

@end

