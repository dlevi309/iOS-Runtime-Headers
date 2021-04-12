/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _UISearchBarPromptContainerView : UIView {

	long long _barMetrics;
	UILabel* _promptLabel;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) long long barMetrics;                   //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) UILabel * promptLabel;                  //@synthesize promptLabel=_promptLabel - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(long long)barMetrics;
-(void)setBarMetrics:(long long)arg1 ;
-(UILabel *)promptLabel;
-(UIEdgeInsets)contentInset;
-(BOOL)useMini;
-(void)setPromptLabel:(UILabel *)arg1 ;
-(BOOL)_isKnownUISearchBarComponentContainer;
@end

