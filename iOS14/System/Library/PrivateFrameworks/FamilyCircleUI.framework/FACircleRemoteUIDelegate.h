/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@protocol FACircleRemoteUIDelegateDelegate;
@class FARequestConfigurator, NSDictionary, AAUIServerUIHookHandler, NSURLRequest, NSMutableDictionary, FAProfilePictureStore, RUIPage, FACircleContext, NSString;

@interface FACircleRemoteUIDelegate : NSObject <RemoteUIControllerDelegate> {

	FARequestConfigurator* _requestConfigurator;
	NSDictionary* _cachedServerInfo;
	AAUIServerUIHookHandler* _serverHookHandler;
	NSURLRequest* _cachedRequest;
	NSMutableDictionary* _objectModelDecorators;
	FAProfilePictureStore* _familyPictureStore;
	NSDictionary* _dismissInfo;
	BOOL _isReplacing;
	RUIPage* _cachedPage;
	FACircleContext* _context;
	id<FACircleRemoteUIDelegateDelegate> _delegate;

}

@property (nonatomic,readonly) FACircleContext * context;                      //@synthesize context=_context - In the implementation block
@property (__weak) id<FACircleRemoteUIDelegateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(id)init;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2 ;
-(void)remoteUIController:(id)arg1 loadResourcesForObjectModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<FACircleRemoteUIDelegateDelegate>)delegate;
-(FACircleContext *)context;
-(void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(void)setDelegate:(id<FACircleRemoteUIDelegateDelegate>)arg1 ;
-(void)_broadcastFamilyDidChangeNotification;
-(void)_broadcastServicesDidChangeNotification;
-(void)_setUserInteractionForRUIPage:(id)arg1 enabled:(BOOL)arg2 ;
-(void)_reportRequestFailureWithResponse:(id)arg1 ;
-(void)_notifyDelegateOfCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(BOOL)arg3 ;
-(id)initWithContext:(id)arg1 serverHookHandler:(id)arg2 pictureStore:(id)arg3 ;
@end

