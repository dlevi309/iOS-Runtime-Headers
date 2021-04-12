/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosExtrasElementViewController.h>
#import <libobjc.A.dylib/IKAppDocumentDelegate.h>

@class IKViewElement, NSDictionary, IKAppDocument, VideosExtrasContext, NSString;

@interface VideosExtrasTemplateViewController : VideosExtrasElementViewController <IKAppDocumentDelegate> {

	IKViewElement* _displayedTemplate;
	NSDictionary* _options;
	IKAppDocument* _document;
	VideosExtrasContext* _context;

}

@property (nonatomic,readonly) IKAppDocument * document;                          //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) BOOL showsPlaceholder; 
@property (nonatomic,__weak,readonly) VideosExtrasContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)templateViewControllerWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(VideosExtrasContext *)context;
-(void)viewDidLoad;
-(void)_showPlaceholder;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(IKAppDocument *)document;
-(void)dealloc;
-(BOOL)showsPlaceholder;
-(void)documentDidUpdate:(id)arg1 ;
-(void)_startBackgroundAudio;
-(BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1 ;
-(void)configureBackgroundWithElements:(id)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)documentNeedsUpdate:(id)arg1 ;
-(void)documentDidFail:(id)arg1 withError:(id)arg2 ;
@end

