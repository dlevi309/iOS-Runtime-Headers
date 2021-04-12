/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <StocksUI/StocksUI-Structs.h>
#import <UIKitCore/UICollectionView.h>

@interface StocksUI.TickerCollectionView : UICollectionView {

	 autoScrolling;
	 delta;
	 minimumScrollDelta;
	 displayLink;
	 tickerCollectionModel;

}
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)handleAccessibilitySettingsChangedWithNotification:(id)arg1 ;
-(void)autoScrollWithDisplayWithDisplayLink:(id)arg1 ;
@end

