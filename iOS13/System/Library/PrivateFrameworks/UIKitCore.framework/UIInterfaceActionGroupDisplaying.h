/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIInterfaceActionVisualStyle;


@protocol UIInterfaceActionGroupDisplaying <NSObject>
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * visualStyle; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider; 
@required
-(void)setVisualStyleProvider:(id)arg1;
-(void)reloadVisualStyle;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;

@end

