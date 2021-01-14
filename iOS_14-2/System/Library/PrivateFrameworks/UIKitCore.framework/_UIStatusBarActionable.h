/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIStatusBarAction, UIView;


@protocol _UIStatusBarActionable <NSObject>
@property (nonatomic,retain) _UIStatusBarAction * action; 
@property (nonatomic,retain) _UIStatusBarAction * hoverAction; 
@property (nonatomic,readonly) UIView * hoverView; 
@property (nonatomic,readonly) CGRect absoluteHoverFrame; 
@property (nonatomic,readonly) BOOL hoverHighlightsAsRegion; 
@property (assign,nonatomic) NSDirectionalEdgeInsets extendedHoverInsets; 
@property (assign,nonatomic) UIEdgeInsets actionInsets; 
@property (nonatomic,readonly) id<UILayoutItem> layoutItem; 
@required
-(UIEdgeInsets)actionInsets;
-(CGRect)absoluteHoverFrame;
-(id<UILayoutItem>)layoutItem;
-(void)setHoverAction:(id)arg1;
-(UIView *)hoverView;
-(void)setActionInsets:(UIEdgeInsets)arg1;
-(BOOL)hoverHighlightsAsRegion;
-(_UIStatusBarAction *)hoverAction;
-(NSDirectionalEdgeInsets)extendedHoverInsets;
-(_UIStatusBarAction *)action;
-(void)setAction:(id)arg1;
-(void)setExtendedHoverInsets:(NSDirectionalEdgeInsets)arg1;

@end

