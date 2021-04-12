/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <ShareSheet/UIActivityItemProvider.h>

@class NSURL, NSString, NSSet, WKWebView;

@interface _SFActivityItemProvider : UIActivityItemProvider {

	NSURL* _url;
	NSString* _pageTitle;
	NSSet* _excludedActivityTypes;
	/*^block*/id _thumbnailHandler;
	WKWebView* _webView;

}

@property (nonatomic,retain) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * pageTitle;                       //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,copy) NSSet * excludedActivityTypes;              //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (nonatomic,copy) id thumbnailHandler;                        //@synthesize thumbnailHandler=_thumbnailHandler - In the implementation block
@property (assign,nonatomic,__weak) WKWebView * webView;               //@synthesize webView=_webView - In the implementation block
-(WKWebView *)webView;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(void)setExcludedActivityTypes:(NSSet *)arg1 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)item;
-(void)setPageTitle:(NSString *)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(NSURL *)url;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(NSString *)pageTitle;
-(id)initWithURL:(id)arg1 pageTitle:(id)arg2 webView:(id)arg3 ;
-(id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4 ;
-(id)thumbnailHandler;
-(void)setThumbnailHandler:(id)arg1 ;
-(void)main;
-(void)setUrl:(NSURL *)arg1 ;
-(NSSet *)excludedActivityTypes;
-(void)setWebView:(WKWebView *)arg1 ;
@end

