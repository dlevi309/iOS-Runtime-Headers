/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class OKWidgetView;

@interface OKWidgetGridViewCell : UICollectionViewCell {

	OKWidgetView* _widgetView;

}

@property (nonatomic,retain) OKWidgetView * widgetView;              //@synthesize widgetView=_widgetView - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setWidgetView:(OKWidgetView *)arg1 ;
-(OKWidgetView *)widgetView;
@end

