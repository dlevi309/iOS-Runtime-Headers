/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <CardKit/CardKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CRKCardSectionView.h>

@protocol CRKComposableView;
@class NSString, UIView;

@interface CRKContainerCardSectionView : UIView <CRKCardSectionView> {

	UIView* _userInputEventInterceptView;
	UIView*<CRKComposableView> _composedSuperview;
	NSString* _cardSectionViewIdentifier;
	UIView* _contentView;
	CGSize _contentSize;

}

@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                               //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) BOOL interceptsTouches; 
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)removeFromComposedSuperview;
-(NSString *)cardSectionViewIdentifier;
-(void)setCardSectionViewIdentifier:(NSString *)arg1 ;
-(UIView*<CRKComposableView>)composedSuperview;
-(void)setComposedSuperview:(UIView*<CRKComposableView>)arg1 ;
-(void)setInterceptsTouches:(BOOL)arg1 ;
-(BOOL)interceptsTouches;
@end

