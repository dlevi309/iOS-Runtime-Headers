/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <UIKitCore/UICollectionViewCell.h>

@class MSStickerView, CALayer;

@interface _MSStickerCollectionViewCell : UICollectionViewCell {

	MSStickerView* _stickerView;
	CALayer* _borderLayer;

}

@property (nonatomic,retain) CALayer * borderLayer;                      //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) id<MSStickerPrivate> sticker; 
@property (nonatomic,readonly) MSStickerView * stickerView;              //@synthesize stickerView=_stickerView - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setAnimating:(BOOL)arg1 ;
-(MSStickerView *)stickerView;
-(void)setSticker:(id<MSStickerPrivate>)arg1 ;
-(CALayer *)borderLayer;
-(id<MSStickerPrivate>)sticker;
-(void)showCellBorder:(BOOL)arg1 ;
-(void)setBorderLayer:(CALayer *)arg1 ;
@end

