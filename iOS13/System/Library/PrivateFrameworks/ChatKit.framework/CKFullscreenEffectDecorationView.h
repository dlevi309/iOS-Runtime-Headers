/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UICollectionReusableView.h>

@protocol CKFullscreenEffectView;
@class UIView;

@interface CKFullscreenEffectDecorationView : UICollectionReusableView {

	UIView*<CKFullscreenEffectView> _effectView;

}

@property (assign,nonatomic,__weak) UIView*<CKFullscreenEffectView> effectView;              //@synthesize effectView=_effectView - In the implementation block
+(id)reuseIdentifier;
+(id)decorationViewKind;
-(void)prepareForReuse;
-(UIView*<CKFullscreenEffectView>)effectView;
-(void)setEffectView:(UIView*<CKFullscreenEffectView>)arg1 ;
-(void)setupForEffectView:(id)arg1 ;
-(void)tearDownEffectView;
@end

