/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowsJavaScript:(BOOL)arg1 ;
-(void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(BOOL)arg5 ;
-(void)addUserScript:(id)arg1 baseURL:(id)arg2 includeMatchPatternStrings:(id)arg3 excludeMatchPatternStrings:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(BOOL)arg6 ;
-(BOOL)allowsJavaScript;
-(void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(BOOL)arg6 ;
-(Object*)_apiObject;
-(BOOL)allowsPlugIns;
-(BOOL)allowsJavaScriptMarkup;
-(void)setAllowsPlugIns:(BOOL)arg1 ;
-(void)setPrivateBrowsingEnabled:(BOOL)arg1 ;
-(void)removeAllUserScripts;
-(BOOL)privateBrowsingEnabled;
-(OpaqueWKPageGroupRef)_pageGroupRef;
-(void)removeAllUserStyleSheets;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setAllowsJavaScriptMarkup:(BOOL)arg1 ;
-(void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 includeMatchPatternStrings:(id)arg3 excludeMatchPatternStrings:(id)arg4 mainFrameOnly:(BOOL)arg5 ;
-(void)dealloc;
@end

