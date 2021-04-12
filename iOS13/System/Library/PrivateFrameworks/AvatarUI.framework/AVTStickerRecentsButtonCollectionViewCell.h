/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CGRect)contentBounds;
-(void)updateWithImage:(id)arg1 ;
-(CGRect)circleLayerRect;
-(void)updateWithDefaultImage;
-(CAShapeLayer *)circularBackgroundLayer;
-(void)setCircularBackgroundLayer:(CAShapeLayer *)arg1 ;
@end

