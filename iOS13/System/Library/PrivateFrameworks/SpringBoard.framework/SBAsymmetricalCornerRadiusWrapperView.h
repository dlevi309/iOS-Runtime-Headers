/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class BSCornerRadiusConfiguration, UIView;

@interface SBAsymmetricalCornerRadiusWrapperView : UIView {

	BSCornerRadiusConfiguration* _cornerRadiusConfiguration;
	unsigned long long _maskedCorners;
	UIView* _trailingCornersMaskingView;

}

@property (nonatomic,retain) UIView * trailingCornersMaskingView;                                  //@synthesize trailingCornersMaskingView=_trailingCornersMaskingView - In the implementation block
@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration;              //@synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners;                                     //@synthesize maskedCorners=_maskedCorners - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(unsigned long long)maskedCorners;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(void)_updateCornerRadius;
-(void)addContentView:(id)arg1 ;
-(void)bringContentViewToFront:(id)arg1 ;
-(void)sendContentViewToBack:(id)arg1 ;
-(void)_updateMaskedCorners;
-(UIView *)trailingCornersMaskingView;
-(void)setTrailingCornersMaskingView:(UIView *)arg1 ;
@end

