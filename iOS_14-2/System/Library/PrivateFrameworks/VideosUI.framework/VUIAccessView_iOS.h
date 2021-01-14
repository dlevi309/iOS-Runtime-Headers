/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBody:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(id)seeAllButton;
-(void)dealloc;
-(id)allowButton;
-(id)_buildCarousel;
-(id)_buildLogoStack;
-(id)_imageViewForIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(id)initWithApps:(id)arg1 ;
-(id)nackButton;
-(id)bodyScroll;
-(void)showNackScreen;
-(UIView *)privacyView;
-(void)setPrivacyView:(UIView *)arg1 ;
@end

