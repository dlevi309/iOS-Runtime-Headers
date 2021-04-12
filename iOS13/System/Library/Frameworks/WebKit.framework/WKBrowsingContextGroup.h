/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKBrowsingContextGroup : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPageGroup> _pageGroup;

}

@property (readonly) OpaqueWKPageGroupRef _pageGroupRef; 
@property (assign) BOOL allowsJavaScript; 
@property (assign) BOOL allowsPlugIns; 
@property (assign) BOOL privateBrowsingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(Object*)_apiObject;
-(BOOL)allowsJavaScript;
-(void)setAllowsJavaScript:(BOOL)arg1 ;
-(BOOL)allowsJavaScriptMarkup;
-(void)setAllowsJavaScriptMarkup:(BOOL)arg1 ;
-(BOOL)allowsPlugIns;
-(void)setAllowsPlugIns:(BOOL)arg1 ;
-(BOOL)privateBrowsingEnabled;
-(void)setPrivateBrowsingEnabled:(BOOL)arg1 ;
-(void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(BOOL)arg5 ;
-(void)removeAllUserStyleSheets;
-(void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(BOOL)arg6 ;
-(void)removeAllUserScripts;
-(OpaqueWKPageGroupRef)_pageGroupRef;
@end

