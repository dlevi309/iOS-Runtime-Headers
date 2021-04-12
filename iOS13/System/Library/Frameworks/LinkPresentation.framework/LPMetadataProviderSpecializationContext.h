/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSURL, NSString, WKWebView;

@interface LPMetadataProviderSpecializationContext : NSObject {

	BOOL _hasLoadedResource;
	BOOL _shouldFetchSubresources;
	NSURL* _URL;
	NSString* _MIMEType;
	WKWebView* _webView;
	unsigned long long _allowedSpecializations;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * MIMEType;                               //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) BOOL hasLoadedResource;                                 //@synthesize hasLoadedResource=_hasLoadedResource - In the implementation block
@property (nonatomic,readonly) BOOL shouldFetchSubresources;                           //@synthesize shouldFetchSubresources=_shouldFetchSubresources - In the implementation block
@property (nonatomic,retain,readonly) WKWebView * webView;                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) unsigned long long allowedSpecializations;              //@synthesize allowedSpecializations=_allowedSpecializations - In the implementation block
-(NSURL *)URL;
-(NSString *)MIMEType;
-(WKWebView *)webView;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 webView:(id)arg3 hasLoadedResource:(BOOL)arg4 shouldFetchSubresources:(BOOL)arg5 allowedSpecializations:(unsigned long long)arg6 ;
-(BOOL)shouldFetchSubresources;
-(unsigned long long)allowedSpecializations;
-(BOOL)hasLoadedResource;
@end

