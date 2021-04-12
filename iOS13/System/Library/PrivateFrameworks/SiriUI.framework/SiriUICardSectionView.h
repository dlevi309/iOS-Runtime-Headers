/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CRKCardSectionView.h>

@protocol CRKComposableView, SiriUIReusableView;
@class NSString, UIView;

@interface SiriUICardSectionView : UIView <CRKCardSectionView> {

	UIView*<CRKComposableView> _composedSuperview;
	NSString* _cardSectionViewIdentifier;
	UIView*<SiriUIReusableView> _headerView;
	UIView* _contentView;
	UIView*<SiriUIReusableView> _footerView;
	double _headerViewHeight;
	double _footerViewHeight;
	CGSize _contentSize;

}

@property (nonatomic,retain) UIView*<SiriUIReusableView> headerView;                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView*<SiriUIReusableView> footerView;                           //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) double headerViewHeight;                                          //@synthesize headerViewHeight=_headerViewHeight - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                               //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) double footerViewHeight;                                          //@synthesize footerViewHeight=_footerViewHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * cardSectionViewIdentifier;                               //@synthesize cardSectionViewIdentifier=_cardSectionViewIdentifier - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CRKComposableView> composedSuperview;              //@synthesize composedSuperview=_composedSuperview - In the implementation block
+(CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(CGSize)arg2 ;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityIdentifier;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView*<SiriUIReusableView>)headerView;
-(void)setHeaderView:(UIView*<SiriUIReusableView>)arg1 ;
-(UIView*<SiriUIReusableView>)footerView;
-(void)setFooterView:(UIView*<SiriUIReusableView>)arg1 ;
-(double)headerViewHeight;
-(void)removeFromComposedSuperview;
-(NSString *)cardSectionViewIdentifier;
-(void)setCardSectionViewIdentifier:(NSString *)arg1 ;
-(UIView*<CRKComposableView>)composedSuperview;
-(void)setComposedSuperview:(UIView*<CRKComposableView>)arg1 ;
-(void)setHeaderViewHeight:(double)arg1 ;
-(void)setFooterViewHeight:(double)arg1 ;
-(double)footerViewHeight;
@end

