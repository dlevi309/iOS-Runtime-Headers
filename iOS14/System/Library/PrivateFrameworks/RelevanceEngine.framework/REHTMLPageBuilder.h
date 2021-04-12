/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REHTMLElement, NSArray, NSString;

@interface REHTMLPageBuilder : NSObject {

	REHTMLElement* _stylesheetsElement;
	REHTMLElement* _scriptsElement;
	REHTMLElement* _pageDescriptionElement;
	REHTMLElement* _navigationLinksElement;
	NSArray* _stylesheets;
	NSArray* _loadingScripts;
	NSString* _pageDescription;
	NSArray* _links;

}

@property (nonatomic,retain) NSArray * stylesheets;                   //@synthesize stylesheets=_stylesheets - In the implementation block
@property (nonatomic,retain) NSArray * loadingScripts;                //@synthesize loadingScripts=_loadingScripts - In the implementation block
@property (nonatomic,retain) NSString * pageDescription;              //@synthesize pageDescription=_pageDescription - In the implementation block
@property (nonatomic,retain) NSArray * links;                         //@synthesize links=_links - In the implementation block
+(id)_safariIcon;
+(id)_headElement;
+(id)_viewportElement;
+(id)_iosIcon;
+(id)_smallFavicon;
+(id)_largeFavicon;
+(id)_stylesheetElementWithLocation:(id)arg1 ;
+(id)_scriptElementWithLocation:(id)arg1 ;
+(id)_htmlElement;
+(id)_bodyElement;
+(id)_mainNavigationElement;
+(id)_docTypeElement;
-(id)init;
-(NSString *)pageDescription;
-(void)setPageDescription:(NSString *)arg1 ;
-(NSArray *)links;
-(void)setLinks:(NSArray *)arg1 ;
-(void)setStylesheets:(NSArray *)arg1 ;
-(void)setLoadingScripts:(NSArray *)arg1 ;
-(id)pageWithTitle:(id)arg1 content:(id)arg2 backLocation:(id)arg3 ;
-(NSArray *)stylesheets;
-(NSArray *)loadingScripts;
@end

