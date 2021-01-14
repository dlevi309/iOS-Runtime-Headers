/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)_header;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(UILabel *)detailTextLabel;
-(UILabel *)subLabel;
-(UILabel *)textLabel;
-(void)makeAllTheTextFits;
-(double)innerHeaderMaxY;
@end

