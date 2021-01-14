/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PKCredentialPairingExplanationHeaderView : UIView {

	UIImageView* _imageView;
	BOOL _useCompactLayout;

}

@property (assign,nonatomic) BOOL useCompactLayout;              //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)pairingImage;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(BOOL)useCompactLayout;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

