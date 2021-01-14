/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)promptLabel;
-(BOOL)useMini;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setBarMetrics:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)barMetrics;
-(BOOL)_isKnownUISearchBarComponentContainer;
-(void)setPromptLabel:(UILabel *)arg1 ;
@end

