/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, CAShapeLayer;

@interface PLContactPhotoOverlay : UIView {

	UILabel* _titleLabel;
	UIImageView* __avatarPreview;
	CAShapeLayer* _circularLayer;

}

@property (nonatomic,readonly) UIImageView * _avatarPreview;                //@synthesize _avatarPreview=__avatarPreview - In the implementation block
@property (nonatomic,retain) CAShapeLayer * circularLayer;                  //@synthesize circularLayer=_circularLayer - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets overlayEdgeInsets; 
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CAShapeLayer *)circularLayer;
-(void)setCircularLayer:(CAShapeLayer *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(UIEdgeInsets)overlayEdgeInsets;
-(void)_commonPLContactPhotoOverlayInitialization;
-(CGRect)inscribingBounds;
-(void)beginAvatarTrackingFromImageView:(id)arg1 ;
-(void)endAvatarTracking;
-(UIImageView *)_avatarPreview;
@end

