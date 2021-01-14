/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView;

@interface STSRootView : UIView {

	UIVisualEffectView* _visualEffectView;
	UIView* _contentView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)_setupView;
-(void)setContentView:(UIView *)arg1 ;
-(void)awakeFromNib;
-(UIView *)contentView;
@end

