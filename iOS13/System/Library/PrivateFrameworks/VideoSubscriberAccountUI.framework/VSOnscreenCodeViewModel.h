/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VSViewModel.h>
#import <libobjc.A.dylib/VSLogoImageViewModel.h>

@class NSItemProvider, UIImage, NSString, NSURL, VSMessageQueue;

@interface VSOnscreenCodeViewModel : VSViewModel <VSLogoImageViewModel> {

	BOOL _shouldShowRegenerateCodeButton;
	NSItemProvider* _logoProvider;
	UIImage* _logo;
	NSString* _logoAccessibilityLabel;
	NSString* _webPagePreamble;
	NSURL* _webPageURL;
	NSString* _webPagePostamble;
	NSString* _onscreenCode;
	NSString* _regenerateCodeButtonTitle;
	VSMessageQueue* _regenerateCodeEventQueue;
	NSString* _footerText;

}

@property (nonatomic,copy) NSString * webPagePreamble;                               //@synthesize webPagePreamble=_webPagePreamble - In the implementation block
@property (nonatomic,copy) NSURL * webPageURL;                                       //@synthesize webPageURL=_webPageURL - In the implementation block
@property (nonatomic,copy) NSString * webPagePostamble;                              //@synthesize webPagePostamble=_webPagePostamble - In the implementation block
@property (nonatomic,copy) NSString * onscreenCode;                                  //@synthesize onscreenCode=_onscreenCode - In the implementation block
@property (assign,nonatomic) BOOL shouldShowRegenerateCodeButton;                    //@synthesize shouldShowRegenerateCodeButton=_shouldShowRegenerateCodeButton - In the implementation block
@property (nonatomic,copy) NSString * regenerateCodeButtonTitle;                     //@synthesize regenerateCodeButtonTitle=_regenerateCodeButtonTitle - In the implementation block
@property (nonatomic,retain) VSMessageQueue * regenerateCodeEventQueue;              //@synthesize regenerateCodeEventQueue=_regenerateCodeEventQueue - In the implementation block
@property (nonatomic,copy) NSString * footerText;                                    //@synthesize footerText=_footerText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSItemProvider * logoProvider;                          //@synthesize logoProvider=_logoProvider - In the implementation block
@property (nonatomic,retain) UIImage * logo;                                         //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy) NSString * logoAccessibilityLabel;                        //@synthesize logoAccessibilityLabel=_logoAccessibilityLabel - In the implementation block
-(id)init;
-(NSURL *)webPageURL;
-(void)setWebPageURL:(NSURL *)arg1 ;
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
-(NSString *)footerText;
-(void)setFooterText:(NSString *)arg1 ;
-(NSItemProvider *)logoProvider;
-(void)setLogoProvider:(NSItemProvider *)arg1 ;
-(void)setOnscreenCode:(NSString *)arg1 ;
-(void)setRegenerateCodeButtonTitle:(NSString *)arg1 ;
-(void)setShouldShowRegenerateCodeButton:(BOOL)arg1 ;
-(VSMessageQueue *)regenerateCodeEventQueue;
-(void)configureWithRequest:(id)arg1 ;
-(void)setWebPagePreamble:(NSString *)arg1 ;
-(void)setWebPagePostamble:(NSString *)arg1 ;
-(NSString *)logoAccessibilityLabel;
-(void)setLogoAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)webPagePreamble;
-(NSString *)webPagePostamble;
-(NSString *)onscreenCode;
-(BOOL)shouldShowRegenerateCodeButton;
-(NSString *)regenerateCodeButtonTitle;
-(void)setRegenerateCodeEventQueue:(VSMessageQueue *)arg1 ;
@end

