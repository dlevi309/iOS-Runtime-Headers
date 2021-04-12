/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class TintedView, UIView, UIImage, StockGraphImageSet;

@interface VolumeGraphView : UIView {

	BOOL _showingTintedRegion;
	TintedView* _tintedVolumeView;
	UIView* _tintedRegionClipView;
	UIImage* _volumeImage;
	StockGraphImageSet* _graphImageSet;

}

@property (nonatomic,retain) StockGraphImageSet * graphImageSet;              //@synthesize graphImageSet=_graphImageSet - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2 ;
-(void)setShowingSelectedRegion:(BOOL)arg1 ;
-(void)setGraphImageSet:(StockGraphImageSet *)arg1 ;
-(StockGraphImageSet *)graphImageSet;
@end

