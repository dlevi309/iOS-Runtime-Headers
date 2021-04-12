/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUQuickControlInteractiveContentContaining <NSObject>
@property (assign,nonatomic,__weak) id<HUQuickControlContentHosting> quickControlHost; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,retain) id<HULayoutAnchorProviding> preferredFrameLayoutGuide; 
@optional
-(BOOL)shouldShowContentForReachabilityState:(BOOL)arg1;

@required
-(void)setUserInteractionEnabled:(BOOL)arg1;
-(BOOL)isUserInteractionEnabled;
-(id<HULayoutAnchorProviding>)preferredFrameLayoutGuide;
-(void)setPreferredFrameLayoutGuide:(id)arg1;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
-(void)setQuickControlHost:(id)arg1;
-(id<HUQuickControlContentHosting>)quickControlHost;

@end

