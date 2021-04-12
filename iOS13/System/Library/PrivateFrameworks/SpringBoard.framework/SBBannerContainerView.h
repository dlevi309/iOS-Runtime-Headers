/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <PlatterKit/PLPlatterView.h>

@class SBBannerContextView, SBUIBannerContext;

@interface SBBannerContainerView : PLPlatterView {

	SBBannerContextView* _bannerContextView;

}

@property (nonatomic,retain) SBBannerContextView * bannerContextView;                 //@synthesize bannerContextView=_bannerContextView - In the implementation block
@property (nonatomic,retain,readonly) SBUIBannerContext * bannerContext; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SBUIBannerContext *)bannerContext;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidDismissWithReason:(int)arg1 ;
-(void)noteDidAppear;
-(void)setBannerContextView:(SBBannerContextView *)arg1 ;
-(SBBannerContextView *)bannerContextView;
@end

