/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class OKWidgetView;

@interface OKWidgetContainerView : OFUIView {

	OKWidgetView* _widgetView;

}

@property (assign,nonatomic) OKWidgetView * widgetView; 
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setWidgetView:(OKWidgetView *)arg1 ;
-(OKWidgetView *)widgetView;
@end

