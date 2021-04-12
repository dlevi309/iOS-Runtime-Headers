/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(SKUIClientContext *)clientContext;
-(id)initWithClientContext:(id)arg1 ;
-(void)_initializeLoadingView;
-(void)setLoadingView:(SKUILoadingView *)arg1 ;
-(NSString *)loadingText;
-(SKUILoadingView *)loadingView;
-(void)setLoadingText:(NSString *)arg1 ;
-(SKUIColorScheme *)spinnerColorScheme;
-(void)setSpinnerColorScheme:(SKUIColorScheme *)arg1 ;
@end

