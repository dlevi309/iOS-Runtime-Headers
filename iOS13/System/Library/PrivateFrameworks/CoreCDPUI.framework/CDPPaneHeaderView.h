/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <UIKitCore/UIView.h>

@class BFFPaneHeaderView, UILabel, UIView;

@interface CDPPaneHeaderView : UIView {

	BFFPaneHeaderView* _header;

}

@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * subLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * _header; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(UIView *)_header;
-(void)setTitleText:(id)arg1 ;
-(UILabel *)subLabel;
-(void)makeAllTheTextFits;
-(double)innerHeaderMaxY;
@end

