/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWWebViewFactory.h>

@protocol SWWebViewFactory <NSObject>
@required
-(id)createWebViewWithUserContentController:(id)arg1;

@end


@class NSPointerArray, WKProcessPool, WKWebsiteDataStore, NSString;

@interface SWWebViewFactory : NSObject <SWWebViewFactory> {

	NSPointerArray* _webViews;
	WKProcessPool* _processPool;
	WKWebsiteDataStore* _dataStore;

}

@property (nonatomic,readonly) WKProcessPool * processPool;                 //@synthesize processPool=_processPool - In the implementation block
@property (nonatomic,readonly) WKWebsiteDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) NSPointerArray * webViews;                     //@synthesize webViews=_webViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebsiteDataStore *)dataStore;
-(WKProcessPool *)processPool;
-(id)createWebViewWithUserContentController:(id)arg1 ;
-(id)initWithProcessPool:(id)arg1 websiteDataStore:(id)arg2 ;
-(void)assignRelatedWebViewToConfiguration:(id)arg1 ;
-(NSPointerArray *)webViews;
-(void)setWebViews:(NSPointerArray *)arg1 ;
@end

