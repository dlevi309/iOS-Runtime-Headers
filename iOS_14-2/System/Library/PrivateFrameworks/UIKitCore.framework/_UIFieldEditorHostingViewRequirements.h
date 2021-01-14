/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView;


@protocol _UIFieldEditorHostingViewRequirements <UITraitEnvironment,UITextInput>
@property (nonatomic,readonly) UIView * _contentView; 
@property (nonatomic,readonly) UIView * _backgroundView; 
@property (nonatomic,readonly) BOOL _fieldEditorAttached; 
@property (nonatomic,readonly) BOOL _hasContent; 
@property (nonatomic,readonly) long long _blurEffectStyleForAppearance; 
@required
-(CGRect*)placeholderRectForBounds:(CGRect)arg1;
-(BOOL)_hasContent;
-(UIView *)_backgroundView;
-(UIView *)_contentView;
-(BOOL)_fieldEditorAttached;
-(long long)_blurEffectStyleForAppearance;

@end

