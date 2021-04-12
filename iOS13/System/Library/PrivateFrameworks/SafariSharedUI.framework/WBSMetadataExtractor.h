/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class WKWebProcessPlugInScriptWorld, JSContext, WKWebProcessPlugInFrame;

@interface WBSMetadataExtractor : NSObject {

	WKWebProcessPlugInScriptWorld* _webProcessPlugInScriptWorld;
	JSContext* _context;
	WKWebProcessPlugInFrame* _webProcessPlugInFrame;

}

@property (nonatomic,readonly) WKWebProcessPlugInFrame * webProcessPlugInFrame;              //@synthesize webProcessPlugInFrame=_webProcessPlugInFrame - In the implementation block
@property (nonatomic,readonly) JSContext * context; 
+(id)metadataExtractorScriptSource;
-(void)dealloc;
-(JSContext *)context;
-(id)appleTouchIconURLs;
-(id)faviconURLs;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
-(id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(BOOL)arg2 ;
-(id)firstElementForSelector:(id)arg1 ;
-(id)makeContext;
-(id)_resultForInvokingFunctionWithName:(id)arg1 ;
-(id)_colorFromColorComponents:(id)arg1 ;
-(void)getTemplateIconURL:(id*)arg1 andColor:(id*)arg2 ;
-(WKWebProcessPlugInFrame *)webProcessPlugInFrame;
@end

