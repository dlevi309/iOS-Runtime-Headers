/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIColor, NSArray;

@interface UITableViewCellSelectedBackground : UIView {

	UIVisualEffectView* _selectionEffectsView;
	BOOL _multiselect;
	long long _selectionStyle;
	UIColor* _multiselectBackgroundColor;
	UIColor* _selectionTintColor;
	UIColor* _noneStyleBackgroundColor;

}

@property (assign,nonatomic) long long selectionStyle;                           //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,retain) UIColor * multiselectBackgroundColor;               //@synthesize multiselectBackgroundColor=_multiselectBackgroundColor - In the implementation block
@property (assign,getter=isMultiselect,nonatomic) BOOL multiselect;              //@synthesize multiselect=_multiselect - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor;                       //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
@property (nonatomic,copy) NSArray * selectionEffects; 
@property (nonatomic,retain) UIColor * noneStyleBackgroundColor;                 //@synthesize noneStyleBackgroundColor=_noneStyleBackgroundColor - In the implementation block
-(void)tintColorDidChange;
-(void)setMultiselect:(BOOL)arg1 ;
-(void)setSelectionEffects:(NSArray *)arg1 ;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(UIColor *)noneStyleBackgroundColor;
-(NSArray *)selectionEffects;
-(UIColor *)multiselectBackgroundColor;
-(void)updateBackgroundColor;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setNoneStyleBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
-(BOOL)isMultiselect;
-(void)setMultiselectBackgroundColor:(UIColor *)arg1 ;
-(long long)selectionStyle;
@end

