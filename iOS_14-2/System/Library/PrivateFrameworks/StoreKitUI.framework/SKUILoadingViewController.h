/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>

@class SKUIClientContext, NSString, UIColor, SKUIColorScheme, SKUILoadingView;

@interface SKUILoadingViewController : UIViewController {

	SKUIClientContext* _clientContext;
	NSString* _loadingText;
	UIColor* _backgroundColor;
	SKUIColorScheme* _spinnerColorScheme;
	SKUILoadingView* _loadingView;

}

@property (nonatomic,retain) SKUILoadingView * loadingView;                     //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;               //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSString * loadingText;                            //@synthesize loadingText=_loadingText - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * spinnerColorScheme;              //@synthesize spinnerColorScheme=_spinnerColorScheme - In the implementation block
-(SKUIClientContext *)clientContext;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)viewDidLoad;
-(SKUILoadingView *)loadingView;
-(void)setLoadingView:(SKUILoadingView *)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(NSString *)loadingText;
-(void)setLoadingText:(NSString *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_initializeLoadingView;
-(SKUIColorScheme *)spinnerColorScheme;
-(void)setSpinnerColorScheme:(SKUIColorScheme *)arg1 ;
@end

