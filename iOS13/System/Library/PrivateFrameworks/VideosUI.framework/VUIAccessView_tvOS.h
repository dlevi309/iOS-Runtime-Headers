/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVCarouselViewDataSource.h>
#import <libobjc.A.dylib/TVCarouselViewDelegate.h>

@class NSArray, UILayoutGuide, UIStackView, UILabel, UIButton, _TVCarouselView, UIView, NSString;

@interface VUIAccessView_tvOS : UIView <TVCarouselViewDataSource, TVCarouselViewDelegate> {

	NSArray* _apps;
	UILayoutGuide* _contentGuide;
	UIStackView* _contentStack;
	UILabel* _titleLabel;
	UIStackView* _logoStack;
	UILabel* _bodyLabel;
	UIStackView* _seeAllButtonStack;
	UIStackView* _buttonStack;
	UIButton* _allowButton;
	UIButton* _disallowButton;
	UIButton* _nackButton;
	UIButton* _seeAllButton;
	_TVCarouselView* _carouselView;
	BOOL _didLayout;
	UIView* _privacyView;

}

@property (nonatomic,retain) UIView * privacyView;                  //@synthesize privacyView=_privacyView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)iconSize;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBody:(id)arg1 ;
-(UIView *)privacyView;
-(void)setPrivacyView:(UIView *)arg1 ;
-(id)allowButton;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(id)_buttonWithTitleForTV:(id)arg1 textStyle:(id)arg2 ;
-(id)_buildCarousel;
-(id)_buildLogoStack;
-(id)_imageViewForIndex:(unsigned long long)arg1 ;
-(id)initWithApps:(id)arg1 ;
-(id)disallowButton;
-(id)seeAllButton;
-(id)nackButton;
-(id)bodyScroll;
-(void)showNackScreen;
-(id)_buildButtonStack;
-(id)_buildSeeAllButtonStack;
@end

