/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIViewConfigurationStateReadonly
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted; 
@property (getter=isSelected,nonatomic,readonly) BOOL selected; 
@property (getter=isFocused,nonatomic,readonly) BOOL focused; 
@property (nonatomic,readonly) BOOL _showingCompactContextMenu; 
@property (nonatomic,readonly) unsigned long long _viewConfigurationState; 
@required
-(BOOL)isSelected;
-(BOOL)isDisabled;
-(BOOL)isFocused;
-(BOOL)isHighlighted;
-(BOOL)_showingCompactContextMenu;
-(unsigned long long)_viewConfigurationState;

@end

