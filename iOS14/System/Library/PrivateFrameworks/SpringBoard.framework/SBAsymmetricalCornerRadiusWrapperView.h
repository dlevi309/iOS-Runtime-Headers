/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration;              //@synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners;                                     //@synthesize maskedCorners=_maskedCorners - In the implementation block
-(void)addContentView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateCornerRadius;
-(unsigned long long)maskedCorners;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)bringContentViewToFront:(id)arg1 ;
-(void)sendContentViewToBack:(id)arg1 ;
-(void)_updateMaskedCorners;
@end

