/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

