/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLPreviewCollectionServiceProtocol <QLPreviewCollectionProtocol>
@required
-(void)setNotificationCenter:(id)arg1;
-(void)getNetworkObserverWithCompletionBlock:(/*^block*/id)arg1;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(/*^block*/id)arg1;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(/*^block*/id)arg1;
-(void)setAllowInteractiveTransitions:(BOOL)arg1;
-(void)invalidateService;

@end

