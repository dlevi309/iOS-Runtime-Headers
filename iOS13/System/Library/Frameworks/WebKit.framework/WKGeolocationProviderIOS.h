/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKGeolocationProviderIOS : NSObject {

	RefPtr<WebKit::WebGeolocationManagerProxy, WTF::DumbPtrTraits<WebKit::WebGeolocationManagerProxy> >* _geolocationManager;
	RetainPtr<id<_WKGeolocationCoreLocationProvider> >* _coreLocationProvider;
	BOOL _isWebCoreGeolocationActive;
	RefPtr<WebKit::WebGeolocationPosition, WTF::DumbPtrTraits<WebKit::WebGeolocationPosition> >* _lastActivePosition;
	Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _requestsWaitingForCoreLocationAuthorization;

}
-(id)init;
-(id)initWithProcessPool:(WebProcessPool*)arg1 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(SecurityOrigin*)arg1 frame:(WebFrameProxy*)arg2 completionHandler:(Function<void (bool)>*)arg3 view:(id)arg4 ;
-(void)_startUpdating;
-(void)_stopUpdating;
-(void)_setEnableHighAccuracy:(BOOL)arg1 ;
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)positionChanged:(id)arg1 ;
-(void)errorOccurred:(id)arg1 ;
-(void)resetGeolocation;
@end

