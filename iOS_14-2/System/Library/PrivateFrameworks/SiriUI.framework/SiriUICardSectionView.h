/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * cardSectionViewIdentifier;                               //@synthesize cardSectionViewIdentifier=_cardSectionViewIdentifier - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CRKComposableView> composedSuperview;              //@synthesize composedSuperview=_composedSuperview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(CGSize)arg2 ;
-(UIView*<SiriUIReusableView>)footerView;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setHeaderView:(UIView*<SiriUIReusableView>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)contentSize;
-(double)headerViewHeight;
-(void)layoutSubviews;
-(void)setHeaderViewHeight:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setFooterView:(UIView*<SiriUIReusableView>)arg1 ;
-(UIView*<SiriUIReusableView>)headerView;
-(id)accessibilityIdentifier;
-(UIView *)contentView;
-(void)setFooterViewHeight:(double)arg1 ;
-(UIView*<CRKComposableView>)composedSuperview;
-(void)removeFromComposedSuperview;
-(NSString *)cardSectionViewIdentifier;
-(void)setCardSectionViewIdentifier:(NSString *)arg1 ;
-(void)setComposedSuperview:(UIView*<CRKComposableView>)arg1 ;
-(double)footerViewHeight;
@end

