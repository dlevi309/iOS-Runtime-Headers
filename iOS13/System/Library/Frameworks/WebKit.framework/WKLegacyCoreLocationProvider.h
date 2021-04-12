/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKGeolocationCoreLocationProvider.h>
#import <WebKit/WebGeolocationCoreLocationUpdateListener.h>

@protocol _WKGeolocationCoreLocationListener;
@class NSString;

@interface WKLegacyCoreLocationProvider : NSObject <_WKGeolocationCoreLocationProvider, WebGeolocationCoreLocationUpdateListener> {

	id<_WKGeolocationCoreLocationListener> _listener;
	RetainPtr<WebGeolocationCoreLocationProvider>* _provider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stop;
-(void)start;
-(void)setListener:(id)arg1 ;
-(void)setEnableHighAccuracy:(BOOL)arg1 ;
-(void)requestGeolocationAuthorization;
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)positionChanged:(GeolocationPositionData*)arg1 ;
-(void)errorOccurred:(id)arg1 ;
-(void)resetGeolocation;
@end

