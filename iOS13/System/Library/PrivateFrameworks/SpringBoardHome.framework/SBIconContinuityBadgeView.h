/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconAccessoryView.h>

@protocol SBIconListLayout;
@class SBIconAccessoryImage, SBDarkeningImageView, UIImageView, NSString, SBFParallaxSettings;

@interface SBIconContinuityBadgeView : UIView <SBIconAccessoryView> {

	id<SBIconListLayout> _listLayout;
	long long _badgeType;
	SBIconAccessoryImage* _backgroundImage;
	SBIconAccessoryImage* _foregroundImage;
	SBDarkeningImageView* _backgroundView;
	UIImageView* _foregroundView;

}

@property (nonatomic,readonly) SBIconAccessoryImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) SBIconAccessoryImage * foregroundImage;                //@synthesize foregroundImage=_foregroundImage - In the implementation block
@property (nonatomic,readonly) SBDarkeningImageView * backgroundView;               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIImageView * foregroundView;                        //@synthesize foregroundView=_foregroundView - In the implementation block
@property (assign,nonatomic) long long badgeType;                                   //@synthesize badgeType=_badgeType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SBFParallaxSettings * parallaxSettings; 
@property (nonatomic,retain) id<SBIconListLayout> listLayout;                       //@synthesize listLayout=_listLayout - In the implementation block
+(id)backgroundImageCache;
+(id)_checkoutImageForContinuityBadgeType:(long long)arg1 highlighted:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(void)prepareForReuse;
-(CGSize)badgeSize;
-(SBIconAccessoryImage *)backgroundImage;
-(CGSize)intrinsicContentSize;
-(SBDarkeningImageView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)foregroundView;
-(void)setBadgeType:(long long)arg1 ;
-(long long)badgeType;
-(void)setListLayout:(id<SBIconListLayout>)arg1 ;
-(id<SBIconListLayout>)listLayout;
-(CGPoint)accessoryCenterForIconBounds:(CGRect)arg1 ;
-(void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3 ;
-(BOOL)displayingAccessory;
-(void)configureForIcon:(id)arg1 infoProvider:(id)arg2 ;
-(void)setAccessoryBrightness:(double)arg1 ;
-(id)_checkoutBackgroundImage;
-(CGPoint)layoutOffset;
-(void)_clearIcon;
-(void)setForegroundImage:(SBIconAccessoryImage *)arg1 ;
-(SBIconAccessoryImage *)foregroundImage;
@end

