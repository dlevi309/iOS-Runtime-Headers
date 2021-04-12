/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)lookUpFrameFromHandle:(id)arg1 ;
-(void)dealloc;
-(_WKFrameHandle *)handle;
-(NSURL *)URL;
-(BOOL)isMainFrame;
-(id)hitTest:(CGPoint)arg1 ;
-(NSArray *)childFrames;
-(Object*)_apiObject;
-(id)_certificateChain;
-(SecTrustRef)_serverTrust;
-(id)jsContextForWorld:(id)arg1 ;
-(id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2 ;
-(id)jsRangeForRangeHandle:(id)arg1 inWorld:(id)arg2 ;
-(id)_browserContextController;
-(BOOL)containsAnyFormElements;
-(NSArray *)appleTouchIconURLs;
-(NSArray *)faviconURLs;
-(id)_parentFrame;
-(BOOL)_hasCustomContentProvider;
-(id)_provisionalURL;
@end

