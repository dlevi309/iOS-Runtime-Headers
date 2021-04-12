/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIColor, HULegibilityLabel, HUCircleView, UIImageView;

@interface HUCameraStatusOverlayView : UIView {

	BOOL _isDisplayingForSingleCamera;
	BOOL _didUpdateConstraints;
	NSString* _statusString;
	UIColor* _statusColor;
	HULegibilityLabel* _statusLabel;
	HUCircleView* _statusIndicator;
	UIImageView* _alertBadge;

}

@property (nonatomic,retain) HULegibilityLabel * statusLabel;               //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) HUCircleView * statusIndicator;                //@synthesize statusIndicator=_statusIndicator - In the implementation block
@property (assign,nonatomic) BOOL didUpdateConstraints;                     //@synthesize didUpdateConstraints=_didUpdateConstraints - In the implementation block
@property (nonatomic,retain) UIImageView * alertBadge;                      //@synthesize alertBadge=_alertBadge - In the implementation block
@property (nonatomic,copy) NSString * statusString;                         //@synthesize statusString=_statusString - In the implementation block
@property (nonatomic,retain) UIColor * statusColor;                         //@synthesize statusColor=_statusColor - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingForSingleCamera;              //@synthesize isDisplayingForSingleCamera=_isDisplayingForSingleCamera - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStatusColor:(UIColor *)arg1 ;
-(UIColor *)statusColor;
-(void)layoutSubviews;
-(NSString *)statusString;
-(HULegibilityLabel *)statusLabel;
-(void)setStatusLabel:(HULegibilityLabel *)arg1 ;
-(id)_chevronImage;
-(void)setStatusString:(NSString *)arg1 ;
-(void)setIsDisplayingForSingleCamera:(BOOL)arg1 ;
-(void)updateStatusForPlaybackEngine:(id)arg1 ;
-(UIImageView *)alertBadge;
-(void)updateStatusLabelBounds;
-(HUCircleView *)statusIndicator;
-(void)setBadgeStatus:(unsigned long long)arg1 ;
-(BOOL)isDisplayingForSingleCamera;
-(id)_exclamationImage;
-(void)setStatusIndicator:(HUCircleView *)arg1 ;
-(BOOL)didUpdateConstraints;
-(void)setDidUpdateConstraints:(BOOL)arg1 ;
-(void)setAlertBadge:(UIImageView *)arg1 ;
@end

