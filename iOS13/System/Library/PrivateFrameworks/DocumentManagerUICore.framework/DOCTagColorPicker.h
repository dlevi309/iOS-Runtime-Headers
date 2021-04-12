/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIGestureRecognizer, NSArray, NSNumber, UIStackView;

@interface DOCTagColorPicker : UIView {

	long long _selectedTagColor;
	UIGestureRecognizer* _changeColorTapGestureRecognizer;
	UIGestureRecognizer* _changeColorPanGestureRecognizer;
	NSArray* _dotViews;
	NSNumber* _previousSelectedTagColor;
	UIStackView* _stackView;

}

@property (nonatomic,readonly) NSArray * dotViews;                                                 //@synthesize dotViews=_dotViews - In the implementation block
@property (nonatomic,retain) NSNumber * previousSelectedTagColor;                                  //@synthesize previousSelectedTagColor=_previousSelectedTagColor - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                              //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) long long selectedTagColor;                                           //@synthesize selectedTagColor=_selectedTagColor - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * changeColorTapGestureRecognizer;              //@synthesize changeColorTapGestureRecognizer=_changeColorTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * changeColorPanGestureRecognizer;              //@synthesize changeColorPanGestureRecognizer=_changeColorPanGestureRecognizer - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(long long)selectedTagColor;
-(UIGestureRecognizer *)changeColorPanGestureRecognizer;
-(void)handleChangeColor:(id)arg1 ;
-(void)setSelectedTagColor:(long long)arg1 ;
-(UIGestureRecognizer *)changeColorTapGestureRecognizer;
-(id)selectedTagDotView;
-(NSArray *)dotViews;
-(void)setColorDotSpacing;
-(void)setPreviousSelectedTagColor:(NSNumber *)arg1 ;
-(void)setSelectedTagColorForLocation:(CGPoint)arg1 ;
-(NSNumber *)previousSelectedTagColor;
@end

