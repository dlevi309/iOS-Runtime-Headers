/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorScrollViewControllerProxy.h>

@class UIPushBehavior;

@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy {

	UIPushBehavior* _velocityPushBehavior;

}
+(id)supportedSettings;
-(CGRect)contentBounds;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(CGSize)contentSize;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)commonInit;
-(void)viewDidLoad;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGPoint)contentOffset;
-(void)dealloc;
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

