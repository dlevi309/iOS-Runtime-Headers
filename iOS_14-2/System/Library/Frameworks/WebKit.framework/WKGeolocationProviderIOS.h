/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithProcessPool:(WebProcessPool*)arg1 ;
-(id)init;
-(void)decidePolicyForGeolocationRequestFromOrigin:(FrameInfoData*)arg1 completionHandler:(Function<void (bool)>*)arg2 view:(id)arg3 ;
-(void)_startUpdating;
-(void)_setEnableHighAccuracy:(BOOL)arg1 ;
-(void)positionChanged:(id)arg1 ;
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)errorOccurred:(id)arg1 ;
-(void)resetGeolocation;
-(void)_stopUpdating;
@end

