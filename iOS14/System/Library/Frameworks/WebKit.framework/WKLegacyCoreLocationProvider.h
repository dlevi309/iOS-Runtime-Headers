/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(void)stop;
-(void)setEnableHighAccuracy:(BOOL)arg1 ;
-(void)requestGeolocationAuthorization;
-(void)positionChanged:(GeolocationPositionData*)arg1 ;
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)errorOccurred:(id)arg1 ;
-(void)resetGeolocation;
-(void)setListener:(id)arg1 ;
@end

