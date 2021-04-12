/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)webViewDidFinishLoading:(id)arg1 ;
-(NSString *)stylesheet;
-(void)setStylesheet:(NSString *)arg1 ;
-(id)webViewForMarkup:(id)arg1 ;
-(double)webViewWidth;
-(void)setWebViewWidth:(double)arg1 ;
@end

