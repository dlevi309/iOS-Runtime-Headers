/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class DOCTag, DOCTagDotView, UILabel, DOCTagCheckmarkView;

@interface DOCLargeTagView : UIView {

	DOCTag* _tagValue;
	long long _style;
	DOCTagDotView* _tagDotView;
	UILabel* _tagNameLabel;
	DOCTagCheckmarkView* _checkmarkView;

}

@property (nonatomic,readonly) DOCTagDotView * tagDotView;                       //@synthesize tagDotView=_tagDotView - In the implementation block
@property (nonatomic,readonly) UILabel * tagNameLabel;                           //@synthesize tagNameLabel=_tagNameLabel - In the implementation block
@property (nonatomic,readonly) DOCTagCheckmarkView * checkmarkView;              //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) DOCTag * tagValue;                                  //@synthesize tagValue=_tagValue - In the implementation block
@property (assign,nonatomic) long long style;                                    //@synthesize style=_style - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateBackgroundColor;
-(DOCTagCheckmarkView *)checkmarkView;
-(void)setTagValue:(DOCTag *)arg1 ;
-(DOCTagDotView *)tagDotView;
-(UILabel *)tagNameLabel;
-(void)updateBorder;
-(DOCTag *)tagValue;
@end

