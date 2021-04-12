/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAnimating:(BOOL)arg1 ;
-(id<MSStickerPrivate>)sticker;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setSticker:(id<MSStickerPrivate>)arg1 ;
-(MSStickerView *)stickerView;
-(CALayer *)borderLayer;
-(void)setBorderLayer:(CALayer *)arg1 ;
-(void)showCellBorder:(BOOL)arg1 ;
@end

