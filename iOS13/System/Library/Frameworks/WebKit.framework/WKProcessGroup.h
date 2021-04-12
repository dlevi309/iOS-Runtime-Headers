/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<WKProcessGroupDelegate>)delegate;
-(void)setDelegate:(id<WKProcessGroupDelegate>)arg1 ;
-(OpaqueWKContextRef)_contextRef;
-(id)initWithInjectedBundleURL:(id)arg1 ;
-(id)initWithInjectedBundleURL:(id)arg1 andCustomClassesForParameterCoder:(id)arg2 ;
-(WKGeolocationProviderIOS *)_geolocationProvider;
-(void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
@end

