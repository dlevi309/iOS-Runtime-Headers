/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)faviconURLs;
-(JSContext *)context;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
-(id)appleTouchIconURLs;
-(void)dealloc;
-(id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(BOOL)arg2 ;
-(id)firstElementForSelector:(id)arg1 ;
-(id)makeContext;
-(id)_resultForInvokingFunctionWithName:(id)arg1 ;
-(id)_colorFromColorComponents:(id)arg1 ;
-(void)getTemplateIconURL:(id*)arg1 andColor:(id*)arg2 ;
-(WKWebProcessPlugInFrame *)webProcessPlugInFrame;
@end

