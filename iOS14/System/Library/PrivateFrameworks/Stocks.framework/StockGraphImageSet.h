/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

