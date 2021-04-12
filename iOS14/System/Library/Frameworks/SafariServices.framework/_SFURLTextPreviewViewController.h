/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(id)initWithURL:(id)arg1 ;
-(id)_linkActions;
-(void)_setLinkActions:(id)arg1 ;
-(void)_setActivatedElementInfo:(id)arg1 ;
-(id)_previewHeader;
-(void)setURL:(NSURL *)arg1 ;
-(_SFURLTextPreviewView *)previewView;
-(NSURL *)URL;
-(id)_activatedElementInfo;
-(void)loadView;
-(void)setPreviewView:(_SFURLTextPreviewView *)arg1 ;
@end

