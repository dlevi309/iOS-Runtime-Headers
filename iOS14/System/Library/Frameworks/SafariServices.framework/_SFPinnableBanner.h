/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIView.h>

@interface _SFPinnableBanner : UIView {

	BOOL _pinnedToTop;
	BOOL _initiallyBehindNavigationBar;

}

@property (assign,getter=isPinnedToTop,nonatomic) BOOL pinnedToTop;                                                //@synthesize pinnedToTop=_pinnedToTop - In the implementation block
@property (assign,getter=isInitiallyBehindNavigationBar,nonatomic) BOOL initiallyBehindNavigationBar;              //@synthesize initiallyBehindNavigationBar=_initiallyBehindNavigationBar - In the implementation block
+(double)unpinAnimationDuration;
+(double)unpinAnimationDelay;
+(double)pinAnimationDelay;
-(void)invalidateBannerLayout;
-(BOOL)isPinnedToTop;
-(void)setPinnedToTop:(BOOL)arg1 ;
-(BOOL)isInitiallyBehindNavigationBar;
-(void)setInitiallyBehindNavigationBar:(BOOL)arg1 ;
-(void)contentSizeCategoryDidChange;
@end

