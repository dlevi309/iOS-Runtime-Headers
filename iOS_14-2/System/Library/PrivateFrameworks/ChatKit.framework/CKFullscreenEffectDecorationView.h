/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UICollectionReusableView.h>

@protocol CKFullscreenEffectView;
@class UIView;

@interface CKFullscreenEffectDecorationView : UICollectionReusableView {

	UIView*<CKFullscreenEffectView> _effectView;

}

@property (assign,nonatomic,__weak) UIView*<CKFullscreenEffectView> effectView;              //@synthesize effectView=_effectView - In the implementation block
+(id)decorationViewKind;
+(id)reuseIdentifier;
-(UIView*<CKFullscreenEffectView>)effectView;
-(void)prepareForReuse;
-(void)setEffectView:(UIView*<CKFullscreenEffectView>)arg1 ;
-(void)setupForEffectView:(id)arg1 ;
-(void)tearDownEffectView;
@end

