/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSURL, NSString, WKWebView, LPEvent;

@interface LPMetadataProviderSpecializationContext : NSObject {

	BOOL _hasLoadedResource;
	BOOL _shouldFetchSubresources;
	NSURL* _URL;
	NSString* _MIMEType;
	WKWebView* _webView;
	unsigned long long _allowedSpecializations;
	LPEvent* _event;
	/*^block*/id _eventGenerator;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * MIMEType;                               //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) BOOL hasLoadedResource;                                 //@synthesize hasLoadedResource=_hasLoadedResource - In the implementation block
@property (nonatomic,readonly) BOOL shouldFetchSubresources;                           //@synthesize shouldFetchSubresources=_shouldFetchSubresources - In the implementation block
@property (nonatomic,retain,readonly) WKWebView * webView;                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) unsigned long long allowedSpecializations;              //@synthesize allowedSpecializations=_allowedSpecializations - In the implementation block
@property (nonatomic,retain) LPEvent * event;                                          //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) id eventGenerator;                                          //@synthesize eventGenerator=_eventGenerator - In the implementation block
-(WKWebView *)webView;
-(NSString *)MIMEType;
-(void)ensureEvent;
-(void)setEventGenerator:(id)arg1 ;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 webView:(id)arg3 hasLoadedResource:(BOOL)arg4 shouldFetchSubresources:(BOOL)arg5 allowedSpecializations:(unsigned long long)arg6 ;
-(BOOL)shouldFetchSubresources;
-(BOOL)hasLoadedResource;
-(unsigned long long)allowedSpecializations;
-(id)eventGenerator;
-(LPEvent *)event;
-(NSURL *)URL;
-(void)setEvent:(LPEvent *)arg1 ;
@end

