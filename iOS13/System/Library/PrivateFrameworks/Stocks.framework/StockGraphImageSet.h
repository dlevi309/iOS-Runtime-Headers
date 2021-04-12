/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class UIImage;

@interface StockGraphImageSet : NSObject {

	UIImage* _lineGraphImage;
	UIImage* _highlightOverlayImage;
	UIImage* _volumeGraphImage;

}

@property (nonatomic,retain) UIImage * lineGraphImage;                     //@synthesize lineGraphImage=_lineGraphImage - In the implementation block
@property (nonatomic,retain) UIImage * highlightOverlayImage;              //@synthesize highlightOverlayImage=_highlightOverlayImage - In the implementation block
@property (nonatomic,retain) UIImage * volumeGraphImage;                   //@synthesize volumeGraphImage=_volumeGraphImage - In the implementation block
-(UIImage *)lineGraphImage;
-(void)setLineGraphImage:(UIImage *)arg1 ;
-(UIImage *)highlightOverlayImage;
-(void)setHighlightOverlayImage:(UIImage *)arg1 ;
-(UIImage *)volumeGraphImage;
-(void)setVolumeGraphImage:(UIImage *)arg1 ;
@end

