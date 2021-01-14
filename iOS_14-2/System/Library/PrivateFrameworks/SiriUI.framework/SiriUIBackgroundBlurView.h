/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MTMaterialView;

@interface SiriUIBackgroundBlurView : UIView {

	MTMaterialView* _materialView;

}

@property (nonatomic,retain) MTMaterialView * materialView;              //@synthesize materialView=_materialView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)layoutSubviews;
-(MTMaterialView *)materialView;
-(void)setMaterialView:(MTMaterialView *)arg1 ;
@end

