/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SFLinkPreviewHeaderDelegate.h>

@protocol _SFAdaptivePreviewViewControllerDelegate;
@class _SFURLTextPreviewViewController, UIViewController, NSArray, _WKActivatedElementInfo, NSURL, NSString;

@interface _SFAdaptivePreviewViewController : UIViewController <_SFLinkPreviewHeaderDelegate> {

	_SFURLTextPreviewViewController* _textPreviewViewController;
	UIViewController* _linkPreviewViewController;
	id<_SFAdaptivePreviewViewControllerDelegate> _delegate;
	NSArray* _linkActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	NSURL* _URL;
	CGSize _preferredDocumentContentSize;

}

@property (assign,nonatomic,__weak) id<_SFAdaptivePreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * linkActions;                                                     //@synthesize linkActions=_linkActions - In the implementation block
@property (nonatomic,retain) _WKActivatedElementInfo * activatedElementInfo;                            //@synthesize activatedElementInfo=_activatedElementInfo - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController; 
@property (nonatomic,readonly) BOOL showingLinkPreview; 
@property (assign,nonatomic) CGSize preferredDocumentContentSize;                                       //@synthesize preferredDocumentContentSize=_preferredDocumentContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(id<_SFAdaptivePreviewViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFAdaptivePreviewViewControllerDelegate>)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_updatePreferredContentSize;
-(UIViewController *)contentViewController;
-(BOOL)_allowsUserInteractionWhenPreviewedInContextMenu;
-(void)setLinkPreviewEnabled:(BOOL)arg1 ;
-(void)_setUpLinkPreviewViewControllerIfNeeded;
-(void)_setUpTextPreviewViewControllerIfNeeded;
-(void)_addViewFromViewController:(id)arg1 ;
-(void)_removeViewController:(id)arg1 ;
-(void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(BOOL)arg2 ;
-(void)linkPreviewHeaderBoundsDidChange:(id)arg1 ;
-(BOOL)showingLinkPreview;
-(void)setPreferredDocumentContentSize:(CGSize)arg1 ;
-(NSArray *)linkActions;
-(void)setLinkActions:(NSArray *)arg1 ;
-(_WKActivatedElementInfo *)activatedElementInfo;
-(void)setActivatedElementInfo:(_WKActivatedElementInfo *)arg1 ;
-(CGSize)preferredDocumentContentSize;
@end

