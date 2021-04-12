/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIView, TintedView;

@interface LineGraphView : UIView {

	BOOL _showingTintedLine;
	UIImage* _lineImage;
	UIView* _tintedLineClipView;
	TintedView* _tintedLineView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)resizeSelectedLineClipViewWithLeftX:(double)arg1 rightX:(double)arg2 ;
-(void)setShowingSelectedLine:(BOOL)arg1 ;
-(void)setGraphImageSet:(id)arg1 ;
-(void)setSelectedLineImage:(id)arg1 ;
@end

