/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIButton.h>

@class SBHomeScreenMaterialView, UIView;

@interface SBHomeScreenButton : UIButton {

	SBHomeScreenMaterialView* _materialView;

}

@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,readonly) SBHomeScreenMaterialView * materialView;              //@synthesize materialView=_materialView - In the implementation block
+(UIEdgeInsets)backgroundInsets;
+(id)defaultContentImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(SBHomeScreenMaterialView *)materialView;
-(id)initWithFrame:(CGRect)arg1 backgroundView:(id)arg2 ;
@end

