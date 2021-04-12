/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol TUICandidateViewStyle;
@class NSString, UILabel;

@interface TUICandidateGroupHeader : UICollectionReusableView {

	NSString* _text;
	long long _alignment;
	id<TUICandidateViewStyle> _style;
	double _rowHeight;
	UILabel* _textLabel;
	CGRect _visibleBounds;
	CGRect _virtualLabelContainerFrame;

}

@property (nonatomic,retain) UILabel * textLabel;                            //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) CGRect virtualLabelContainerFrame;              //@synthesize virtualLabelContainerFrame=_virtualLabelContainerFrame - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long alignment;                            //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                           //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (assign,nonatomic) double rowHeight;                               //@synthesize rowHeight=_rowHeight - In the implementation block
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)visibleBounds;
-(UILabel *)textLabel;
-(double)rowHeight;
-(void)setRowHeight:(double)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(void)updateGroupHeaderLabelPosition;
-(void)setVirtualLabelContainerFrame:(CGRect)arg1 ;
-(CGRect)virtualLabelContainerFrame;
@end

