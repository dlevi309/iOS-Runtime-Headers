/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class WKGeolocationProviderIOS;

@interface WKProcessGroup : NSObject {

	RefPtr<WebKit::WebProcessPool, WTF::DumbPtrTraits<WebKit::WebProcessPool> >* _processPool;
	WeakObjCPtr<id<WKProcessGroupDelegate> > _delegate;
	RetainPtr<WKGeolocationProviderIOS>* _geolocationProvider;

}

@property (readonly) OpaqueWKContextRef _contextRef; 
@property (readonly) WKGeolocationProviderIOS * _geolocationProvider; 
@property (assign) id<WKProcessGroupDelegate> delegate; 
-(id)initWithInjectedBundleURL:(id)arg1 andCustomClassesForParameterCoder:(id)arg2 ;
-(OpaqueWKContextRef)_contextRef;
-(WKGeolocationProviderIOS *)_geolocationProvider;
-(id)init;
-(id<WKProcessGroupDelegate>)delegate;
-(void)setDelegate:(id<WKProcessGroupDelegate>)arg1 ;
-(void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(id)initWithInjectedBundleURL:(id)arg1 ;
@end

