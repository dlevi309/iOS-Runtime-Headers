/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebProcessPlugInNodeHandle, NSString;

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleHitTestResult> _hitTestResult;

}

@property (readonly) WKWebProcessPlugInNodeHandle * nodeHandle; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Object*)_apiObject;
-(WKWebProcessPlugInNodeHandle *)nodeHandle;
-(void)dealloc;
@end

