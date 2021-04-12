/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUItemCellContext.h>

@class NSString;

@interface SUMarkupCellContext : SUItemCellContext {

	long long _pendingWebViewLoads;
	NSString* _stylesheet;
	CFDictionaryRef _webViewCache;
	double _webViewWidth;

}

@property (nonatomic,retain) NSString * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
@property (assign,nonatomic) double webViewWidth;                //@synthesize webViewWidth=_webViewWidth - In the implementation block
-(void)dealloc;
-(NSString *)stylesheet;
-(void)webViewDidFinishLoading:(id)arg1 ;
-(void)setStylesheet:(NSString *)arg1 ;
-(id)webViewForMarkup:(id)arg1 ;
-(double)webViewWidth;
-(void)setWebViewWidth:(double)arg1 ;
@end

