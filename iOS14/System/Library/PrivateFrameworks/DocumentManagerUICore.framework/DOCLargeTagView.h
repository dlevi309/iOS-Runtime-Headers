/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(DOCTagCheckmarkView *)checkmarkView;
-(void)layoutSubviews;
-(void)updateBackgroundColor;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(DOCTagDotView *)tagDotView;
-(UILabel *)tagNameLabel;
-(void)updateBorder;
-(DOCTag *)tagValue;
-(void)setTagValue:(DOCTag *)arg1 ;
@end

