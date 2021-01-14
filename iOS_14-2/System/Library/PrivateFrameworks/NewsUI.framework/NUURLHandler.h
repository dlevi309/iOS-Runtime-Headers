/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SXURLHandling.h>
#import <libobjc.A.dylib/SXURLPreviewing.h>

@protocol NUURLHandlerDelegate, NUWebViewControllerFactory, NUPreviewViewControllerFactory, NUURLHandling;
@class NSMutableArray, NSString;

@interface NUURLHandler : NSObject <SXURLHandling, SXURLPreviewing> {

	BOOL _universalLinksEnabled;
	id<NUURLHandlerDelegate> _delegate;
	id<NUWebViewControllerFactory> _webViewControllerFactory;
	id<NUPreviewViewControllerFactory> _previewViewControllerFactory;
	id<NUURLHandling> _URLHandling;
	NSMutableArray* _modifiers;

}

@property (nonatomic,readonly) id<NUURLHandling> URLHandling;                                              //@synthesize URLHandling=_URLHandling - In the implementation block
@property (nonatomic,readonly) BOOL universalLinksEnabled;                                                 //@synthesize universalLinksEnabled=_universalLinksEnabled - In the implementation block
@property (nonatomic,readonly) NSMutableArray * modifiers;                                                 //@synthesize modifiers=_modifiers - In the implementation block
@property (assign,nonatomic,__weak) id<NUURLHandlerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NUWebViewControllerFactory> webViewControllerFactory;                      //@synthesize webViewControllerFactory=_webViewControllerFactory - In the implementation block
@property (nonatomic,retain) id<NUPreviewViewControllerFactory> previewViewControllerFactory;              //@synthesize previewViewControllerFactory=_previewViewControllerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWebViewControllerFactory:(id<NUWebViewControllerFactory>)arg1 ;
-(id<NUURLHandlerDelegate>)delegate;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPreviewViewControllerFactory:(id<NUPreviewViewControllerFactory>)arg1 ;
-(id)modifyURL:(id)arg1 ;
-(id)viewControllerForURL:(id)arg1 ;
-(void)commitViewController:(id)arg1 URL:(id)arg2 ;
-(id<NUURLHandling>)URLHandling;
-(void)setDelegate:(id<NUURLHandlerDelegate>)arg1 ;
-(id<NUPreviewViewControllerFactory>)previewViewControllerFactory;
-(NSMutableArray *)modifiers;
-(void)addModifier:(id)arg1 ;
-(void)openURL:(id)arg1 ;
-(BOOL)universalLinksEnabled;
-(void)removeModifier:(id)arg1 ;
-(id)initWithURLHandling:(id)arg1 universalLinksEnabled:(BOOL)arg2 ;
-(id<NUWebViewControllerFactory>)webViewControllerFactory;
@end

