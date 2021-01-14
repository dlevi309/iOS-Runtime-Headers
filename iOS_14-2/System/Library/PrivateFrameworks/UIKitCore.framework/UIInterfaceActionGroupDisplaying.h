/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIInterfaceActionVisualStyle;


@protocol UIInterfaceActionGroupDisplaying <NSObject>
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * visualStyle; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider; 
@required
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)reloadVisualStyle;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
-(void)setVisualStyleProvider:(id)arg1;

@end

