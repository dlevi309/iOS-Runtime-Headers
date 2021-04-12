/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

@class NSString;


@protocol CRKCardSectionView <NSObject>
@property (nonatomic,copy) NSString * cardSectionViewIdentifier; 
@property (assign,nonatomic,__weak) UIView*<CRKComposableView> composedSuperview; 
@required
+(CGSize*)sizeThatFitsCardSection:(id)arg1 boundingSize:(CGSize)arg2;
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(void)removeFromComposedSuperview;
-(NSString *)cardSectionViewIdentifier;
-(void)setCardSectionViewIdentifier:(id)arg1;
-(UIView*<CRKComposableView>)composedSuperview;
-(void)setComposedSuperview:(id)arg1;

@end

