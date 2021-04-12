/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <AvatarUI/AVTStickerRecentsStickerCollectionViewCell.h>

@class CAShapeLayer;

@interface AVTStickerRecentsButtonCollectionViewCell : AVTStickerRecentsStickerCollectionViewCell {

	CAShapeLayer* _circularBackgroundLayer;

}

@property (nonatomic,retain) CAShapeLayer * circularBackgroundLayer;              //@synthesize circularBackgroundLayer=_circularBackgroundLayer - In the implementation block
+(id)identifier;
-(CGRect)contentBounds;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateWithImage:(id)arg1 ;
-(CGRect)circleLayerRect;
-(void)updateWithDefaultImage;
-(CAShapeLayer *)circularBackgroundLayer;
-(void)setCircularBackgroundLayer:(CAShapeLayer *)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

