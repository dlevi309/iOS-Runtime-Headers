/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

}

@property (retain,nonatomic) NEPremiumBadgeMask * premiumBadgeMask; 
@property (assign,nonatomic) BOOL isMotionEnabled; 
@property (readonly,nonatomic) TUShineView * shineView; 
-(void)transformWithMotionData:(id)arg1 ;
-(void)setPremiumBadgeMask:(NEPremiumBadgeMask *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isMotionEnabled;
-(void)setIsMotionEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(NEPremiumBadgeMask *)premiumBadgeMask;
-(TUShineView *)shineView;
@end

