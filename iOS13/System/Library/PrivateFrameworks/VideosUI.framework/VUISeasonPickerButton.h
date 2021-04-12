/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol VUISeasonPickerButtonDelegate;
@class NSArray, VUILabel, _TVImageView, VUITextLayout;

@interface VUISeasonPickerButton : UIControl {

	NSArray* _seasonTitles;
	id<VUISeasonPickerButtonDelegate> _delegate;
	unsigned long long _currentIndex;
	VUILabel* _currentLabel;
	VUILabel* _altLabel;
	_TVImageView* _chevronDownImageView;
	VUITextLayout* _buttonTextLayout;

}

@property (assign,nonatomic) unsigned long long currentIndex;                                //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) VUILabel * currentLabel;                                        //@synthesize currentLabel=_currentLabel - In the implementation block
@property (nonatomic,retain) VUILabel * altLabel;                                            //@synthesize altLabel=_altLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * chevronDownImageView;                            //@synthesize chevronDownImageView=_chevronDownImageView - In the implementation block
@property (nonatomic,retain) VUITextLayout * buttonTextLayout;                               //@synthesize buttonTextLayout=_buttonTextLayout - In the implementation block
@property (nonatomic,retain) NSArray * seasonTitles;                                         //@synthesize seasonTitles=_seasonTitles - In the implementation block
@property (assign,nonatomic,__weak) id<VUISeasonPickerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)configureWithExistingView:(id)arg1 ;
-(id)init;
-(id<VUISeasonPickerButtonDelegate>)delegate;
-(void)setDelegate:(id<VUISeasonPickerButtonDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)currentIndex;
-(void)_buttonTapped:(id)arg1 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(VUILabel *)currentLabel;
-(void)setCurrentLabel:(VUILabel *)arg1 ;
-(VUILabel *)altLabel;
-(void)setAltLabel:(VUILabel *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(NSArray *)seasonTitles;
-(void)_updateLabelsWithSeasonTitles:(id)arg1 ;
-(void)setChevronDownImageView:(_TVImageView *)arg1 ;
-(void)setSeasonTitles:(NSArray *)arg1 ;
-(void)switchToIndex:(unsigned long long)arg1 ;
-(_TVImageView *)chevronDownImageView;
-(VUITextLayout *)buttonTextLayout;
-(void)setButtonTextLayout:(VUITextLayout *)arg1 ;
@end

