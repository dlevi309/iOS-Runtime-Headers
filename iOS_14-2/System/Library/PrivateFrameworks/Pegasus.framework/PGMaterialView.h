/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/PGLayoutContainerView.h>

@class UIView, PGCABackdropLayerView, UIColor;

@interface PGMaterialView : PGLayoutContainerView {

	UIView* _contentView;
	PGCABackdropLayerView* _backdropLayerView;
	UIColor* _backgroundColor;

}

@property (nonatomic,readonly) UIView * contentView; 
@property (assign,getter=isBackdropHidden,nonatomic) BOOL backdropHidden; 
-(BOOL)PG_preferredVisibilityForView:(id)arg1 ;
-(double)_continuousCornerRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_cornerRadius;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)layoutSubviews;
-(BOOL)isBackdropHidden;
-(void)addSubview:(id)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(void)setBackdropHidden:(BOOL)arg1 ;
@end

