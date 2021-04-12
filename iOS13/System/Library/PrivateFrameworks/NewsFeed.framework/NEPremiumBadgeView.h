/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <UIKitCore/UIView.h>

@class NEPremiumBadgeMask, TUShineView;

@interface NEPremiumBadgeView : UIView {

	 premiumBadgeMask;
	 isMotionEnabled;
	 shineView;
	 $__lazy_storage_$_shineMaskLayer;
	??? context;

}

@property (retain,nonatomic) NEPremiumBadgeMask * premiumBadgeMask; 
@property (assign,nonatomic) BOOL isMotionEnabled; 
@property (readonly,nonatomic) TUShineView * shineView; 
-(void)transformWithMotionData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isMotionEnabled;
-(NEPremiumBadgeMask *)premiumBadgeMask;
-(void)setPremiumBadgeMask:(NEPremiumBadgeMask *)arg1 ;
-(void)setIsMotionEnabled:(BOOL)arg1 ;
-(TUShineView *)shineView;
@end

