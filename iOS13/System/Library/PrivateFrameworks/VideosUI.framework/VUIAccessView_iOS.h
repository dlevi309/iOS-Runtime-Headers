/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVCarouselViewDataSource.h>

@class NSArray, UILayoutGuide, UIStackView, UILabel, UIScrollView, UIButton, _TVCarouselView, UIView, NSString;

@interface VUIAccessView_iOS : UIView <TVCarouselViewDataSource> {

	NSArray* _apps;
	UILayoutGuide* _titlePlacementGuide;
	UIStackView* _scrollStack;
	UILabel* _titleLabel;
	UIScrollView* _bodyScroll;
	UILabel* _bodyLabel;
	UIStackView* _logoStack;
	UIStackView* _bottomStack;
	UIButton* _allowButton;
	UIButton* _disallowButton;
	UIButton* _nackButton;
	UILabel* _privacyLabel;
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBody:(id)arg1 ;
-(void)setFooter:(id)arg1 ;
-(UIView *)privacyView;
-(void)setPrivacyView:(UIView *)arg1 ;
-(id)allowButton;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(id)_buildCarousel;
-(id)_buildLogoStack;
-(id)_imageViewForIndex:(unsigned long long)arg1 ;
-(id)initWithApps:(id)arg1 ;
-(id)disallowButton;
-(id)seeAllButton;
-(id)nackButton;
-(id)bodyScroll;
-(void)showNackScreen;
@end

