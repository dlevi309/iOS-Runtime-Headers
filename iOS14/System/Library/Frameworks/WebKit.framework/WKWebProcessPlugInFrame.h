/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, NSArray, _WKFrameHandle, NSString;

@interface WKWebProcessPlugInFrame : NSObject <WKObject> {

	ObjectStorage<WebKit::WebFrame> _frame;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * childFrames; 
@property (nonatomic,readonly) BOOL containsAnyFormElements; 
@property (nonatomic,readonly) BOOL isMainFrame; 
@property (nonatomic,readonly) _WKFrameHandle * handle; 
@property (nonatomic,readonly) NSArray * appleTouchIconURLs; 
@property (nonatomic,readonly) NSArray * faviconURLs; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lookUpFrameFromHandle:(id)arg1 ;
-(BOOL)_hasCustomContentProvider;
-(_WKFrameHandle *)handle;
-(NSArray *)faviconURLs;
-(id)_browserContextController;
-(id)hitTest:(CGPoint)arg1 ;
-(id)_certificateChain;
-(id)jsContextForWorld:(id)arg1 ;
-(NSArray *)childFrames;
-(BOOL)isMainFrame;
-(NSURL *)URL;
-(id)jsRangeForRangeHandle:(id)arg1 inWorld:(id)arg2 ;
-(id)_provisionalURL;
-(Object*)_apiObject;
-(SecTrustRef)_serverTrust;
-(id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2 ;
-(id)_parentFrame;
-(NSArray *)appleTouchIconURLs;
-(void)dealloc;
-(BOOL)containsAnyFormElements;
@end

