/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class GKUIContentUnavailableView, UIActivityIndicatorView, UIStackView, NSString;

@interface GKNoContentView : UIView {

	BOOL _loading;
	/*^block*/id _buttonAction;
	GKUIContentUnavailableView* _contentUnavailableView;
	UIActivityIndicatorView* _loadingIndicatorView;
	UIStackView* _stackView;

}

@property (nonatomic,retain) GKUIContentUnavailableView * contentUnavailableView;              //@synthesize contentUnavailableView=_contentUnavailableView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicatorView;                   //@synthesize loadingIndicatorView=_loadingIndicatorView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * buttonTitle; 
@property (nonatomic,copy) id buttonAction;                                                    //@synthesize buttonAction=_buttonAction - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                    //@synthesize loading=_loading - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(NSString *)message;
-(void)setLoading:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isLoading;
-(void)setTitle:(NSString *)arg1 ;
-(UIStackView *)stackView;
-(UIActivityIndicatorView *)loadingIndicatorView;
-(GKUIContentUnavailableView *)contentUnavailableView;
-(void)setContentUnavailableView:(GKUIContentUnavailableView *)arg1 ;
-(void)setLoadingIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(id)buttonAction;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(NSString *)title;
-(void)setButtonAction:(id)arg1 ;
@end

