/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@class NSAttributedString, UITextView, UIView, NSString, HUActivityLoadingView, UIBarButtonItem, NAFuture;

@interface HUTextViewController : UIViewController <HUPreloadableViewController> {

	BOOL _showsShareButton;
	BOOL _showProgressIndicatorView;
	NSAttributedString* _textContent;
	UITextView* _textView;
	UIView* _curtainView;
	NSString* _titleText;
	HUActivityLoadingView* _loadingView;
	UIBarButtonItem* _shareButton;
	NAFuture* _loadingFuture;

}

@property (nonatomic,readonly) UITextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIView * curtainView;                             //@synthesize curtainView=_curtainView - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) HUActivityLoadingView * loadingView;              //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) BOOL showProgressIndicatorView;                     //@synthesize showProgressIndicatorView=_showProgressIndicatorView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * shareButton;                    //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) NAFuture * loadingFuture;                           //@synthesize loadingFuture=_loadingFuture - In the implementation block
@property (nonatomic,copy) NSAttributedString * textContent;                     //@synthesize textContent=_textContent - In the implementation block
@property (assign,nonatomic) BOOL showsShareButton;                              //@synthesize showsShareButton=_showsShareButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)textView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(NSAttributedString *)textContent;
-(UIBarButtonItem *)shareButton;
-(void)viewDidLoad;
-(HUActivityLoadingView *)loadingView;
-(void)setTextContent:(NSAttributedString *)arg1 ;
-(id)_textContentWithDefaultAttributes;
-(UIView *)curtainView;
-(BOOL)showsShareButton;
-(void)_shareLog:(id)arg1 ;
-(void)_fulfillProgressIndicatorState:(BOOL)arg1 ;
-(NAFuture *)loadingFuture;
-(void)setShowProgressIndicatorView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowProgressIndicatorView:(BOOL)arg1 ;
-(void)setLoadingFuture:(NAFuture *)arg1 ;
-(BOOL)showProgressIndicatorView;
-(void)loadTextFromFuture:(id)arg1 textTitle:(id)arg2 ;
-(void)setShowsShareButton:(BOOL)arg1 ;
@end

