/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchResultsTitleHeaderCell.h>

@class UISegmentedControl;

@interface CKPhotosSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell {

	UISegmentedControl* _control;
	double _controlTopPadding;
	double _controlBottomPadding;

}

@property (nonatomic,retain) UISegmentedControl * control;              //@synthesize control=_control - In the implementation block
@property (assign,nonatomic) double controlTopPadding;                  //@synthesize controlTopPadding=_controlTopPadding - In the implementation block
@property (assign,nonatomic) double controlBottomPadding;               //@synthesize controlBottomPadding=_controlBottomPadding - In the implementation block
+(id)supplementaryViewType;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(UISegmentedControl *)control;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)updateSegmentedControlToFitWidth:(double)arg1 ;
-(void)layoutSubviews;
-(double)controlTopPadding;
-(void)setControlTopPadding:(double)arg1 ;
-(void)setControlBottomPadding:(double)arg1 ;
-(double)controlBottomPadding;
-(void)setControl:(UISegmentedControl *)arg1 ;
-(void)_controlIndexDidChange:(id)arg1 ;
@end

