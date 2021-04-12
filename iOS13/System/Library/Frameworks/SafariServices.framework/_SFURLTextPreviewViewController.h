/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIViewController.h>

@class NSArray, _WKActivatedElementInfo, _SFLinkPreviewHeader, NSURL, _SFURLTextPreviewView;

@interface _SFURLTextPreviewViewController : UIViewController {

	NSArray* _linkActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	_SFLinkPreviewHeader* _previewHeader;
	NSURL* _URL;
	_SFURLTextPreviewView* _previewView;

}

@property (nonatomic,retain) _SFURLTextPreviewView * previewView;              //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                        //@synthesize URL=_URL - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(id)_linkActions;
-(id)_activatedElementInfo;
-(_SFURLTextPreviewView *)previewView;
-(void)setPreviewView:(_SFURLTextPreviewView *)arg1 ;
-(void)_setLinkActions:(id)arg1 ;
-(void)_setActivatedElementInfo:(id)arg1 ;
-(id)_previewHeader;
@end

