/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIViewController.h>

@protocol GEOTextItemContainer;
@class NSArray, UIStackView;

@interface MKTextItemContainerViewController : UIViewController {

	id<GEOTextItemContainer> _textItemContainer;
	NSArray* _textItemViews;
	UIStackView* _stackView;
	double _maxWidth;

}

@property (nonatomic,readonly) id<GEOTextItemContainer> textItemContainer;              //@synthesize textItemContainer=_textItemContainer - In the implementation block
@property (nonatomic,copy) NSArray * textItemViews;                                     //@synthesize textItemViews=_textItemViews - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                   //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) double maxWidth;                                           //@synthesize maxWidth=_maxWidth - In the implementation block
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(UIStackView *)stackView;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)setStackView:(UIStackView *)arg1 ;
-(id<GEOTextItemContainer>)textItemContainer;
-(id)initWithTextItemContainer:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)infoCardThemeChanged;
-(void)updateUIForTheme:(id)arg1 ;
-(double)currentMaxWidth;
-(void)setupSubviewsWithMaxWidth:(double)arg1 ;
-(void)setTextItemViews:(NSArray *)arg1 ;
-(NSArray *)textItemViews;
@end

