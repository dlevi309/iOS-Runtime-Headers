/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

@class UIViewController, NSString;


@protocol WBUFormAutoFillWebView <NSObject>
@property (nonatomic,readonly) UIViewController * webui_presentingViewController; 
@property (nonatomic,readonly) BOOL webui_privateBrowsingEnabled; 
@property (setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:,nonatomic,copy) NSString * webui_lastGeneratedPasswordForCurrentBackForwardItem; 
@optional
-(BOOL)webui_canPromptForAccountSecurityRecommendation;

@required
-(void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
-(id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
-(void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
-(void)webui_setLastGeneratedPasswordForCurrentBackForwardItem:(id)arg1;
-(UIViewController *)webui_presentingViewController;
-(BOOL)webui_privateBrowsingEnabled;
-(NSString *)webui_lastGeneratedPasswordForCurrentBackForwardItem;
-(/*^block*/id)webui_preventNavigationDuringAutoFillPrompt;

@end

