/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKConnection, NSString;

@interface WKWebProcessPlugInController : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundle> _bundle;
	RetainPtr<id<WKWebProcessPlugIn> >* _principalClassInstance;

}

@property (readonly) OpaqueWKBundleRef _bundleRef; 
@property (readonly) WKConnection * connection; 
@property (readonly) id parameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(WKConnection *)connection;
-(id)parameters;
-(Object*)_apiObject;
-(void)_setPrincipalClassInstance:(id)arg1 ;
-(void)extendClassesForParameterCoder:(id)arg1 ;
-(OpaqueWKBundleRef)_bundleRef;
@end

