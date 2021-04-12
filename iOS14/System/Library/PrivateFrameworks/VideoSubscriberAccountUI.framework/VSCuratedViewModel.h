/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VSViewModel.h>
#import <libobjc.A.dylib/VSLogoImageViewModel.h>

@class NSItemProvider, UIImage, NSString, VSOptional;

@interface VSCuratedViewModel : VSViewModel <VSLogoImageViewModel> {

	BOOL _beginValidationButtonEnabled;
	BOOL _showFooter;
	NSItemProvider* _logoProvider;
	UIImage* _logo;
	NSString* _logoAccessibilityLabel;
	NSString* _beginValidationButtonTitle;
	VSOptional* _identityProviderDisplayName;
	NSString* _message;
	NSString* _notice;
	NSString* _footerText;

}

@property (assign,getter=isBeginValidationButtonEnabled,nonatomic) BOOL beginValidationButtonEnabled;              //@synthesize beginValidationButtonEnabled=_beginValidationButtonEnabled - In the implementation block
@property (nonatomic,copy) NSString * beginValidationButtonTitle;                                                  //@synthesize beginValidationButtonTitle=_beginValidationButtonTitle - In the implementation block
@property (nonatomic,retain) VSOptional * identityProviderDisplayName;                                             //@synthesize identityProviderDisplayName=_identityProviderDisplayName - In the implementation block
@property (nonatomic,copy) NSString * message;                                                                     //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * notice;                                                                      //@synthesize notice=_notice - In the implementation block
@property (assign,nonatomic) BOOL showFooter;                                                                      //@synthesize showFooter=_showFooter - In the implementation block
@property (nonatomic,copy) NSString * footerText;                                                                  //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,retain) NSItemProvider * logoProvider;                                                        //@synthesize logoProvider=_logoProvider - In the implementation block
@property (nonatomic,retain) UIImage * logo;                                                                       //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy) NSString * logoAccessibilityLabel;                                                      //@synthesize logoAccessibilityLabel=_logoAccessibilityLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(UIImage *)logo;
-(VSOptional *)identityProviderDisplayName;
-(id)init;
-(void)setFooterText:(NSString *)arg1 ;
-(NSString *)notice;
-(BOOL)showFooter;
-(void)setLogo:(UIImage *)arg1 ;
-(NSString *)footerText;
-(void)setShowFooter:(BOOL)arg1 ;
-(void)setNotice:(NSString *)arg1 ;
-(void)setLogoProvider:(NSItemProvider *)arg1 ;
-(void)configureWithRequest:(id)arg1 ;
-(NSItemProvider *)logoProvider;
-(NSString *)logoAccessibilityLabel;
-(void)setLogoAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)beginValidationButtonTitle;
-(BOOL)isBeginValidationButtonEnabled;
-(void)setBeginValidationButtonTitle:(NSString *)arg1 ;
-(void)setBeginValidationButtonEnabled:(BOOL)arg1 ;
-(void)setIdentityProviderDisplayName:(VSOptional *)arg1 ;
@end

