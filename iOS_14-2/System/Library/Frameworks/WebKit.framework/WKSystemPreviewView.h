/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKApplicationStateTrackingView.h>
#import <libobjc.A.dylib/ASVThumbnailViewDelegate.h>
#import <libobjc.A.dylib/WKWebViewContentProvider.h>
#import <libobjc.A.dylib/QLPreviewItemDataProvider.h>

@class WKWebView, NSString, UIView, NSData;

@interface WKSystemPreviewView : WKApplicationStateTrackingView <ASVThumbnailViewDelegate, WKWebViewContentProvider, QLPreviewItemDataProvider> {

	RetainPtr<NSItemProvider>* _itemProvider;
	RetainPtr<NSData>* _data;
	RetainPtr<NSString>* _suggestedFilename;
	RetainPtr<NSString>* _mimeType;
	RetainPtr<QLItem>* _item;
	RetainPtr<ASVThumbnailView>* _thumbnailView;
	WKWebView* _webView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * web_contentView; 
@property (nonatomic,readonly) NSData * web_dataRepresentation; 
@property (nonatomic,readonly) NSString * web_suggestedFilename; 
@property (nonatomic,readonly) BOOL web_isBackground; 
+(BOOL)web_requiresCustomSnapshotting;
-(void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)web_hideFindUI;
-(BOOL)web_isBackground;
-(UIView *)web_contentView;
-(void)web_setMinimumSize:(CGSize)arg1 ;
-(id)provideDataForItem:(id)arg1 ;
-(void)_layoutThumbnailView;
-(void)thumbnailView:(id)arg1 wantsToPresentPreviewController:(id)arg2 forItem:(id)arg3 ;
-(id)web_initWithFrame:(CGRect)arg1 webView:(id)arg2 mimeType:(id)arg3 ;
-(void)web_setFixedOverlayView:(id)arg1 ;
-(void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2 ;
-(void)web_computedContentInsetDidChange;
-(void)web_didSameDocumentNavigation:(unsigned)arg1 ;
-(void)web_setOverlaidAccessoryViewsInset:(CGSize)arg1 ;
@end

