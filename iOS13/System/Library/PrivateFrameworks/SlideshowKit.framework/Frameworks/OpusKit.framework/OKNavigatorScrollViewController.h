/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorScrollViewControllerProxy.h>

@class UIPushBehavior;

@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy {

	UIPushBehavior* _velocityPushBehavior;

}
+(id)supportedSettings;
-(void)dealloc;
-(CGSize)contentSize;
-(void)commonInit;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)viewDidLoad;
-(CGPoint)contentOffset;
-(CGRect)contentBounds;
-(id)dynamicsPushBehaviors;
-(id)layoutSettingsKeys;
-(void)pushWatchdog:(id)arg1 ;
-(void)setSettingContentSize:(CGSize)arg1 ;
-(CGSize)settingContentSize;
-(void)setSettingIndicatorStyle:(unsigned long long)arg1 ;
-(void)setSettingAlwaysBounceVertical:(BOOL)arg1 ;
-(void)setSettingAlwaysBounceHorizontal:(BOOL)arg1 ;
-(void)setSettingShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)setSettingShowsHorizontalScrollIndicator:(BOOL)arg1 ;
@end

